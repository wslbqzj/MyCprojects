#include<stdio.h>
#include<stdlib.h>

 typedef struct DNode
{
	int data;
	struct DNode *prior;
	struct DNode *next;
}dlinklist;
int main()
{
	int n,i=0;
	dlinklist *L;
	void createlist(dlinklist *&L,int n);
	void sort(dlinklist *&L);
	scanf("%d",&n);
	createlist(L,n);
	sort(L);
	while(L->next!=NULL)
	{
		if(i==0)
		{
			printf("%d",L->next->data);
		}
		else
			printf(" %d",L->next->data);
		L=L->next;
		i++;
	}
	return 0;
}
void createlist(dlinklist *&L,int n)
{
	dlinklist *s,*r;
	int i;
	int num;
	L=(dlinklist *)malloc(sizeof(dlinklist));
	r=L;
	for(i=0;i<n;i++)
	{
		s=(dlinklist *)malloc(sizeof(dlinklist));
		scanf("%d",&num);
		s->data=num;
		r->next=s;
		s->prior=r;
		r=s;
	}
	r->next=NULL;
}
/*void sort(dlinklist *&L)
{
	dlinklist *p=L->next,*q,*r;
    if(p!=NULL)
	{
		r=p->next;
		p->next=NULL;
		p=r;
		while(p!=NULL)
		{
			r=p->next;
			q=L;
			while(q->next!=NULL&&q->next->data<p->data)
				q=q->next;
			p->next=q->next;
			if(q->next!=NULL)
				q->next->prior=p;
			q->next=p;
			p->prior=q;
			p=r;
		}
	}
}*/
void sort(dlinklist *&L)
{
	dlinklist *p,*pre,*q;
	p=L->next->next;
	L->next->next=NULL;
	while(p!=NULL)
	{
		q=p->next;
		pre=L;
		while(pre->next!=NULL&&pre->next->data<p->data)
		{
			pre=pre->next;
		}
		p->next=pre->next;
		if(pre->next!=NULL)
		{
			pre->next->prior=p;
		}
		pre->next=p;
		p->prior=pre;
		p=q;
	}
}