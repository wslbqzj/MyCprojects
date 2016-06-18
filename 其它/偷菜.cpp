#include<stdio.h>
struct T
{
	int a;
	char b;
	int c;
};
int main()
{
	struct T t[100];
	int n,i,z,w;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%c%d",&t[i].a,&t[i].b,&t[i].c);
	}
	for(i=0;i<n;i++)
	{
		z=t[i].a+13;
		if(z>=24)
		{
			z=z-24;
		}
		w=t[i].c+15;
		if(w>=60)
		{
			w=w-60;
			z++;
		}
		printf("%d%c%d\n",z,':',w);
	}
	return 0;
}