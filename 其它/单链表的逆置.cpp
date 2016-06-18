#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct lnode
{
	char data[100];
	struct lnode *next;
}linklist;
int main()
{
	linklist *L;
	int n;
	void creatlist(linklist *&L,int n);
	void disp(linklist *L);
	scanf("%d",&n);
	creatlist(L,n);
	disp(L);
	return 0;
}
void creatlist(linklist *&L,int n)
{
	char a[100];
	linklist *s;
	int i;
	L=(linklist *)malloc(sizeof(linklist));
	L->next =NULL;
	for(i=0;i<n;i++)
	{
		s=(linklist *)malloc(sizeof(linklist));
		scanf("%s",a);
		strcpy(s->data,a);
		s->next =L->next ;
		L->next =s;
	}
}
void disp(linklist *L)
{
	linklist *p=L->next ;
	while(p!=NULL)
	{
		if(p->next !=NULL)
		{
		    printf("%s ",p->data);
		}
		else
		{
			printf("%s",p->data );
			break;
		}
		p=p->next ;
	}
}
