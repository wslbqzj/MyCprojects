#include<stdio.h>
void Bubble(int R[],int n)
{
	int i,j,tmp;
		for(i=0;i<n-1;i++)
		{
			if(R[i]>R[i+1])
			{
				tmp=R[i];
				R[i]=R[i+1];
				R[i+1]=tmp;
			}
		}
		for(i=0;i<n;i++)
		{
			if(i==0)
				printf("%d",R[i]);
			else
				printf(" %d",R[i]);
		}
}
void Quick(int R[],int s,int t)
{
	int i=s,j=t,tmp=R[s];
	if(s<t)
	{
		while(i<j)
		{
			while(j>i&&R[j]>=tmp)
				j--;
			if(i<j)
			{
			R[i]=R[j];
			i++;
			}
			while(i<j&&R[i]<=tmp)
				i++;
			if(i<j)
			{
			R[j]=R[i];
			j--;
			}
		}
		R[i]=tmp;
		Quick(R,s,i-1);
		Quick(R,i+1,t);
	}
}
int main()
{
	int i,n,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	Bubble(a,n);
	printf("\r\n");
	Quick(a,0,n-1);
	for(i=0;i<n;i++)
	{
		if(i==0)
			printf("%d",a[i]);
		else
			printf(" %d",a[i]);
	}
	return 0;
}