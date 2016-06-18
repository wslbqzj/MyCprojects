#include<stdio.h>
#include<malloc.h>
#include<string.h>

typedef struct node
{
	char data;
	struct node*lchild;
	struct node*rchild;
}BiTree;
int i=0,flag=0;
int x=0;
char ch[10000];

void CreateBiTree(BiTree *&T)
{
	if(ch[i]=='#') 
	{
		i++;
		T=NULL;
	}
	else 
	{
		T=(BiTree *)malloc(sizeof(BiTree)); 
		T->data=ch[i];
		i++;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild); 
	}
}
void chazhao(BiTree *&T)
{
	if(T==NULL)
	{
		if(flag==0)
		{
			printf("Y");	
			flag=1;
		}
	}
	else
	{
			if(T->lchild==NULL&&T->rchild==NULL)
			{
				if(flag==0)
				{
					printf("Y");
					flag=1;
				}
			}
		    else if(T->lchild==NULL&&T->rchild!=NULL)
			{
				if(flag==0) 
				{
					printf("N");
					flag=1;
				}
			}
			else if(T->lchild!=NULL&&T->rchild==NULL)
			{
				if(T->lchild ->lchild ==NULL&&T->lchild ->rchild==NULL)
				{
					if(flag==0)
					{
						printf("Y");
						flag=1;
					}
				}
				else
					if(flag==0)
					{
						printf("N");
						flag=1;
					}
			}
			else 
			{
				chazhao(T->lchild);
				chazhao(T->rchild);
			}
	}
}

int main()
{
	BiTree *T;
	scanf("%s",ch);
	getchar();
	CreateBiTree(T);
	chazhao(T);
    return 0;
}
