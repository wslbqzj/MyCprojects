#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int f(int x);
		printf("%d\n",f(n));
	}
	return 0;
}
int f(int x)
{
	int y=0,i;
	for(i=1;i<=x;i++)
	{
		y=y+i*i;
	}
	return(y);
}