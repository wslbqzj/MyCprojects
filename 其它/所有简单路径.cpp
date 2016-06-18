#include<stdio.h>
#include<stdlib.h>
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
int path[100];
int b[100][100]={0},k=0,len1;
int n,n1,n2,n3,visit[100]={0};
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
void Find(Graph *G,int n1,int n2,int path[],int d)
{
	int w,i;
	Node *p;
	d++;
	path[d]=n1;
	visit[n1]=1;
	if(n1==n2)
	{
		if(k==0)
		{
			for(i=0;i<=d;i++)
			{
		    	if(i==0)
			    	printf("%d",path[i]);
			    else
			    	printf(" %d",path[i]);
			}
			k=1;
		}
		else
		{
			printf("\r\n");
			for(i=0;i<=d;i++)
			{
		    	if(i==0)
			    	printf("%d",path[i]);
			    else
			    	printf(" %d",path[i]);
			}
		}
	}
	p=G->adjlist[n1].first;
	while(p!=NULL)
	{
		w=p->adjvex;
		if(visit[w]==0)
			Find(G,w,n2,path,d);
		p=p->next;
	}
	visit[n1]=0;
}
int main()
{
	
	int i,j;
	scanf("%d",&n);
	scanf("%d%d",&n1,&n2);
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
	if(n2>=n) printf("\r\n");
	else
    Find(G,n1,n2,path,-1);
	return 0;
}
