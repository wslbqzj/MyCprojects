#include<stdio.h>
int main()
{
	float n;
	while(scanf("%f",&n)!=EOF)
	{
		if(n == (int)n)
		{
			printf("Yes\n");
		}
		else
			printf("No\n");
	}
	return 0;
}