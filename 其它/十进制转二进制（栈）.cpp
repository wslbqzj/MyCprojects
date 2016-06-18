#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int data[100];
	int top;
}sqstack;
int main()
{
	sqstack *s;
	void initstack(sqstack *&s);
	void push(sqstack *&s,int n);
	bool pop(sqstack *&s,int e);
	void destory(sqstack *&s);
	int n,e;
	scanf("%d",&n);
	initstack(s);
    push(s,n);
	while(s->top!=-1)
	{
		pop(s,e);
	}
	destory(s);
	return 0;
}
void initstack(sqstack *&s)
{
	s=(sqstack *)malloc(sizeof(sqstack));
	s->top=-1;
}
void push(sqstack *&s,int n)
{
	int i;
	s->top++;
	for(i=n;i!=0;)
	{
		s->data[s->top]=i%2;
		i=i/2;
		if(i==0)
		{
			break;
		}
		s->top++;
	}
}
bool pop(sqstack *&s,int e)
{
	if(s->top==-1 )
		return false;
	e=s->data[s->top];
	printf("%d",e);
	s->top --;
	return true;
}
void destory(sqstack *&s)
{
	free(s);
}
