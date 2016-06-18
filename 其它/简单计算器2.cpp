#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,b;
		char c;
		scanf("%d%c%d",&a,&c,&b);
		if(c=='+')
		{
			printf("%d%c%d=%d\n",a,c,b,a+b);
		}
		else if(c=='-')
		{
			printf("%d%c%d=%d\n",a,c,b,a-b);
		}
		else if(c=='*')
		{
			printf("%d%c%d=%d\n",a,c,b,a*b);
		}
		else
		{
			printf("%d%c%d=%d\n",a,c,b,a/b);
		}
	}
	return 0;
}