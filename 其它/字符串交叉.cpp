#include<stdio.h>
#include<string.h>
int main()
{ 
	char a[100],b[100];
	while(scanf("%s %s",a,b)!=EOF)
	{ 
		int x=0,y=0,i=0,j,k=0,t=0;
		x=strlen(a);
		y=strlen(b);
		if(x>=y)
		{
			for(i=0;i<y;i++)
			{
				for(j=0;j<x/y;j++)
				{
					printf("%c",a[k+j]);
				}
				if(j==x/y)
				{
					printf("%c",b[t]);
					t++;
				}
                if(b[i]=='\0') break;
				k=x/y+k;
			}
			for(i=k;i<x;i++)
			{
				printf("%c",a[i]);
			}
			printf("\n");
		}
		else
		{
			for(i=0;i<x;i++)
			{
				for(j=0;j<y/x;j++)
				{
					printf("%c",b[k+j]);
				}
				if(j==y/x)
				{
					printf("%c",a[t]);
					t++;
				}
				if(a[i]=='\0') break;
				k=y/x+k;
			}
			for(i=k;i<y;i++)
			{
				printf("%c",b[i]);
			}
			printf("\n");
		}
	}
	return 0;
}