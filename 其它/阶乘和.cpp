#include<stdio.h>
int main()
{
	long long f(long long m);
	long long n,i;
	scanf("%lld",&n);
	long long s=0;
	if(n==0)
	{
		s=1;
		printf("%lld\n",s);
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			s=s+f(i);
		}
		printf("%lld\n",s);
	}
	return 0;
}
long long f(long long m)
{
	long long q=1,t;
    for(t=2;t<=m;t++)
	{
		q=q*t;
	}
	return(q);
}