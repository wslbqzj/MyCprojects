#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i,a[10000],t=0,b[10000];
		if(n==0)
		{
			printf("0\n0");
		}
		else
		{
			for(i=n;i!=0;)
			{
				a[t]=i%2;
				i=i/2;
				if(i==0)
				{
					break;
				}
				else
				{
					t++;
				}
			}
			for(i=t;i>=0;i--)
			{
				printf("%d",a[i]);
			}
			printf("\n");
			t=0;
			for(i=n;i!=0;)
			{
				b[t]=i%8;
				i=i/8;
				if(i==0)
				{
					break;
				}
				else
				{
					t++;
				}
			}
			for(i=t;i>=0;i--)
			{
				printf("%d",b[i]);
			}
		}
		printf("\n");
	}
	return 0;
}