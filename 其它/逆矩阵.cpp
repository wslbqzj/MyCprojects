#include<stdio.h>
int main()
{
	int a,b,c,d;
	float e=0;
	scanf("%d %d \n %d %d",&a,&b,&c,&d);
	e=a*d-b*c;
	printf("%.6f %.6f \n%.6f %.6f \n",d/e,-b/e,-c/e,a/e);
	return 0;
}
