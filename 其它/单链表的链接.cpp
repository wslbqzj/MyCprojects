
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Lnode
{
	char data[100];
	struct Lnode *next;
}linklist;
linklist *p;
int main()
{
	int x,y;
	linklist *L1,*L2;
	void createlist(linklist *&L1,int n);
	void createliste(linklist *&L2,int n);
	void displist(linklist *&L1,linklist *&L2);
	scanf("%d",&x);
	createlist(L1,x);
	scanf("%d",&y);
	createliste(L2,y);
	displist(L1,L2);
	return 0;
}
void createlist(linklist *&L1,int n)
{
	linklist *s,*r;
	int i;
	char a[100];
	L1=(linklist *)malloc(sizeof(linklist));
	r=L1;
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		s=(linklist *)malloc(sizeof(linklist));
		strcpy(s->data,a);
		r->next=s;
		r=s;
	}
	r->next =NULL;
	
}
void createliste(linklist *&L2,int n)
{
	linklist *s,*r;
	int i;
	char a[100];
	L2=(linklist *)malloc(sizeof(linklist));
	r=L2;
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		s=(linklist *)malloc(sizeof(linklist));
		strcpy(s->data,a);
		r->next=s;
		r=s;
	}
	r->next =NULL;
	
}
void displist(linklist *&L1,linklist *&L2)
{
	linklist *p=L1;
	while(p->next !=NULL)
	{
		p=p->next;
		printf("%s ",p->data);
	}
	p=L2;	
	while(p->next !=NULL)
	{
		p=p->next;
		if(p->next!=NULL)
			printf("%s ",p->data);
		else
		{
			printf("%s",p->data);
		}
	}
}