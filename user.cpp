//IT21469046 ,A.M.Nipuna Heshan Adhikari,Group_MLB_03.02_01
#pragma once
#include"user.h"
#include <iostream> 
#include<string>

using namespace std;

user::user()
{
  
}
user::user(string uID, string uName,string uEmail)
{
  ID = uID;
  Name = uName;
  Email = uEmail;
}
user::~user()
{
  cout << "User deleted" << endl;
}