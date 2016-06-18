// main.cpp: implementation of the main class.
//
//////////////////////////////////////////////////////////////////////
#include<iostream>

 #include <conio.h> 
 #include <time.h> 
#include<string.h>
using namespace std;

#include "main.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

void run::ran()
{
	cat1.shuru();
	dog1.shuru();
	float year=0;
	int month=1,inp;

	srand( (unsigned)time( NULL)); 
	if((rand()%2)==0)            //判断狗开始是否有房
		strcpy(have,"y");
	else
		strcpy(have,"n");
	srand( (unsigned)time( NULL ) ); 
	if((rand()%2)==1)            //猫第一次情人节是否收到礼物
	{
		dog1.liwu=(rand()%101);
		dog1.save=dog1.save-dog1.liwu;
		cat1.amount=cat1.amount+2;
	}
	
	if((rand()%2)==1)           //猫第二次情人节是否收到礼物
	{
		dog1.liwu=(rand()%101);
		dog1.save=dog1.save-dog1.liwu;
		cat1.amount=cat1.amount+2;
	}
	if((rand()%2)==1)           //猫生日是否收到礼物
	{
	    dog1.liwu=(rand()%101);
		dog1.save=dog1.save-dog1.liwu;
		cat1.amount++;
	}
	

	if((rand()%2)==1)          //狗第一次情人节是否收到礼物
	{
		cat1.liwu=(rand()%101);
		cat1.save=cat1.save-cat1.liwu;
		dog1.amount=dog1.amount+2;
	}
	
	if((rand()%2)==1)              //狗第二次情人节是否收到礼物
	{
		cat1.liwu=(rand()%101);
		cat1.save=cat1.save-cat1.liwu;
		dog1.amount=dog1.amount+2;
	}
	if((rand()%2)==1)                  //狗生日是否收到礼物
	{
		cat1.liwu=(rand()%101);
		cat1.save=cat1.save-cat1.liwu;
		dog1.amount++;
	}

	for(day=1;year<1.5;day++)       //大循环
	{
		if(day==32&&(month==1||month==3||month==5||month==7||month==8||month==10||month==12))      //日期计算
		{
			month++;
			day=1;
			if(month==13)
			{
				year++;
				month=1;
			}
		}
		else if(day==31&&(month==4||month==6||month==9||month==11))       
		{
			month++;
			day=1;
			if(month==13)
			{
				year++;
				month=1;
			}
		}
		else
		{
			if(day==29)         
			{
				month++;
				day=1;
			}
		}

		price=rand()%5001+5000;//房价

		if(dog1.save==price)
		{
			strcpy(have,"y");
		}
		int fu=rand()%4;
		if(fu==1)              //判断是否吵架
		{
			cat1.amount=cat1.amount-0.5;
			dog1.amount=dog1.amount-0.5;
		}
		dog1.save=dog1.save+dog1.income-dog1.cost;
		cat1.save=cat1.save+cat1.income-cat1.cost;

		if(cat1.amount>=9&&dog1.amount>=9&&strcmp(have,"y")==0&&year<=1.5)         //猫和狗结婚的条件
		{
			cout<<"yes"<<endl;
			break;
		}

		cout<<"*************************************************************"<<endl;
		_sleep(1000);
		cout<<"狗的存款总和:"<<dog1.save<<endl;
		cout<<"猫对狗的指数:"<<cat1.amount<<endl;
		cout<<"狗对猫的指数:"<<dog1.amount<<endl;
		cout<<"请选择是否继续（0否，1是）:";
		cin>>inp;
		if(inp==0)
			break;
		cout<<endl;
	}
	if(cat1.amount<9||dog1.amount<9||strcmp(have,"n")==0||year>1.5)
		cout<<"no"<<endl;
}