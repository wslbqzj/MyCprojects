#include<stdio.h>
int main()
{
	int n,i,j;
	float  t,g,a[101];
	scanf("%d",&n);
	g=0;
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		g=g+a[i];
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n-j-1;i++)
		{
			if(a[i]>a[i+1])
			{t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
			}
		}
	}
	for (i=0;i<n;i++)
		printf("%f\n",a[i]);
	g=(g-a[0]-a[n-1])/(n-2);
	printf("%.2f\n",g);
	return 0;
}