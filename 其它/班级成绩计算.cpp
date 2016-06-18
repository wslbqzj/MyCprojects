#include<stdio.h>
int main()
{
	int N,Eng[10000],Math[10000],C[10000],Music[10000],Art[10000],i;
	float average1=0,average2=0,average3=0,average4=0,average5=0,x;
	char num[10000][9];
    scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s %d %d %d %d %d",num[i],&Eng[i],&Math[i],&C[i],&Music[i],&Art[i]);
		average1=average1+Eng[i];
		average2=average2+Math[i];
		average3=average3+C[i];
		average4=average4+Music[i];
		average5=average5+Art[i];
	}
	for(i=0;i<N;i++)
	{
		x=(float)(Eng[i]+Math[i]+C[i]+Music[i]+Art[i]);
		printf("%s %d %d %d %d %d %.1f\n",num[i],Eng[i],Math[i],C[i],Music[i],Art[i],x/5);
	}
	printf("%.1f %.1f %.1f %.1f %.1f\n",(average1)/N,(average2)/N,(average3)/N,(average4)/N,(average5)/N);
	return 0;
}