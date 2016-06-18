#include<stdio.h>
#include<string.h>
int main()
{
	char a[100][100];
	int i,j,n,b[100]={0},L;
	scanf("%d",&n);
	while(getchar()!='\n')
	{}
	for(i=0;i<n;i++)
	{
		gets(a[i]);
		L=strlen(a[i]);
		for(j=0;j<L;j++)
		{
			if(a[i][j]>='0'&&a[i][j]<='9')
				b[i]++;
		}
	}
	for(i=0;i<n;i++)
	{
		
		if(i!=n-1)
			printf("%d£º%d\r\n",i,b[i]-1);
		else
			printf("%d£º%d",i,b[i]-1);
	}
	return 0;
}
