#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i,y=1;
		for(i=0;i<n-1;i++)
		{
			y=(y+1)*2;
		}
		printf("%d\n",y);
	}
	return 0;
}