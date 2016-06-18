#include<stdio.h>
int main()
{
	int hang=0,lie=0,i,j=5,times=0,x;
	int a[5][6]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
	scanf("%d",&x);
	for(i=0;i<5;i++)
	{
		if(x>=(a[i][5]-5)&&x<=a[i][5])
		{
			while(j>=0)
			{
				if(a[i][j]==x)
				{
					hang=i;
					lie=j;
					times=hang+5-lie;
				}
				j--;
			}
		}
	}
	printf("%d %d %d\n",hang,lie,times);
	return 0;
}
