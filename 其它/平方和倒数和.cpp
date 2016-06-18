#include<stdio.h>
int main()
{
	float a,b,c,i;
	float x=0,y=0,z=0;
	scanf("%f %f %f",&a,&b,&c);
    for(i=1;i<=a;i++)
	{
		x=x+i;
	}
	for(i=1;i<=b;i++)
	{
		y=y+i*i;
	}
	for(i=1;i<=c;i++)
	{
		z=z+1/i;
	}
	printf("%.2f\n",x+y+z);
	return 0;
}