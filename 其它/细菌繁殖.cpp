#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d",&n);
	while(n--)
	{
		int y;
		scanf("%d",&t);
		y=(t-1)*1+(t-1)*(t-2);
		printf("%d\n",y*2+2*t-1); 
	}
	return 0;
}