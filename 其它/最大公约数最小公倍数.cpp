#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF&&a!=0&&b!=0)
	{ 
		int max(int x,int y);
		int m;
		m=max(a,b);
		printf("%d  %d\n",m,(a*b)/m);
	}
	return 0;
}
int max(int x,int y)
{
	int t,c;
	if(x<y)
	{
		c=x;
		x=y;
		y=c;
	}
	while(x%y!=0)
	{
		t=y;
		y=x%y;
		x=t;
	}
	return(y);
}
