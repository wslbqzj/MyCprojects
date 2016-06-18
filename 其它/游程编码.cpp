#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int n=0,num=0,f[100]={0},i=0,k=0;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		scanf("%c",a[i]);
	}
	for(k=0;k<n;)
	{
		for(i=0;a[i+k]==a[k+i+1];i++)
		{
			num++;
		}
		f[0]=num;
		b[0]=a[i+k];
		k=i+k;
	}
	for(i=0;b[i]!='\0';i++)
	{
		printf("%d%c",f[i],b[i]);
	}
    printf("\n");
	return 0;
}
