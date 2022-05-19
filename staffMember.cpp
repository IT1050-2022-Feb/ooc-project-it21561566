//IT21469046 ,A.M.Nipuna Heshan Adhikari,Group_MLB_03.02_01
#pragma once
#include"staffMember.h"
#include"user.h"
#include <iostream> 
#include<string>

using namespace std;

staffMember::staffMember()
{
}

staffMember::staffMember(string cName, string cID, string cEmail,string sDesignation)
{
    Name = cName;
    ID = cID;
    Email = cEmail;
    Designation=sDesignation;
}
void staffMember:: displaystaffmDetails(){
    cout << " staff Name  = " << Name << endl;
    cout << " staff ID  = " << ID << endl;
    cout << " staff Email  = " << Email << endl;
    cout << " Staff Member Designation  = " << Designation << endl;
  
}
staffMember::~staffMember()
{
	cout << "Staff memeber deleted " << endl;
}