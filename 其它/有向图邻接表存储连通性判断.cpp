#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct node 
{
	int adjvex;
	struct node *next;
}Node;
typedef struct vnode 
{
	char data;
	Node *first;
}Vnode;
typedef Vnode Adjlist[100];
typedef  struct 
{
	Adjlist adjlist;
	int n;
}Graph;
Graph *G;
int path[100],flag=0;
int b[100][100]={0},k1=0;
int n,k,n3,len1,visit[100]={0};
char a[100];
void mat(Graph *&G)
{
	int i,j;
	Node *p;
	G=(Graph *)malloc(sizeof(Graph));
	for(i=0;i<n;i++)
	{
		G->adjlist[i].first=NULL;
		G->adjlist[i].data=i;
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=0;j--)
		{
		if(b[i][j]!=0)
		{
			p=(Node *)malloc(sizeof(Node));
			p->adjvex=j;
			p->next=G->adjlist[i].first;
			G->adjlist[i].first=p;
		}
		}
	}
}
void DFS(Graph *G,int v)
{
	Node *p;
	visit[v]=1;
	p=G->adjlist[v].first ;
	while(p!=NULL)
	{
		if(visit[p->adjvex]==0)
			DFS(G,p->adjvex );
		p=p->next ;
	}
}
int main()
{
	
	int i,j;
	scanf("%d",&n);
	gets(a);
	for(i=0;i<n;i++)
	{
		scanf("%d",&n3);
		gets(a);
		len1=strlen(a);
		for(j=0;j<len1;j++)
		{
			if(a[j]!=' ')
			{
				b[i][a[j]-48]=1;
			}
		}
	}

	mat(G);
	for(i=0;i<n;i++)
	{
		DFS(G,i);
		for(j=0;j<n;j++)
		{
			if(visit[j]==0)
			{
				flag=1;
				printf("0");
				break;
			}
		}
		if(flag==1)
			break;
		for(k=0;k<n;k++)
		{
			visit[k]=0;
		}
	}
	if(flag==0)
		printf("1");
	return 0;
}
