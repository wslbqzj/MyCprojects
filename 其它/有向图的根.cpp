#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct ANode
{
	int adjvex;
	struct ANode *nextarc;
}ArcNode;
typedef struct Vnode
{
	int data;
	ArcNode *firstarc;
}VNode;
typedef VNode AdjList[100];
typedef struct
{
	AdjList adjlist;
	int n;
}ALGraph;
int i,j,k,n,a[100][100],visit[100]={0},flag=0;

void mat(ALGraph *&G)
{
	int i,j;
	ArcNode *p;
	G=(ALGraph *)malloc(sizeof(ALGraph));
	for(i=0;i<n;i++)
		G->adjlist[i].firstarc =NULL;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				p=(ArcNode *)malloc(sizeof(ArcNode));
				p->adjvex =j;
				p->nextarc =G->adjlist [i].firstarc ;
				G->adjlist [i].firstarc=p;
			}
		}
	}
	G->n =n;
}
void DFS(ALGraph *G,int v)
{
	ArcNode *p;
	visit[v]=1;
	p=G->adjlist[v].firstarc ;
	while(p!=NULL)
	{
		if(visit[p->adjvex]==0)
			DFS(G,p->adjvex );
		p=p->nextarc ;
	}
}

int main()
{
	int b[100]={0};
	int t=0,L=0;
	ALGraph *G;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
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
				break;
			}
		}
		if(flag==0)
		{
			b[t]=1;
			
		}
		t++;
		for(k=0;k<n;k++)
		{
			visit[k]=0;
		}
		flag=0;
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==1)
		{
			if(L==0)
			{
				printf("%d",i);
				L=1;
			}
			else
				printf(" %d",i);
		}
	}
	return 0;
}