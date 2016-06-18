#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double x,y;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		if(a==0)
		{
			printf("a=0,error\n");
		}
		else
		{
			if(b*b-4*a*c<0)
			{
				printf("no root\n");
			}
			else if(b*b-4*a*c>=0)
			{
				x=(-b+sqrt(b*b-4*a*c))/(2*a);
				if(x==(int)(x))
				{
					x=(int)(x);
				}
				y=(-b-sqrt(b*b-4*a*c))/(2*a);
				if(y==(int)(y))
				{
					y=(int)(y);
				}
				if(x>=y)
				{
					printf("x1=%g,x2=%g\n",x,y);
				}
				else
				{
					printf("x1=%g,x2=%g\n",y,x);
				}
			}
		}
	}
	return 0;
}