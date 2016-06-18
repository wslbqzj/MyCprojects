#include<stdio.h>
int main()
{
	int l;
	while(scanf("%d",&l)!=EOF)
    {
		int d,m;
		scanf("%d",&d);
		m=2-d+l;
		printf("%d\n",m);
	}
	return 0;
}