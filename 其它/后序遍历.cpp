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
void  post(BiTree *T)
{
	if(T!=NULL)
	{
		post(T->lchild);
		post(T->rchild);
		printf("%c",T->data);
	}
}
int main()
{
	BiTree *T;
	while(scanf("%s",ch)!=EOF)
	{
		getchar();
		CreateBiTree(T);
		post(T);
		i=0;
	}
    return 0;
}
