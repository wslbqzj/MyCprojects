#include<stdio.h>
int main()
{
	int i,n,a[100],max,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0&&a[i]%4==0)
		{
			min=a[i]/4;
			max=a[i]/2;
		}
		else
		{
			if(a[i]%2==0&&a[i]%4!=0)
			{
				min=(a[i]-2)/4+1;
				max=a[i]/2;
			}
			else
			{
				min=0;
				max=0;
			}
		}
		printf("%d %d\n",min,max);
	}
	return 0;
}