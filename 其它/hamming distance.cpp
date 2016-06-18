#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];	
	while(scanf("%s",a)!=EOF&&a[0]!='X')
	{
		scanf("%s",b);
		int i,j=0,n=0;
		n=strlen(a);
		for(i=0;i<n;i++)
		{
			if(a[i]!=b[i])
				j++;
		}
		printf("Hamming distance is %d.\n",j);
	}
	return 0;
}