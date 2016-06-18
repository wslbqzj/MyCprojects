#include<stdio.h>
#include<string.h>
int main()
{
	struct student
	{
		char num[10];
		char name[10];
		int grade;
	}a[100];
	int i;
	scanf("%s %s %d",a[0].num,a[0].name,&a[0].grade);
	for(i=1;strcmp(a[i-1].num,"0")!=0;i++)
	{
		scanf("%s %s %d",a[i].num,a[i].name,&a[i].grade);
	}
	for(i=0;strcmp(a[i].num,"0")!=0;i++)
	{
		printf("%s %s %d\n",a[i].num,a[i].name,a[i].grade);
	}
	return 0;
}