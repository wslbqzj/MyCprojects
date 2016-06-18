#include<stdio.h>
#include<string.h>
#include<malloc.h>
#define MAX 100
typedef struct ANode
{
	int adjvex;
	struct ANode *nextarc;
}ArcNode;
typedef struct Vnode
{
	char data;
	ArcNode *firstarc;
}VNode;
typedef VNode AdjList[MAX];
typedef struct
{
	AdjList adjlist;
	int n,e;
}MGraph;
int g[100][100];
int n,num=0,flag=0;
int b[100],sum[100]={0};
int v=0;
void MatList(MGraph *&G)
{
	int i,j;
	ArcNode *p;
	G=(MGraph *)malloc(sizeof(MGraph));
	for(i=0;i<n;i++)
	{
		G->adjlist[i].data=0;
		G->adjlist[i].firstarc=NULL;
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			if(g[i][j]!=0)
			{
				p=(ArcNode *)malloc(sizeof(ArcNode));
				p->adjvex =j;
				p->nextarc=G->adjlist[i].firstarc;
				G->adjlist [i].firstarc=p;
			}
		}
	}
	G->n=n;
}	
int visited[MAX]={0};
void DFS(MGraph *G,int v)
{
	ArcNode *p;
	p=G->adjlist[v].firstarc;	
	visited[v]=1;
	while(p!=NULL)
		
	{
		if(visited[p->adjvex]==0)
		{
			DFS(G,p->adjvex);
		}
		p=p->nextarc;
	}
}
int main()
{
	MGraph *G;
	int i,j;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&g[i][j]);
		}
	}
	MatList(G);
	for(i=0;i<n;i++)
	{
		if(visited[i]==0)
		{
			num++;
			DFS(G,i);
			for(j=0;j<n;j++)
			{
				if(visited[j]==1)
				{
					if(j==0||flag==1)
					{
					    printf("%d",j);
						flag=0;
					}
					else
						printf(" %d",j);
					visited[j]=2;
				}
				
			}
			if(num!=0)
			{
		     	printf("\r\n");
				flag=1;
			}
		}
	}
	printf("%d",num);
	return 0;
}