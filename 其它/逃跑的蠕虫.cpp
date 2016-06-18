#include<stdio.h>
int main()
{
	int n,u,d;
	while(scanf("%d %d %d",&n,&u,&d)!=EOF&&n!=0)
	{
		int s=0,t=0;
		while(s<n)
		{
			s=s+u;
			t++;
			if(s>=n) break;
			else
			{
				s=s-d;
				t++;
			}
		}
		printf("%d\n",t);
	}
	return 0;
}