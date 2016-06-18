#include<stdio.h>
int main()
{
	int f(int x);
	int n;
	scanf("%d",&n);
	printf("%d\n",f(n));
	return 0;
}
int f(int x)
{
	int y;
	if(x==0||x==1)
	{
		y=1;
	}
	else
	{
		y=f(x-1)*x;
	}
		return(y);
}