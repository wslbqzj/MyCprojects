#include<stdio.h>
int main()
{
	float a;
	while(scanf("%f",&a)!=EOF)
	{
		if(a==int(a))
			printf("Yes\n");
		else
			printf("No\n");
	}	
	return 0;
}


