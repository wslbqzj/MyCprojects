#include<stdio.h>
int main()
{
	void f(int b[],int n);
	int a[500],i,num,m=0,x;
	scanf("%d",&num);
	for(i=0;i<num;i++)
		scanf("%d",&a[i]);
	scanf("%d",&x);
	f(a,num);
	for(i=0;i<num;i++)                   
	{
		printf("%d",a[i]);
		if ((i+1)%10==0||i+1-num==0)
			printf("\n");
		else printf(" ");
	}              
	for(i=0;i<num;i++)
	{
		if(x==a[i])
		{
			i++;
			printf("%d\n",i);
			break;
		}
	}
	if(i==num)
		printf("no this score!\n");
	return 0;
}
void f(int b[],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++)
	{k=i;
	for(j=i+1;j<n;j++)
		if(b[j]>b[k])
			k=j;
		t=b[k];b[k]=b[i];b[i]=t;
	}
}