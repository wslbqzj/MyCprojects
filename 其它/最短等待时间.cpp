#include<stdio.h>
int a[100000];
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i,j,t=0;
		float x=0;
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
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]<a[i])
				{
					t=a[j];
					a[j]=a[i];
					a[i]=t;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			x=a[i]*(n-i)+x;
		}
		printf("%.2f\n",x/n);
	}
	return 0;
}
