#include<stdio.h>
int main()
{
	int i,j=1,x=4,change=0,t=0;
	for(i=1;i<=7;)
	{   
    	if(j>=x-change&&j<=x+change)
		{	
			printf("*");
			t++;
		}
		else
		{
			printf(" ");
			t++;
		}
		j++;
		if(t==7)
		{
			if(i>=4)
				change--;
			else
				change++;
			i++;
			j=1;
			t=0;
			printf("\n");
		}
	}
	return 0;
}