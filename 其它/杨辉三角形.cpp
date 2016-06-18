#include<stdio.h>
int main()
{
	int i=1,j,t,n;
	scanf("%d",&n);
    printf("1\r\n");
	for(t=2;t<=n;t++)
	{
		for(j=1;j>=1;)
		{
			printf("%d ",j);
			
			j=j*(t-i)/i;
			while(j>1)
			{
				printf("%d ",j);
				i++;
				j=j*(t-i)/i;
			}
			if(j==1||j==0)
			{
				printf("%d\r\n",1);
				i=1;
				break;
			
			}
		}
	}
	return 0;
}