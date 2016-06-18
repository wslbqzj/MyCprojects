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

int n,i,j,flag=0;
int a[100][100],visit[100]={0};
int x,y,z[100],d=0;
void Mat(ALGraph *&G)
{
	int i,j;
	ArcNode *p;
	G=(ALGraph *)malloc(sizeof(ALGraph));
	for(i=0;i<n;i++)
		G->adjlist [i].firstarc =NULL;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			if(a[i][j]!=0)
			{
				p=(ArcNode *)malloc(sizeof(ArcNode));
				p->adjvex =j;
				p->nextarc =G->adjlist[i].firstarc;
				G->adjlist [i].firstarc =p;
			}
		}
	}
	G->n =n;
}
void Find(ALGraph *G,int u,int v,int path[],int d)
{
	ArcNode *p;
	int i;
	path[d]=u;
	visit[u]=1;
	d++;
	if(u==v)
	{
		if(flag==0)
		{
			flag=1;
			for(i=0;i<d;i++)
			{
				if(i==0) printf("%d",path[i]);
				else printf(" %d",path[i]);
			}
			printf("\r\n");
		}
		else 
		{
			
			for(i=0;i<d;i++)
			{
				if(i==0) printf("%d",path[i]);
				else printf(" %d",path[i]);
			}
			printf("\r\n");
		}
		
	}
	
	p=G->adjlist [u].firstarc ;
	while(p!=NULL)
	{
	
		if(visit[p->adjvex ]==0)
			Find(G,p->adjvex ,v,path,d);
		p=p->nextarc ;
	}
	visit[u]=0;
}

int main()
{
	ALGraph *G;
	scanf("%d",&n);
	scanf("%d%d",&x,&y);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	Mat(G);
	Find(G,x,y,z,d);
	return 0;
}
