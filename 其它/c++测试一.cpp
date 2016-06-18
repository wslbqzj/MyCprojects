#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		float i;
		if(n<1000)
		{
			i=1;
		}
		else if(n>=1000&&n<2000)
		{
			i=0.95;
		}
		else if(n>=2000&&n<3000)
		{
			i=0.9;
		}
		else if(n>=3000&&n<5000)
		{
			i=0.85;
		}
		else
			i=0.8;
		printf("discount=%g,pay=%g\n",i,n*i);
	}
	return 0;
}