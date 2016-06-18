#include<stdio.h>
int main()
{
	struct y
	{
		int year;
		int month;
		int day;
	}z;
	while(scanf("%d %d %d",&z.year,&z.month,&z.day)!=EOF)
	{
		int w=0,i;
		int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
		int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
		if(z.month>=1&&z.month<=12)
		{
			if(z.year%4==0 &&z.year%100!=0 || z.year%400==0)
			{
				if(z.day<=b[z.month])
				{
					for(i=0;i<z.month;i++)
					{
						w=w+b[i];
					}
					w=w+z.day+1;
					printf("%d\n",w);
				}
				else
				{
					printf("Input error!\n");
				}
			}
			else
			{
				if(z.day<=a[z.month])
				{
					for(i=0;i<z.month;i++)
					{
						w=w+a[i];
					}
					w=w+z.day;
					printf("%d\n",w);
				}
				else
				{
					printf("Input error!\n");
				}
			}
		}
		else
		{
			printf("Input error!\n");
		}
	}
	return 0;
}