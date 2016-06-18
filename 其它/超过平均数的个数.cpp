#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int i;
		char p='%';
		float a,y=0,x;
		int b[100];
		int z=0;
		scanf("%f",&a);
		for(i=0;i<a;i++)
		{
			scanf("%d",&b[i]);
			y=y+b[i];
		}
		x=y/a;
		for(i=0;i<a;i++)
		{
			if(b[i]>x)
			{
				z++;
			}
		}
		printf("%.3f%c\n",z/a*100,p);
	}
	return 0;
}