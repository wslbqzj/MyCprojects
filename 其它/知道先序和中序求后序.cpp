#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
	char data;
	struct node*lchild;
	struct node*rchild;
}BiTree;
int i=0,n=0,num=0;
char a[100];
char b[100];
BiTree *c;
BiTree*Creat(char *pre,char*in,int n)
{
	BiTree *T;
	char *p;
	int k;
	if(n<=0)
		return NULL;
	T=(BiTree *)malloc(sizeof(BiTree));
	T->data=*pre;
	for(p=in;p<in+n;p++)
	{
		if(*p==*pre)
		{
			break;
		}
	}
	k=p-in;
	T->lchild=Creat(pre+1,in,k);
	T->rchild=Creat(pre+k+1,p+1,n-k-1);
	return T;
}
void postorder(BiTree *T)
{
	if(T!=NULL)
	{
		postorder(T->lchild);
		postorder(T->rchild);
		printf("%c",T->data);
	}
}
int main()
{
//	BiTree *T;
	scanf("%d",&num);
	{
		//printf("in:\n");
		scanf("%s",a);
		n=strlen(a);
		//printf("pre:\n");
		scanf("%s",b);
		c=Creat(b,a,n);
		//printf("post:\n");
		postorder(c);
	}
    return 0;
}