#include<stdio.h>
int main()
{
	int f(int x);
	int i,n,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
		printf("%d\n",f(p));
	}
	return 0;
}
int f(int x)
{
	int k,y=0;
	if(x==0||x==1)
	{
		y=1;
	}
	else
	{
		for(k=1;k<x;k++)
		{
			if(x%k==0)
			{
				y=y+k;
			}
		}
	}
	return(y);
}