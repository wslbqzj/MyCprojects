#include<stdio.h> 
void sift(int a[],int low,int high)
{
	int i=low,j=2*i;
	int tmp=a[i];
	while(j<=high)
	{
		if(j<high&&a[j]<a[j+1])
			j++;
		if(tmp<a[j])
		{
			a[i]=a[j];
			i=j;
			j=2*i;
		}
		else break;
	}
	a[i]=tmp;
}

void heap(int a[] , int n)  
{
	int i,k;
	for(i=n/2;i>=1;i--)
	{
		sift(a,i,n);
	}
	k = a[1]; 
	a[1] = a[n]; 
	a[n] = k;
}
int main() 
{ 
	int a[100],i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	heap(a,n);
	for(i=1;i<=n;i++)
	{
		if(i==1)
			printf("%d",a[i]);
		else
			printf(" %d",a[i]);
	}
	return 0;
}