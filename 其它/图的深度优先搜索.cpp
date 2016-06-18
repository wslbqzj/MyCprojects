#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define max 100
typedef struct node
{
	int adjvex;
	struct node *next;
	char data1;
}Node;

typedef struct vnode
{
	char data;
	Node *first;
}Vnode;

typedef Vnode Adjlist[max];

typedef struct 
{
	Adjlist adjlist;
	int n,e;
}Graph;


char a[100],ch[2];
int n,b[100][100],x;
void mat(char a[],Graph *&G)
{
	int i,j;
	Node *p;
	G=(Graph *)malloc(sizeof(Graph));
	for(i=0;i<n;i++)
	{
		G->adjlist[i].data=a[i];
		G->adjlist[i].first=NULL;
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			if(b[i][j]!=0)
			{
				p=(Node *)malloc(sizeof(Node));
				p->adjvex=j;
				p->data1=a[j];
				p->next=G->adjlist[i].first;
				G->adjlist[i].first=p;
			}
		}
	}
	G->n=n;
}
int visit[100]={0};
void dfs(Graph *G,int v)
{
	Node *p;
	visit[v]=1;
	printf("%c",a[v]);
	p=G->adjlist[v].first;
	while(p!=NULL)
	{
		if(visit[p->adjvex]==0)
			dfs(G,p->adjvex);
		p=p->next;
	}
}
int main()
{
	int i,j;
	Graph *G;
	scanf("%d",&n);
	scanf("%s",a);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	scanf("%s",ch);
	mat(a,G);
	for(i=0;i<n;i++)
	{
		if(a[i]==ch[0])
			
		{
			x=i;break;
		}
	}
	dfs(G,x);
	return 0;
}