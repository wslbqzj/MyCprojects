// main.h: interface for the main class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAIN_H__2835760F_E8E1_45A6_8BF5_057FD0512E92__INCLUDED_)
#define AFX_MAIN_H__2835760F_E8E1_45A6_8BF5_057FD0512E92__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include<iostream>
using namespace std;
#include"cat.h"
#include"dog.h"		

class run          //程序运行类
{
private:
	float year;
	int month;
	int day;
	char have[2];
	int price;
	cat cat1;
	dog dog1;
public:
	void ran();
};

#endif // !defined(AFX_MAIN_H__2835760F_E8E1_45A6_8BF5_057FD0512E92__INCLUDED_)
