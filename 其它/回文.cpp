#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char a[100];
		int i,j;
		scanf("%s",a);
        j=strlen(a);
		for(i=0;i<j;i++)
		{
			if(a[i]!=a[j-1-i])
			{
				printf("NO\n");
				break;
			}
		}
		if(i==j)
		{
			printf("YES\n");
		}
	}
	return 0;
}