#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		int j=0,t=0,l=0,n=0;
		while(a!=0)
		{

			t=a%10;				
            j=j*10+t;
			a=a/10;
		}
		j=j+a%10;
		while(b!=0)
		{
			n=b%10;
            l=l*10+n;
			b=b/10;
		}
		l=l+b%10;
		printf("%d\n",j+l);
	}
	return 0;
}