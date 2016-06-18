#include<stdio.h>
#include<string.h>
int main()
{
	char x[50];
	int n;
	scanf("%d",&n);
	while (n--)
	{
		int i,x1=0,x2=0,x3=0,x4=0,Len;
		scanf("%s",x);
		Len=strlen(x);
		if(Len<8||Len>16)
			printf("NO\n");
		else
		{
			for(i=0;i<Len;i++)
			{
				if(x[i]>='A'&&x[i]<='Z')
				{
					x1=1;
				}
				else if(x[i]>='a'&&x[i]<='z')
				{
					x2=1;
				}
				else if(x[i]>='0'&&x[i]<='9')
				{
					x3=1;
				}
				else
				{
					x4=1;
				}
			}
			if((x1+x2+x3+x4)>=3)
			{
				printf("YES\n");
			}
			else
			{	
				printf("NO\n");
			}
		}
	}
	return 0;
}
