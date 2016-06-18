#include<stdio.h>
int main()
{
	struct y
	{
		char a[20];
		int b;
		int c;
		char d;
		char e;
		int f;
	}str[100];
	int n;
	scanf("%d",&n);
		int i,t[100]={0},x=0,w=0;
		scanf("%s %d %d %c %c %d",str[0].a,&str[0].b,&str[0].c,&str[0].d,&str[0].e,&str[0].f);
		if(str[0].b>80&&str[0].f>=1)
		{
			t[0]=t[0]+8000;
		}
		if(str[0].b>85&&str[0].c>80)
		{
			t[0]=t[0]+4000;
		}
		if(str[0].b>90)
		{
			t[0]=t[0]+2000;
		}
		if(str[0].b>85&&str[0].e=='Y')
		{
			t[0]=t[0]+1000;
		}
		if(str[0].c>80&&str[0].d=='Y')
		{
			t[0]=t[0]+850;
		}
		for(i=1;i<n;i++)
		{
			scanf("%s %d %d %c %c %d",str[i].a,&str[i].b,&str[i].c,&str[i].d,&str[i].e,&str[i].f);
			if(str[i].b>80&&str[i].f>=1)
			{
				t[i]=t[i]+8000;
			}
			if(str[i].b>85&&str[i].c>80)
			{
				t[i]=t[i]+4000;
			}
			if(str[i].b>90)
			{
				t[i]=t[i]+2000;
			}
			if(str[i].b>85&&str[i].e=='Y')
			{
				t[i]=t[i]+1000;
			}
			if(str[i].c>80&&str[i].d=='Y')
			{
				t[i]=t[i]+850;
			}
			if(t[i]>t[x])
			{
				x=i;
			}
		}
		for(i=0;i<n;i++)
		{
			w=w+t[i];
		}
		printf("%s\n%d\n%d\n",str[x].a,t[x],w);
	return 0;
}