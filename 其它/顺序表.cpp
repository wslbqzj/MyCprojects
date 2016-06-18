#include<stdio.h>
#include<stdlib.h>
#define MaxSize 10000
typedef struct
{	int  data[MaxSize];  
int   length;   
} sqlist;
int x;
int main()
{
	int y,z,i;
	sqlist *L;
	void create(sqlist * &L,int n);
	void insert(sqlist * &L,int s,int e);
	
	scanf("%d",&x);
	create(L,x);
	scanf("%d%d",&y,&z);
	insert(L,y,z);
	for(i=0;i<=x;i++)
	{
		if(i==0)
			printf("%d",L->data[i]);
		else
			printf(" %d",L->data[i]);
	}
	printf("\n");

	return 0;
}
void create(sqlist * &L,int n)
{
	int i,num;
	L=(sqlist * )malloc(sizeof(sqlist));
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		L->data[i]=num;
	}
	L->length=n;
}
void insert(sqlist * &L,int s,int e)
{
	int j=0,i,k=0;
	for(j=0;j<x;j++)
	{
		if(L->data[j]==s)
		{
			for(i=x;i>j;i--)
			{
				L->data[i]=L->data[i-1];
			}
			L->data[j]=e;
			k=1;
			break;
		}	
	}
	if(k==0)	L->data[x]=e;
}




