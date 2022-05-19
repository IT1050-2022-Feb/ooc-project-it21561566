//IT21469046 ,A.M.Nipuna Heshan Adhikari,Group_MLB_03.02_01
#pragma once
#include"R_Customer.h"
#include"user.h"
#include <iostream> 
#include<string>

using namespace std;
//class R_Customer Implementation
R_Customer::R_Customer()
{
}

R_Customer::R_Customer(string cName, string cID, string cEmail, string cDOB, string cGender ,int Noder)
{
    Name = cName;
    ID = cID;
    Email = cEmail;
    DOB = cDOB;
    Gender = cGender;
    noOfOrders=Noder;
}
void R_Customer::displayCustomerDetails()
{
    cout << " Customer Name  = " << Name << endl;
    cout << " Customer ID  = " << ID << endl;
    cout << " Customer Email  = " << Email << endl;
    cout << " Customer DOB  = " << DOB << endl;
    cout << " Customer Gender  = " << Gender << endl;
    cout << " NO. of Oders  = " << noOfOrders << endl;
}

R_Customer::~R_Customer()
{
	cout << "Registerd customer Deleted " << endl;
}