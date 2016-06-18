#include<stdio.h>
#include<malloc.h>
typedef struct lnode
{
	int data;
	struct lnode *next;
}linklist;
int n;
int main()
{
	linklist *L;
	int e;
	float x;
	void createlist(linklist *&L,int n);
	bool listinsert(linklist *&L,int i,int e);
	void displist(linklist *L);
	scanf("%d",&n);
	createlist(L,n);
	scanf("%f%d",&x,&e);
	if((x-(int)x==0)&&x>0&&x<=n)
	{
		x=(int)x;
		listinsert(L,x,e);
		displist(L);
	}
	else
	{
		printf("error!");
	}
	return 0;
}
void createlist(linklist *&L,int n)
{
	linklist *s,*r;
	int i,a;
	L=(linklist *)malloc(sizeof(linklist));
	r=L;
	for(i=0;i<n;i++)
	{
		s=(linklist *)malloc(sizeof(linklist));
		scanf("%d",&a);
		s->data =a;
		r->next=s;
		r=s;
	}
	r->next =NULL;
}
bool listinsert(linklist *&L,int i,int e)
{
	int j=0;
	linklist *p=L,*s;
	while(j<i-1&&p!=NULL)
	{
		j++;
		p=p->next;
	}
	if(p==NULL)
		return false;
	else
	{
		s=(linklist *)malloc(sizeof(linklist));
		s->data =e;
		s->next =p->next;
		p->next=s;
		return true;
	}
}
void displist(linklist *L)
{
	linklist *p=L->next ;
	while(p!=NULL)
	{
		if(p->next!=NULL)
		{
			printf("%d ",p->data );
		}
		else
		{
			printf("%d",p->data );
		}
		p=p->next ;
	}
}
