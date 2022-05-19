//IT21469046 ,A.M.Nipuna Heshan Adhikari,Group_MLB_03.02_01
#pragma once
#include"user.h"
#include <iostream> 
#include<string>

//class staffMember
class staffMember:public user    //inheritance relationship
{
private:
  string Designation;

public:
  staffMember();
  staffMember(string cName, string cID, string cEmail,string sDesignation);
  void displaystaffmDetails();
  ~staffMember();

};