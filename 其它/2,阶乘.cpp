#include<stdio.h>
int main()
{
	int i,N,a;
	a=1;
	scanf("%d",&N);
	if(N<0||N>12)
	{
		printf("shuruwuxiao!\n");
		return 0;
	}
	else
		for(i=1;i<N;i++)
		{
			a=a*(i+1);
		}
		printf("%d\n",a);
		return 0;
		
}