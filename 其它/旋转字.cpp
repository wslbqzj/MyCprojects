#include<stdio.h>
#include<string.h>
int main()
{
	char a[36];
	while(scanf("%s",a)!=EOF)
	{
		int x,n,i;
		x=strlen(a);
		scanf("%d",&n);
		for(i=x-n;i<x;i++)
		{
			printf("%c",a[i]);
		}
		for(i=0;i<x-n;i++)
		{
			printf("%c",a[i]);
		}
		printf("\n");
	}
	return 0;
}