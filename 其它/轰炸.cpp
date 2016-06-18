#include<stdio.h>
int main()
{
	int i,j,k,a,b,c,d,n,t,s=0,x[701],y[701];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&x[i],&y[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			a=y[j]-y[i];
			b=x[j]-x[i];
			t=2;
			for(k=j+1;k<n;k++)
			{
				c=y[k]-y[j];
				d=x[k]-x[j];
				if(a*d==b*c)
				{
					t++;
				}
			}
			if(t>s)
			{
				s=t;
			}
		}
	}
	printf("%d\n",s);
	return 0;
}