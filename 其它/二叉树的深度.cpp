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

int  postorder(BiTree *T)
{
	int h1,h2;
	
	if(T==NULL)
	{
		return(0);
	}	
	else
	{
		h1=postorder(T->lchild);
		h2=postorder(T->rchild);
		return (h1>h2)?(h1+1):(h2+1);
	}
}
int main()
{
	BiTree *T;
	while(scanf("%s",ch)!=EOF)
	{
		getchar();
		if(strcmp(ch,"0")==0) break;
		CreateBiTree(T);
		x=postorder(T);
		printf("%d",x);
		x=0;i=0;
	}
    return 0;
}
