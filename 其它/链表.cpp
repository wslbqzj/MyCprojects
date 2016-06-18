#include<stdio.h>
#include<string.h>
struct Student
{
	char num[10];
	char name[8];
	int grade; 
	Student*next;
};
int main()
{
	Student a[100],*head,*q;
	scanf("%s %s %d",a[0].num,a[0].name,&a[0].grade);
	int i=1,j,k,l;
	head=&a[0];
	a[0].next =&a[1];
    while(scanf("%s %s %d",a[i].num,a[i].name,&a[i].grade)!=EOF)
	{
		j=strcmp(a[i].num,"0");
		k=strcmp(a[i].name,"0");
		l=a[i].grade;
		if(j==0&&k==0&&l==0)
		{
			a[i-1].next=NULL;
			break;
		}
		else
		{
			a[i].next=&a[i+1];
			i++;
		}
	}
	q=head;
	while (q!=NULL)
	{
		printf("%s %s %d\n",q->num,q->name,q->grade);
		q=q->next;
	}
	return 0;
}