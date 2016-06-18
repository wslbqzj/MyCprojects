#include<stdio.h>
int main()
{
	int n,i,a=0;
	scanf("%d",&n);
	if(n>=1)
	{
		for(i=1;i<=n;i++)
		{
			a=a+i;
		}
	}
	else
	{
		if(i<1)
		{
			for(i=1;i>=n;i--)
			{
				a=a+i;
			}
		}
	}
	printf("%d\n",a);
	return 0;
}