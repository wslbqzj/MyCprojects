#include<stdio.h>
int main()
{
	int n;
    while(scanf("%d",&n)!=EOF)
	{
		int y=0,i,j,t;
		int a[10000];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
					y++;	
				}
			}
		}
		printf("%d\n",y);
	}
	return 0;
}