#include<stdio.h>

#include<string.h>


int main()
{
	int n;
	int i,j,L;
	char x[100];
	int w[100][100]={0};
	scanf("%d",&n);
	gets(x);
	for(j=0;j<n;j++)
	{
	gets(x);
		L=strlen(x);
		for(i=0;i<L;i++)
		{
			if(x[i]!=' ')
			{
				w[j][x[i]-48]=1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==0)
				printf("%d",w[i][j]);
			else
				printf(" %d",w[i][j]);
		}
		printf("\r\n");
	}
	return 0;
}