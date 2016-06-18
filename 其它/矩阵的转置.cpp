#include<stdio.h>
int main()
{
	int m,n;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
	    int a[100][100];
		int i,j;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(j==0)
				{
					printf("%d",a[j][i]);
				}
				else
				{
					printf(" %d",a[j][i]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}