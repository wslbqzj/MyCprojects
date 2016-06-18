#include<stdio.h>
int main()
{
	int n,a;
	a=0;
	scanf("%d",&n);
	while(n!=0)
	{
		if(n%2==1)
			a++;
		n=n/2;
	}
	printf("%d\n",a);
	return 0;
}