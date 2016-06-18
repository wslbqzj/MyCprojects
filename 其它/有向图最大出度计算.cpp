#include<stdio.h>
#include<string.h>
void Bubble(int R[],int n)
{
	int i,j;
	int tmp;
	for(i=0;i<n-1;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(R[j]<R[j-1])
			{
				tmp=R[j];
				R[j]=R[j-1];
				R[j-1]=tmp;
			}
		}
	}
}
int main()
{
	char a[100][100];
	int i,j,n,b[100]={0},c[100][1],flag=0,L;
	scanf("%d",&n);
	while(getchar()!='\n')
	{}
	for(i=0;i<n;i++)
	{
		gets(a[i]);
		L=strlen(a[i]);
		for(j=0;j<L;j++)
		{
			if(a[i][j]>='0'&&a[i][j]<='9')
				b[i]++;
		}
		c[i][0]=b[i];
	}
	Bubble(b,n);
	for(i=n-1;i>=0;i--)
	{
		if(b[i]>=b[i-1])
		{
			printf("%d\r\n",b[i]-1);
			for(j=0;j<n;j++)
			{
				if(c[j][0]==b[i])
				{
					if(flag==0)
					{
						printf("%d",j);
						flag=1;
					}
					else
						printf(" %d",j);
				}
			}
			break;
		}
	}
	return 0;
}
