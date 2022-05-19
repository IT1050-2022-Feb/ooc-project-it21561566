//IT21559136 ,W.L.D.N.N. Wijethunge,Group_MLB_03.02_01
#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"user.h"

//class Order
class Order
{
private:
	string OrderID;
	string OrderDate;
	R_Customer *cus;

public:
	Order();
	Order(string id, string date, R_Customer *CUS);
	void displayOrderDetails();
	~Order();
};