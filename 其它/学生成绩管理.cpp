#include<stdio.h>
#include<string.h>
int main()
{
	struct Student
	{
		long num;
		char Class[10];
		char name[15];
		float a;
		float b;
		float c;
	}student[100];
	int n,i,t;
	double a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld %s %s %f %f %f",&student[i].num,student[i].Class,student[i].name,&student[i].a,&student[i].b,&student[i].c);
	}
    for(i=0;i<n;i++)
	{
		a[i] = (student[i].a+student[i].b+student[i].c)/3.0;
	}
	t = 0;
	for(i=1;i<n;i++)
	{
		if(a[t]<a[i])
		{
			t=i;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s %.1f\n",student[i].name,a[i]);
	}
	printf("%ld %s %s %.1f %.1f %.1f %.1f\n",student[t].num,student[t].Class,student[t].name,student[t].a,student[t].b,student[t].c,a[t]);
	return 0;
}