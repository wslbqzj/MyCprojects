#include<stdio.h>
int main()
{
	int n,a;
	while(scanf("%d %d",&a,&n)!=EOF)
	{
		int i,y=0,t;
		t=a;
		for(i=0;i<n;i++)
		{	
			y=y+a;
			a=a*10+t;
		}
		printf("%d\n",y);
	}
	return 0;
}