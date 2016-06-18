#include<stdio.h>
int t=0;
void search(int R[],int n,int k)
{
	
	int low=0,high=n-1,mid,flag=0;
	while(low<=high)
	{
		t++;
		mid=(low+high)/2;
		if(R[mid]==k)
		{
			flag=1;
			break;
		}
		if(R[mid]>k)
			high=mid-1;
		else
			low=mid+1;
		
	}
	if(flag==1)
		printf("%d\r\n%d", mid,t);
	else
		printf("-1");
}
int main()
{
	int n,i,x,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	search(a,n,x);
	return 0;
}