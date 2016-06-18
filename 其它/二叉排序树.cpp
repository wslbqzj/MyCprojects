#include<stdio.h>
#include<malloc.h>
typedef struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
}BSTNode;
BSTNode *p;
int t=0,flag=0,a[100],n;
int Insert(BSTNode *&p,int k)
{
	if(p==NULL)
	{
		p=(BSTNode *)malloc(sizeof(BSTNode));
		p->data =k;
		p->lchild =p->rchild =NULL;
		return 1;
	}
	else if(k==p->data )
		return 0;
	else if(k<p->data)
		return Insert(p->lchild ,k);
	else 
		return Insert(p->rchild ,k);
}
void Creat(BSTNode *&p)
{
	p=NULL;
	int i=0;
	while(i<n)
	{
		Insert(p,a[i]);
		i++;
	}
}
void Search(BSTNode *p,int k)
{
	t++;
	if(flag==0)
	{
		if(p==NULL)
		{
			flag=1;
		}	
		else if(p->data==k)
		{
			flag=2;
		}
	    else if(k<p->data)
		    Search(p->lchild ,k);
	    else 
		    Search(p->rchild ,k);
	}
}
int main()
{
	int i,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	Creat(p);
	Search(p,x);
	if(flag==2)
		printf("%d",t);
	else
		printf("-1");
	return 0;
}