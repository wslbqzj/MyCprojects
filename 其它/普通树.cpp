#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct node
{
	char data;
	struct node*lchild;
	struct node*rchild;
}tree;
char a[100];
int i=-1,j=0,b[100]={0},c[100]={0};
void creat(tree *&T)
{
	i++;
	if(a[i]=='#')
		T=NULL;
	else
	{
		T=(tree*)malloc(sizeof(tree));
		T->data=a[i];
		creat(T->lchild );
		creat(T->rchild );
	}
}
int max=1;tree *p;
void bianli(tree *T)
{
	
	while(T!=NULL)
	{
		if(T->lchild!=NULL)
			T=T->lchild;
		if(T->rchild!=NULL)
		{
			p=T;
			while(p->rchild!=NULL)
			{	
				max++;
			p=p->rchild ;
			}
		}
		if(max>b[j])
		{
			b[j]=max;
			max=0;
		}
		else break;
	}
}
int main()
{
	tree *T;
	int size=0;
	while(scanf("%s",a)!=EOF)
	{
		if(strcmp(a,"0")==0)
			break;
		else
		{
			creat(T);
			i=-1;
			if(T==NULL)
			{
				b[j]==0;
				j++;
			}
			else
			{
				if(T->rchild!=NULL)
				{
					b[j]=-1;
					j++;
				}
				else
				{
					bianli(T);
					j++;
					max=1;
				}
			}
		
	    for(size=0;size<j;size++)
		{
		   if(b[size]==-1)
		   {
			  if(size==0)
			    	printf("ERROR");
			  else if(size==j-1)
				  printf("ERROR");
			  else
				  printf("\nERROR");
		   }
		   else
		   {
			   if(size==0)
				   printf("%d",b[size]);
			   else
				   printf("\n%d",b[size]);
		   }
		}
		}
	}
	return 0;
}