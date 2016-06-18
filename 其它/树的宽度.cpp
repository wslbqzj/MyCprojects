/*#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct node
{
	char data;
	struct node*lchild;
	struct node*rchild;
}Tree;
int i=-1;
char a[100];
void creat(Tree *&T)
{
	i++;
	if(a[i]=='#')
		T=NULL;
	else
	{
		T=(Tree *)malloc(sizeof(Tree));
		T->data =a[i];
		creat(T->lchild);
		creat(T->rchild);
	}
}
int wide(Tree *&T)
{
	struct
	{
		int lno;
		Tree *p;
	}qu[100];
	int front,rear;
	int lnum,max,i,n;
	front=rear=0;
	if(T!=NULL)
	{
		rear++;
		qu[rear].p=T;
		qu[rear].lno=1;
		while(rear!=front)
		{
			front++;
			T=qu[front].p;
			lnum=qu[front].lno;
			if(T->lchild!=NULL)
			{
				rear++;
				qu[rear].p=T->lchild ;
				qu[rear].lno=lnum+1;
			}
			if(T->rchild!=NULL)
			{
				rear++;
				qu[rear].p=T->lchild;
				qu[rear].lno=lnum+1;
			}
		}
		max=0;lnum=1;i=1;
		while(i<=rear)
		{
			n=0;
			while(i<=rear&&qu[i].lno==lnum)
			{
				n++;
				i++;
			}
			lnum=qu[i].lno;
			if(n>max)
				max=n;
		}
		return max;
	}
	else
		return 0;
}
int main()
{
	Tree *T;
	int size=0,j=0,b[100];
	while(scanf("%s",a)!=EOF)
	{
		creat(T);
		i=-1;
		b[j]=wide(T);
		j++;
		for(size=0;size<j;size++)
		{
			if(size==0)
				printf("%d",b[size]);
			else
				printf(" %d",b[size]);
		}
	}
	return 0;
}*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
char data;
struct node *lchild;
struct node *rchild;
}tree;
char a[100];
int i=-1;
void creat(tree *&T)
{
i++;
if(a[i]=='#')
T=NULL;
else 
{
T=(tree *)malloc(sizeof(tree));
T->data=a[i];
creat(T->lchild);
creat(T->rchild);
}
}
int wide(tree *&T)
{
struct 
{
int lno;
tree *p;
}qu[100];
int front,rear;
int lnum,max,i,n;
front=rear=0;
if(T!=NULL)
{
rear++;
qu[rear].p=T;
qu[rear].lno=1;
while(rear!=front)
{
front++;
T=qu[front].p;
lnum=qu[front].lno;
if(T->lchild!=NULL)
{
rear++;
qu[rear].p=T->lchild;
qu[rear].lno=lnum+1;
}
if(T->rchild!=NULL)
{
rear++;
qu[rear].p=T->rchild;
qu[rear].lno=lnum+1;
}
}
max=0;lnum=1;i=1;
while(i<=rear)
{
n=0;
while(i<=rear&&qu[i].lno==lnum)
{
n++;
i++;

  }
  lnum=qu[i].lno;
  if(n>max) max=n;
  
	}
	return max;
	}
	else return 0;
	}
	
	  int main()
	  {
	  tree *T;
	  int size=0,j=0,b[100];
	  while(scanf("%s",a)!=EOF)
	  {
	  creat(T);
	  i=-1;
	  b[j]=wide(T);
	  j++;
		for(size=0;size<j;size++)
		{
		if(size==0) printf("%d",b[size]);
		else printf(" %d",b[size]);
		
		  }
	  }
		  return 0;
}
