#include<stdio.h>
#include<malloc.h>
typedef struct lnode
{
	int data;
	struct lnode *next;
}linklist;
int main()
{
	int n,e;
	linklist *L;
	void creat(linklist *&L,int n);
	void shanchu(linklist *L,int e);
	void disp(linklist *L);
	scanf("%d",&n);
	creat(L,n);
	scanf("%d",&e);
	shanchu(L,e);
	disp(L);
	return 0;
}
void creat(linklist *&L,int n)
{
	linklist *s,*r;
	int i,a[100];
	L=(linklist *)malloc(sizeof(linklist));
	r=L;
	for(i=0;i<n;i++)
	{
		s=(linklist *)malloc(sizeof(linklist));
		scanf("%d",a[i]);
		s->data=a[i];
		r->next=s;
		r=s;
	}
	r->next=NULL;
}
void shanchu(linklist *L,int e)
{
	linklist *p=L->next;
	while(p!=NULL&&p->data!=e)
	{
		if(p->next==NULL)
		{
			break;
		}
		else
		{
			if(p->next->data==e)
			{
				p=p->next->next;
			}
			else
				p=p->next;
		}
	}
}
void disp(linklist *L)
{
	linklist *p=L->next ;
	while(p!=NULL)
	{
		if(p->next!=NULL)
		{
		printf("%d ",p->data);
		p=p->next;
		}
		else
		{
			printf("%d",p->data);
			break;
		}
	}
}