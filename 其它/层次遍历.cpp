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
		T->data=ch[i];x++;
		i++;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild); 
	}
}
void LevelOrder(BiTree *&T)
{
	BiTree *p;
	BiTree *qu[100];
	int front,rear;
	front=rear=-1;
	rear++;
	qu[rear]=T;
	while(front!=rear)
	{
		front=(front+1)%100;
		p=qu[front];
		printf("%c",p->data);
		if(p->lchild !=NULL)
		{
			rear=(rear+1)%100;
			qu[rear]=p->lchild ;
		}
		if(p->rchild!=NULL)
		{
			rear=(rear+1)%100;
			qu[rear]=p->rchild;
		}
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
		LevelOrder(T);
		i=0;x=0;
	}
    return 0;
}
