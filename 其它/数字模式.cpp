#include<stdio.h>
#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		char a[10];
		int i,j,x=1,y=0,t=1;
		for(i=0;i<10;i++)
		{
			a[i]=n%10;
			n=n/10;
			if(n==0) break;
		}
		y=strlen(a);
		for(i=2;i<=9;i++)
		{
			x=x*i;
		}
		x=x%10;
		for(i=0;i<y;i++)
		{
			t=t*x;
		}
		for(i=y-1;i>0;y--)
		{
			if(a[i]!=0)
			{
				for(j=0;j<y-1;j++)
				{
					t=t*x;
				}

			}
		}
	}
	return 0;
}