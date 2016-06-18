#include<stdio.h>
int main()
{
	int year,month,date,i,j,days,k;
	scanf("%d %d %d",&year,&month,&date);
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	char week[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	days=0;
	for(i=1;i<year;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
			days=days+366;
		else
			days=days+365;
	}
	for (i=1;i<month;i++)
	{
		days+=a[i];
	}
	if(month>2)
	{
		if(year%4==0&&year%100!=0||year%400==0)
			days++;
	}
	days+=date;
	j=days%7;
	printf("%s\n",week[j]);
		
	return 0;
}
