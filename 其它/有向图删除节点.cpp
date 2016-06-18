#include<stdio.h>
int main()
{
	int n,x,a[100][100],b[100][100],i,j,flag=0;
	scanf("%d%d",&n,&x);
	while(getchar()!='\n')
	{}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("%d\r\n",n-1);
	for(i=0;i<n;i++)
	{
		if(flag==0&&i!=x)
		{
			flag=1;
			printf("%d",i);
		}
		else if(flag==1&&i!=x)
			printf(" %d",i);
	}
	printf("\r\n");
	for(i=0;i<n;i++)
	{
		if(i!=x)
		{
	    	flag=0;
	    	for(j=0;j<n;j++)
			{
		    	if(flag==0&&j!=x)
				{
					flag=1;
					printf("%d",a[i][j]);
				}
				else if(flag==1&&j!=x)
					printf(" %d",a[i][j]);

			}
			if(i!=x-1&&i!=n-1&&x!=i) printf("\r\n");
		}
	}
	return 0;
}