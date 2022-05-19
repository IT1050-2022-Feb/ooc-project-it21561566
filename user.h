//IT21469046 ,A.M.Nipuna Heshan Adhikari,Group_MLB_03.02_01
#pragma once
#include <iostream> 
#include<string>

using namespace std;

//class User
class user
{
protected:
  string ID;
  string Name;
  string Email;

public:
  user();
  user(string uID, string uName,string uEmail);
  ~user();

};
