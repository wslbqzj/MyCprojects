#include<stdio.h>
int main()
{
	int n,k,a[100][100],i,j,x=0,y[100],m=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==1)
			{
				x++;
			}
		}
		if(x==k)
		{
			y[m]=i;
			m++;
		}
		x=0;
	}
	printf("%d\r\n",m);
	for(i=0;i<m;i++)
	{
		if(i==0)
		{
			printf("%d",y[i]);
		}
		else
		{
			printf(" %d",y[i]);
		}
	}
	return 0;
}