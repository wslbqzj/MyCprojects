#include<stdio.h>
int main()
{
	int n,r;
	while(scanf("%d %d",&n,&r)!=EOF&&n!=0)
	{
		int C(int m,int t);	
		if(r>n)
		{
			printf("error!\n");	
		}
		else
		{
			printf("%d\n",C(n,r));
		}
	}
	return 0;
}
int C(int m,int t)
{
	int y;
	if(t==0)
	{
		y=1;
	}
	else
		y=C(m,t-1)*(m-t+1)/t;
	return(y);
}