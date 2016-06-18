#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i;
		long long a[70]={1,1,2,},y;
		for(i=3;i<=n;i++)
		{
			y=a[i-2]+a[i-3];
			a[i]=a[i-1]+y;
		}
		printf("%lld\n",a[n]);
	}
	return 0;
}