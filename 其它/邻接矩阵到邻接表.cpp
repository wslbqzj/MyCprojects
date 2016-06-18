#include<stdio.h>
#include<malloc.h>
typedef struct ANode
{
	int adjvex;
	struct ANode *nextarc;
}ArcNode;
typedef struct vnode
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

int n,i,j;
int a[100][100];

void Mat(ALGraph *&G)
{
	int i,j;
	ArcNode *p;
	G=(ALGraph *)malloc(sizeof(ALGraph));
	for(i=0;i<n;i++)
		G->adjlist [i].firstarc =NULL;
	for(i=0;i<n;i++)
	{
		printf("%d:",i);
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				p=(ArcNode *)malloc(sizeof(ArcNode));
				p->adjvex =j;
				p->nextarc =G->adjlist[i].firstarc;
				G->adjlist [i].firstarc =p;
		    	printf(" %d",p->adjvex );
			}
		}
		if(i!=n)
			printf("\r\n");
	}
	G->n =n;
}

int main()
{
	ALGraph *G;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	Mat(G);
	return 0;
}
