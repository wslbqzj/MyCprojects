#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct node
{
	char data;
	struct node*lchild;
	struct node*rchild;
}Bitree;
int i=0,x=0;
char ch[100];
void creat(Bitree *&T)
{
	if(ch[i]=='#')
	{
		i++;
		T=NULL;
	}
	else
	{
		T=(Bitree *)malloc(sizeof(Bitree));
		T->data =ch[i];
		i++;
		creat(T->lchild);
		creat(T->rchild);
	}
}
void chazhao(Bitree *T)
{
	if(T!=NULL)
	{
		if(T->lchild==NULL&&T->rchild==NULL)
		{
			x=x+2;
		}
		else if(T->lchild==NULL&&T->rchild!=NULL||T->lchild!=NULL&&T->rchild==NULL)
		{
			x++;
		}
		chazhao(T->lchild);
		chazhao(T->rchild);
	}
}
int main()
{
	scanf("%s",ch);
	Bitree *T;
	creat(T);
	if(ch[0]=='#')
		printf("1");
	else
	{
	chazhao(T);
	printf("%d",x);
	}
	return 0;
}