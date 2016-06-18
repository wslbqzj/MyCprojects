#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF)
	{
		int x1,x2,x3,x4,t=0,k;
		for(x1=1;x1<=100;x1++)
		{
			for(x2=1;x2<=100;x2++)
			{
				for(x3=1;x3<=100;x3++)
				{
					if((a*x1*x1+b*x2*x2+c*x3*x3)%d==0)
					{
						x4=(a*x1*x1+b*x2*x2+c*x3*x3)/(-d);
						k=(int)sqrt(x4);
						if(k>=1&&k<=100&&k*k==x4)
						{
							t++;
						}
					}
				}
			}
		}
		printf("%d\n",t*16);
	}
	return 0;
}