#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MaxSize 10000
typedef struct
{	char  data[MaxSize][100];  
int   length;   
} sqlist;
int main()
{
	int n,i=0;
	sqlist *L;
	void create(sqlist * &L,int n);
	scanf("%d",&n);
	create(L,n);
	for(i=n-1;i>=0;i--)
	{
		if(i==n-1)
		{
			printf("%s",L->data [i]);
		}
		else
		{
		    printf(" %s",L->data [i]);
		}
	}
//	printf("\n");
	return 0;
}
void create(sqlist * &L,int n)
{
	int i;
	char num[100];
	L=(sqlist * )malloc(sizeof(sqlist));
	for(i=0;i<n;i++)
	{
		scanf("%s",num);
		strcpy(L->data[i],num);
	}
	L->length=n;
}