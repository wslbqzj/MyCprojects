#include<stdio.h>
int main()
{
	int m,n;
	while(scanf("%d %d",&m,&n)!=EOF&&m!=0)
	{
		int i,j=0,a,b,c,t[100],k=0;
		for(i=0;i<n-m;i++)
		{
			t[0]=m;
			j=t[i];
			c=j%10;
			j=j/10;
			b=j%10;
			j=j/10;
			a=j%10;
			if(t[i]==a*a*a+b*b*b+c*c*c)
			{
				if(i==n-m-1)
					printf("%d",t[i]);
				else
					printf("%d ",t[i]);
				k++;
			}
			t[i+1]=t[i]+1;
		}
		if(k==0)
		{
			printf("no");
		}
		printf("\n");		
	}
	return 0;
}