#include<stdio.h>
int main()
{
	int a,b;
	char x;
	scanf("%d%c%d",&a,&x,&b);
	if(x=='+')
		printf("%d%c%d=%d\n",a,x,b,a+b);
	else
		if(x=='-')
			printf("%d%c%d=%d\n",a,x,b,a-b);
		else
			if(x=='*')
				printf("%d%c%d=%d\n",a,x,b,a*b);
			else
				if(x=='/')
					printf("%d%c%d=%d\n",a,x,b,a/b);
				return 0;
}
