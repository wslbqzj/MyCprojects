#include<stdio.h>
int main()
{
	double n;
	int m,k,i;
	while(scanf("%lf %d %d",&n,&m,&k)!=EOF)
	{
		float y;
		y=k/(1+12*n);
		for(i=0;i<m-1;i++)
		{
			y=(y+k)/(1+12*n);
		}
		printf("%.2f\n",y);
	}
	return 0;
}