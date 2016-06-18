#include<stdio.h>
int main()
{
	int num,a,b;
	while (scanf ("%d",&num) != EOF)
	{
		b = 0;
		if (num == 0) break;
		for(a=10;a>=10;)
		{
			a=num/10;
			b=b+num%10;
			num = num/10;
		}
		b=b+a;
		if(b<10)
			printf("%d\n",b);
		else
		{
			int c=0,d=0;
			for(b=b;b>=10;)
			{
				c=c+b%10;
				d=b/10;
				b=b/10;
			}
			c=c+d;
			printf("%d\n",c);
		}
	}
	return 0;
}