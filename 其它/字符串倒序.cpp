#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000];
	while(scanf("%s",a)!=EOF)
	{
		int i,x;
		x=strlen(a);
		for(i=x-1;i>=0;i--)
		{
			printf("%c",a[i]);
		}
		printf("\n");
	}
	return 0;
}