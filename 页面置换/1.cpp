//�Ƚ��ȳ��㷨
#include<stdio.h>
#include<string.h>
int a[3]={0};//���ҳ����Ϣ
int b[10];//ҳ������
int i,j;

int m=0;
float num=0;
int k;//����
float e;//ҳ����
void hanshu()
{
	for(i=0;i<e;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("**********************************\n");
	for(j=0;j<3;j++)
	{
		if(j!=2)
			printf("%d ",a[j]);
		else
			printf("%d\n",a[j]);
	}
	a[0]=b[0];
	for(j=0;j<3;j++)
	{
		if(j!=2)
			printf("%d ",a[j]);
		else
			printf("%d\n",a[j]);
	}
	a[1]=b[1];
	for(j=0;j<3;j++)
	{
		if(j!=2)
			printf("%d ",a[j]);
		else
			printf("%d\n",a[j]);
	}
	a[2]=b[2];
	for(j=0;j<3;j++)
	{
		if(j!=2)
			printf("%d ",a[j]);
		else
			printf("%d\n",a[j]);
	}
	for(i=0;i<10;i++)
	{   
		if(i>k-1)
		{
			if(b[i]!=a[0]&&b[i]!=a[1]&&b[i]!=a[2])
			{
				num++;
				a[m]=b[i];
				m++;
				if(m==3) m=0;
			}
			for(j=0;j<3;j++)
			{
				if(j!=2)
					printf("%d ",a[j]);
				else
					printf("%d\n",a[j]);
			}
		}
	}
}

int main()
{
	printf("********�Ƚ��ȳ�ҳ���û��㷨*********\n");
	int flag;
	printf("**ҳ������e=10\n");
	printf("**���̿���k=3\n");
	printf("�Ƿ�ʼ(1 or 0)");
	scanf("%d",&flag);
	printf("\n");
	while(1)
	{
		memset(a, 0, sizeof(a));
		int a[3]={0};//���ҳ����Ϣ
		i=0;
		j=0;
		m=0;
		num=0;
		k=3;//����
		e=10;//ҳ����
		printf("**ҳ�����У�");
		//�㷨ʵ��
		hanshu();
		printf("ȱҳ��Ϊ��%d\n",int(num));
		printf("ȱҳ�ʣ�%g\n",num/e);
		
		printf("�Ƿ�ʼ(1 or 0)");
		scanf("%d",&flag);
		//printf("\n");
		if(flag==0)
			break;
	}
	return 0;
}
