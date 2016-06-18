#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		int i,j;
		float y;
		i=n/8;
		j=n%8;
		if(i>0)
		{
			if(j<=4)
			{
				y=18*i+2.4*j;
			}
			else
			{
				y=18*i+10+(j-4)*2;
			}
		}
		else
		{
			if(j<=4)
			{
				y=10.0;
			}
			else
			{
				y=10+2*(j-4);
			}
		}
		if(y==(int)(y))
		{
			printf("%.0f\n",y);
		}
		else
		{
			printf("%g\n",y);
		}
	}
	return 0;
}