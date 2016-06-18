//先进先出算法
#include<stdio.h>
#include<string.h>
int a[3]={0};//存放页面信息
int b[10];//页面序列
int i,j;

int m=0;
float num=0;
int k;//块数
float e;//页面数
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
	printf("********先进先出页面置换算法*********\n");
	int flag;
	printf("**页面总数e=10\n");
	printf("**进程块数k=3\n");
	printf("是否开始(1 or 0)");
	scanf("%d",&flag);
	printf("\n");
	while(1)
	{
		memset(a, 0, sizeof(a));
		int a[3]={0};//存放页面信息
		i=0;
		j=0;
		m=0;
		num=0;
		k=3;//块数
		e=10;//页面数
		printf("**页面序列：");
		//算法实现
		hanshu();
		printf("缺页数为：%d\n",int(num));
		printf("缺页率：%g\n",num/e);
		
		printf("是否开始(1 or 0)");
		scanf("%d",&flag);
		//printf("\n");
		if(flag==0)
			break;
	}
	return 0;
}
