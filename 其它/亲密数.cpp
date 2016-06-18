#include<stdio.h>
int main()
{
	int n,a,b,i,j,p,q;
	scanf("%d",&n);
	for(a=220;a<n;a++)
	{	
		p=0;
		q=0;
		for(i=1,b=0;i<a;i++)
		{
			if(a%i==0)
				b=b+i;
		}
		for(j=1;j<b;j++)
		{
			if(b%j==0)
				q=q+j;
		}
		if(a==q&&b!=q)
		{
			printf("%d %d\n",a,b);
			a=b+1;
		}
	}
	return 0;
}
