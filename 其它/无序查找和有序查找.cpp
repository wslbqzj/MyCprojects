#include<stdio.h>
#include<malloc.h>
typedef struct
{
	int data[100];
	int length;
}sqlist;
void Creat(sqlist *&L,int a[],int n)
{
	int i;
	L=(sqlist *)malloc(sizeof(sqlist));
	for(i=0;i<n;i++)
	{
		L->data[i]=a[i];
	}
	L->length=n;
}
void wuxu(sqlist *L,int e)
{
	int i=0;
	while(i<L->length &&L->data [i]!=e)
		i++;
	if(i>=L->length )
		printf("-1\r\n");
	else
		printf( "%d\r\n%d\r\n",i,i+1);
}
void Quick(int R[],int s,int t)
{
	int i=s,j=t;
	int tmp;
	if(s<t)
	{
		tmp=R[s];
		while(i!=j)
		{
			while(j>i&&R[j]>=tmp)
				j--;
			R[i]=R[j];
			while(i<j&&R[i]<=tmp)
				i++;
			R[j]=R[i];
		}
		R[i]=tmp;
		Quick(R,s,i-1);
		Quick(R,i+1,t);
	}
}
int main()
{
	sqlist *L;
	int i=0,x,n,b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	Creat(L,b,n);
	scanf("%d",&x);
	wuxu(L,x);
	Quick(b,0,n-1);
	for(i=0;i<n;i++)
	{
		if(b[i]==x)
		{
			printf("%d\r\n%d",i,i+1);
			break;
		}
	}
	if(i==n)
	{
		printf("-1\r\n");
	}
	return 0;
}