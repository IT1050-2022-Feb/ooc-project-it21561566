//IT21469046 ,A.M.Nipuna Heshan Adhikari,Group_MLB_03.02_01
#pragma once
#include"user.h"
#include <iostream> 
#include<string>

//class R_Customer
class R_Customer : public user    //inheritance relationship
{
private:
  string DOB;
  string Gender;
  int noOfOrders;
  
public:
  R_Customer();
  R_Customer(string cName, string cID, string cEmail, string cDOB, string cGender , int Noder);
  void displayCustomerDetails();
  ~R_Customer();

};