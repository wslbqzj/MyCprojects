#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,x,L,len,b[100][100]={0},k=0,flag=0;
	char a[100];
	scanf("%d%d",&n,&x);
	while(getchar()!='\n')
	{}
	for(i=0;i<n;i++)
	{
		gets(a);
		len=strlen(a);
		for(j=2;j<len;j++)
		{
			if(a[j]!=' '&&a[j]!='\n'&&a[j]!='\r')
			{
				b[i][k]=a[j]-48;
				k++;
			}
		}
		k=0;
	}
	printf("%d\r\n",n-1);
	for(i=0;i<n;i++)
	{
		if(i!=x)
		{
			printf("%d£º",i);
			for(j=0;j<100;j++)
			{
				if(b[i][j]==0&&b[i][j+1]==0)
					break;
				else
					if(b[i][j]!=x)
					{
						if(flag==0)
						{
							printf("%d",b[i][j]);
							flag=1;
						}
						else
							printf(" %d",b[i][j]);
					}
			}
			flag=0;
			if(i!=n-1)
				printf("\r\n");
		}
	}
	return 0;
}
