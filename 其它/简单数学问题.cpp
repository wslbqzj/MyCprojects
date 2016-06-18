#include<stdio.h>
int a[10];
int main()
{
	int f(int x);
	int k,m,i;
	while(scanf("%d %d",&k,&m)!=EOF)
	{
		i=0;
		while(i<10)
		{
			scanf("%d",&a[i]);
			i++;
		}
		printf("%d\n",f(k)%m);
	}
	return 0;
}
int f(int x)
{
	int z=0;
	if(x>=10)
	{
		z=(f(x-1)*a[0]+f(x-2)*a[1]+f(x-3)*a[2]+f(x-4)*a[3]+f(x-5)*a[4]+f(x-6)*a[5]+f(x-7)*a[6]+f(x-8)*a[7]+f(x-9)*a[8]+f(x-10)*a[9]);
	}
	else
	{
		z=x;
	}
	return (z);
}