#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct linknode
{
	char data;
	struct linknode *next;
}sqstack;
void initstack(sqstack *&s)
{
	s=(sqstack *)malloc(sizeof(sqstack));
	s->next=NULL;
}
bool stackempty(sqstack *&s)
{
	return (s->next==NULL);
}
bool push(sqstack *&s,char e)
{
	sqstack *p;
	char exp[100];
	int i=0;
	while()
	{
	p=(sqstack *)malloc(sizeof(sqstack));
	p->data=e;
	i++;
	p->next =s->next ;
	s->next =p;
	}
}
int i,j,n=0;
char e,exp[100];


bool pop(sqstack *&s,char e)
{
	sqstack *p;
	if(s->next==NULL)
		return false;
	p=s->next;
	e=p->data;
	s->next=p->next;
	free(p);
	return true;
}
bool gettop(sqstack *s,char e)
{
	if(s->next==NULL)
		return false;
	e=s->next->data;
	return true;
}
void destroy(sqstack *&s)
{
	sqstack *p=s,*q=s->next;
	while(q!=NULL)
	{
		free(P);
		p=q;
		q=p->next;
	}
	free(p);
}
bool Match(char exp[],int n)
{
	int i=0;char e;
	bool match=true;
	sqstack *st;
	initstack(st);
	while(i<n&&match)
	{
		if(exp[i]=='(')
			push(st,exp[i]);
		else if(exp[i]==')')
		{
			if(gettop(st,e)==true)
			{
				if(e!='(')
					match=false;
				else
					pop(st,e);
			}
			else
				match=false;
		}
		i++;
	}
	if(!=stackempty(st))
		match=false;
	destroy(st);
	return match;
}
int main()
{
	sqstack *s;
	initstack(s);
	stackempty(s);
	push(s);
	n=strlen(exp);
	pop(s,e);
	gettop(s,e);
	Match(exp[],n);
	destroy(s);
	return 0;
}