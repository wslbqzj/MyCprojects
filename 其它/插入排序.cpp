#include<stdio.h>
void Insert(int R[],int n)
{
	int i,j,tmp,k;
	for(i=1;i<n;i++)
	{
		tmp=R[i];
		j=i-1;
		while(j>=0&&tmp<R[j])
		{
			R[j+1]=R[j];
			j--;
		}
		R[j+1]=tmp;
		for(k=0;k<n;k++)
		{
			if(k==0)
				printf("%d",R[k]);
			else
				printf(" %d",R[k]);
		}
		break;
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
	Insert(a,n);
	printf("\r\n");
	return 0;
}