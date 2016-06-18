#include<stdio.h>
int main()
{
	float high,meter=0;
	int i,N,M;
	scanf("%d %d",&M,&N);
	high=M;
	for(i=0;i<N;i++)
	{	
		meter=meter+high*2;
		high=high-high/2;
	} 
	printf("%.2f %.2f\n",high,meter-M);
	return 0;
}