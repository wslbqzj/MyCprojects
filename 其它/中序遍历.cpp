#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
	char data;
	struct node*lchild;
	struct node*rchild;
}BiTree;
int i=0;

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
void InOrder(BiTree *&T)
{
	if(T!=NULL)
	{
		InOrder(T->lchild );
		printf("%c",T->data );
		InOrder(T->rchild );
	}
}

int main()
{
	BiTree *T;
	while(scanf("%s",ch)!=EOF)
	{
		getchar();
		CreateBiTree(T);
		InOrder(T);
		
		i=0;
	}
    return 0;
}
