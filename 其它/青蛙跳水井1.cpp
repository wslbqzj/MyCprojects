#include<stdio.h>
int main()
{
	int l,x,h;
    while(scanf("%d %d %d",&l,&h,&x)!=EOF&&l!=0&&h!=0&&x!=0)
	{
		int t=0,y=0;
		for(t=0;y<l;)
		{
			if(y+h>=l) 
			{
				t++;
				break;
			}
			else
			{
				y=y+h-x;
				t++;
			}
		}
		printf("%d\n",t);
	}
	return 0;
}