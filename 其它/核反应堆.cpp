#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF&&n!=-1)
	{
		int high=1,low=0,i,t;
		for(i=0;i<n;i++)
		{
			t=high;
			high=high*3+low*2;
			low=t+low;
		}
		printf("%d, %d\n",high,low);
	}
	return 0;
}