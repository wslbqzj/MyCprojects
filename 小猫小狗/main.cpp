// main.cpp: implementation of the main class.
//
//////////////////////////////////////////////////////////////////////
#include<iostream>

 #include <conio.h> 
 #include <time.h> 
#include<string.h>
using namespace std;

#include "main.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

void run::ran()
{
	cat1.shuru();
	dog1.shuru();
	float year=0;
	int month=1,inp;

	srand( (unsigned)time( NULL)); 
	if((rand()%2)==0)            //�жϹ���ʼ�Ƿ��з�
		strcpy(have,"y");
	else
		strcpy(have,"n");
	srand( (unsigned)time( NULL ) ); 
	if((rand()%2)==1)            //è��һ�����˽��Ƿ��յ�����
	{
		dog1.liwu=(rand()%101);
		dog1.save=dog1.save-dog1.liwu;
		cat1.amount=cat1.amount+2;
	}
	
	if((rand()%2)==1)           //è�ڶ������˽��Ƿ��յ�����
	{
		dog1.liwu=(rand()%101);
		dog1.save=dog1.save-dog1.liwu;
		cat1.amount=cat1.amount+2;
	}
	if((rand()%2)==1)           //è�����Ƿ��յ�����
	{
	    dog1.liwu=(rand()%101);
		dog1.save=dog1.save-dog1.liwu;
		cat1.amount++;
	}
	

	if((rand()%2)==1)          //����һ�����˽��Ƿ��յ�����
	{
		cat1.liwu=(rand()%101);
		cat1.save=cat1.save-cat1.liwu;
		dog1.amount=dog1.amount+2;
	}
	
	if((rand()%2)==1)              //���ڶ������˽��Ƿ��յ�����
	{
		cat1.liwu=(rand()%101);
		cat1.save=cat1.save-cat1.liwu;
		dog1.amount=dog1.amount+2;
	}
	if((rand()%2)==1)                  //�������Ƿ��յ�����
	{
		cat1.liwu=(rand()%101);
		cat1.save=cat1.save-cat1.liwu;
		dog1.amount++;
	}

	for(day=1;year<1.5;day++)       //��ѭ��
	{
		if(day==32&&(month==1||month==3||month==5||month==7||month==8||month==10||month==12))      //���ڼ���
		{
			month++;
			day=1;
			if(month==13)
			{
				year++;
				month=1;
			}
		}
		else if(day==31&&(month==4||month==6||month==9||month==11))       
		{
			month++;
			day=1;
			if(month==13)
			{
				year++;
				month=1;
			}
		}
		else
		{
			if(day==29)         
			{
				month++;
				day=1;
			}
		}

		price=rand()%5001+5000;//����

		if(dog1.save==price)
		{
			strcpy(have,"y");
		}
		int fu=rand()%4;
		if(fu==1)              //�ж��Ƿ񳳼�
		{
			cat1.amount=cat1.amount-0.5;
			dog1.amount=dog1.amount-0.5;
		}
		dog1.save=dog1.save+dog1.income-dog1.cost;
		cat1.save=cat1.save+cat1.income-cat1.cost;

		if(cat1.amount>=9&&dog1.amount>=9&&strcmp(have,"y")==0&&year<=1.5)         //è�͹���������
		{
			cout<<"yes"<<endl;
			break;
		}

		cout<<"*************************************************************"<<endl;
		_sleep(1000);
		cout<<"���Ĵ���ܺ�:"<<dog1.save<<endl;
		cout<<"è�Թ���ָ��:"<<cat1.amount<<endl;
		cout<<"����è��ָ��:"<<dog1.amount<<endl;
		cout<<"��ѡ���Ƿ������0��1�ǣ�:";
		cin>>inp;
		if(inp==0)
			break;
		cout<<endl;
	}
	if(cat1.amount<9||dog1.amount<9||strcmp(have,"n")==0||year>1.5)
		cout<<"no"<<endl;
}