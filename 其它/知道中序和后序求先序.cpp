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
/*BiTree*Creat(char *in,char*post,int n)
{
	BiTree *T;
	char *p;
	int k;
	if(n<=0)
		return NULL;
	T=(BiTree *)malloc(sizeof(BiTree));
	T->data=*in;
	for(p=post;p<post+n;p++)
	{
		if(*p==*in)
		{
			break;
		}
	}
	k=p-post;
	T->lchild=Creat(in+1,post,k);
	T->rchild=Creat(in+k+1,p+1,n-k-1);
	return T;
}*/

BiTree*Creat(char *post,char *in,int n)
{
	BiTree *T;
	char *p,r;
	int k;
	if(n<=0) return NULL;
	r=*(post+n-1);
	T=(BiTree*)malloc(sizeof(BiTree));
	T->data=r;
	for(p=in;p<in+n;p++)
	{
		if(*p==r)  break;

	}
	k=p-in;
	T->lchild=Creat(post,in,k);
	T->rchild=Creat(post+k,p+1,n-k-1);
	return T;
}

void pre(BiTree *T)
{
	if(T!=NULL)
	{
		printf("%c",T->data);
		pre(T->lchild);
		pre(T->rchild);
	}
}
int main()
{
	scanf("%d",&num);
	{
		scanf("%s",a);
		n=strlen(a);
		scanf("%s",b);
		c=Creat(b,a,n);
		pre(c);
	}
    return 0;
}