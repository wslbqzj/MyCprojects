#include<stdio.h>
int main()
{
	int n,i,j,a[100][100],x,y;
	scanf("%d",&n);
	scanf("%d%d",&x,&y);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		getchar();
	}
	printf("%d",a[x][y]);
	return 0;
}