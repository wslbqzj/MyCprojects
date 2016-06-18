#include<stdio.h>
int main()
{
	int n,a[1000],i,t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			scanf("%d",&a[i]);
		}
		else
		{
			scanf(" %d",&a[i]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			t++;
		}
	}
	printf("%d %d\n",t,n-t);
	return 0;
}