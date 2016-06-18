#include<stdio.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		for(i=j;i<=n;i++)
		{
			if(i%n==j||i%n==0&&j==n)
			{
				printf("%d",i);
				if(i==n)
				{
					if(j!=1)
					{
						for(k=1;k<j;k++)
						{
							printf(" %d",k);
						}
					}
				}
			}
			else
			{
				printf(" %d",i);
				if(i==n)
				{
					if(j!=1)
					{
						for(k=1;k<j;k++)
						{
							printf(" %d",k);
						}
					}
				}

			}
		}
		printf("\n");
	}
	return 0;
}