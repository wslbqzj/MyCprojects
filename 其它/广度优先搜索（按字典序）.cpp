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
int n,i,j,visit[100]={0},a[100][100],x;
char b[100],ch[2];
void mat(ALGraph *&G)
{
	ArcNode *p;
	G=(ALGraph *)malloc(sizeof(ALGraph));
	for(i=0;i<n;i++)
	{
		G->adjlist[i].data=b[i];
		G->adjlist[i].firstarc=NULL;
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			if(a[i][j]!=0)
			{
				p=(ArcNode *)malloc(sizeof(ArcNode));
				p->adjvex=j;
				p->nextarc=G->adjlist[i].firstarc;
				G->adjlist[i].firstarc=p;
			}
		}
	}
	G->n=n;
}

void BFS(ALGraph *G,int v)
{
	ArcNode *p;
	int queue[100],front=0,rear=0;
	int w;
	for(i=0;i<n;i++)
		visit[i]=0;
	printf("%c",G->adjlist[v].data);
	visit[v]=1;
	rear=(rear+1)%100;
	queue[rear]=v;
	while(front!=rear)
	{
		front=(front+1)%100;
		w=queue[front];
		p=G->adjlist[w].firstarc;
		while(p!=NULL)
		{
			if(visit[p->adjvex]==0)
			{
				printf("%c",G->adjlist[p->adjvex].data);
				visit[p->adjvex]=1;
				rear=(rear+1)%100;
				queue[rear]=p->adjvex;
			}
			p=p->nextarc;
		}
	}
}


int main()
{
	ALGraph *G;
	int k,t,r,s,num;
	scanf("%d",&n);
	scanf("%s",b);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		getchar();
	}
	scanf("%s",ch);
	
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(b[k]>b[j])
				k=j;
		}
		t=b[k];
		b[k]=b[i];
		b[i]=t;
		for(x=0;x<n;x++)
		{
			r=a[x][k];
			a[x][k]=a[x][i];
			a[x][i]=r;
			
		}
		for(x=0;x<n;x++)
		{
			s=a[k][x];
			a[k][x]=a[i][x];                                                                
			a[i][x]=s;
		}
		
		
	}
	
	
	for(i=0;i<n;i++)
	{
		if(ch[0]==b[i])
		{
			num=i;
			break;
		}
	}
	mat(G);
	BFS(G,num);
	return 0;
}