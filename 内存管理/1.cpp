#include "stdio.h"
#include "iostream.h"
#include "string.h"
#include "iomanip.h"
const int MAXJOB=100;//���������¼��
typedef struct node{
	int start;
	int length;
	char tag[20];
}job;
job frees[MAXJOB];//�����������
int free_quantity;
job occupys[MAXJOB];//�����ѷ�������
int occupy_quantity;
//��ʼ������
void initial()
{
	int i;
	for(i=0;i<MAXJOB;i++)
	{
		frees[i].start=-1;
		frees[i].length=0;
		strcpy(frees[i].tag,"free");
		occupys[i].start=-1;
		occupys[i].length=0;
		strcpy(occupys[i].tag,"");
	}
	free_quantity=0;
	occupy_quantity=0;
}
//�����ݺ���
int readData()
{
	FILE *fp;
	char fname[20];
	cout<<"�������ʼ���б��ļ���:";
	cin>>fname;
	if((fp=fopen(fname,"r"))==NULL)
	{
		cout<<"����,�ļ��򲻿�,�����ļ���"<<endl;
	}
	else
	{
		while(!feof(fp))
		{
			fscanf(fp,"%d,%d",&frees[free_quantity].start,&frees[free_quantity].length);
			free_quantity++;
		}
		return 1;
	}
	return 0;
}
//sort
void sort()
{
	int i,j,p;
	for(i=0;i<free_quantity-1;i++)
	{
		p=i;
		for(j=i+1;j<free_quantity;j++)
		{
			if(frees[j].start<frees[p].start)
			{
				p=j;
			}
		}
		if(p!=i)
		{
			frees[free_quantity]=frees[i];
			frees[i]=frees[p];
			frees[p]=frees[free_quantity];
		}
	}
}
//��ʾ����
void view()
{
	int i;
	cout<<endl<<"----------------------------------------------------------"<<endl;
	cout<<"��ǰ���б�:"<<endl;
	cout<<"��ʼ��ַ���� ״̬"<<endl;
	for(i=0;i<free_quantity;i++)
	{
		cout.setf(2);
		cout.width(12);
		cout<<frees[i].start;
		cout.width(10);
		cout<<frees[i].length;
		cout.width(8);
		cout<<frees[i].tag<<endl;
	}
	cout<<endl<<"----------------------------------------------------------"<<endl;
	cout<<"��ǰ�ѷ����:"<<endl;
	cout<<"��ʼ��ַ���� ռ����ҵ��"<<endl;
	for(i=0;i<occupy_quantity;i++)
	{
		cout.setf(2);
		cout.width(12);
		cout<<occupys[i].start;
		cout.width(10);
		cout<<occupys[i].length;
		cout.width(8);
		cout<<occupys[i].tag<<endl;
	}
}
//������Ӧ�����㷨
void earliest()
{
	char job_name[20];
	int job_length;
	int i,j,flag,t;
	cout<<"�������������ڴ�ռ����ҵ���Ϳռ��С:";
	cin>>job_name;
	cin>>job_length;
	flag=0;
	for(i=0;i<free_quantity;i++)
	{
		if(frees[i].length>=job_length)
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<endl<<"Sorry,��ǰû�������������볤�ȵĿ����ڴ�,���Ժ�����"<<endl;
	}
	else
	{
		t=0;
		i=0;
		while(t==0)
		{
			if(frees[i].length>=job_length)
			{
				t=1;
			}
			i++;
		}
		i--;
		occupys[occupy_quantity].start=frees[i].start;
		strcpy(occupys[occupy_quantity].tag,job_name);
		occupys[occupy_quantity].length=job_length;
		occupy_quantity++;
		if(frees[i].length>job_length)
		{
			frees[i].start+=job_length;
			frees[i].length-=job_length;
		}
		else
		{
			for(j=i;j<free_quantity-1;j++)
			{
				frees[j]=frees[j+1];
			}
			free_quantity--;
			cout<<"�ڴ�ռ�ɹ�:)"<<endl;
		}
	}
}
//������ҵ
void finished()
{
	char job_name[20];
	int i,j,flag,p=0;
	int start;
	int length;
	cout<<"������Ҫ��������ҵ��:";
	cin>>job_name;
	flag=-1;
	for(i=0;i<occupy_quantity;i++)
	{
		if(!strcmp(occupys[i].tag,job_name))
		{
			flag=i;
			start=occupys[i].start;
			length=occupys[i].length;
		}
	}
	if(flag==-1)
	{
		cout<<"û�������ҵ��"<<endl;
	}
	else
	{
		//������б�
		for(i=0;i<free_quantity;i++)
		{
			if((frees[i].start+frees[i].length)==start)
			{
				if(((i+1)<free_quantity)&&(frees[i+1].start==start+length))
				{
					frees[i].length=frees[i].length+frees[i+1].length+length;
					for(j=i+1;j<free_quantity;j++)
					{
						frees[j]=frees[j+1];
					}
					free_quantity--;
					p=1;
				}
				else
				{
					frees[i].length+=length;
					p=1;
				}
			}
			if(frees[i].start==(start+length))
			{
				frees[i].start=start;
				frees[i].length+=length;
				p=1;
			}
		}
		if(p==0)
		{
			frees[free_quantity].start=start;
			frees[free_quantity].length=length;
			free_quantity++;
		}
		//ɾ��������еĸ���ҵ
		for(i=flag;i<occupy_quantity;i++)
		{
			occupys[i]=occupys[i+1];
		}
		occupy_quantity--;
	}
}
void main()
{
	int flag=0;
	int t=1;
	int chioce=0;
	cout<<" �ɱ�����洢����ģ��ϵͳ "<<endl;
	cout<<" ����������������������������������������������"<<endl;
	initial();
	flag=readData();
	while(flag==1){
		sort();
		cout<<endl<<endl<<"========================================================"<<endl;
			cout<<" �ɱ�����洢����ģ��ϵͳ"<<endl;
		cout<<"========================================================="<<endl;
		cout<<" 1.����ռ� 2.������ҵ 3.��ʾ���б�ͷ���� 0.�˳�"<<endl;
		cout<<"��ѡ��:";
		cin>>chioce;
		switch(chioce){
		case 1:
			earliest();
			break;
		case 2:
			finished();
			break;
		case 3:
			view();
			break;
		case 0:
			flag=0;
			break;
		default:
			cout<<"ѡ�����!"<<endl;
		}
	}
}