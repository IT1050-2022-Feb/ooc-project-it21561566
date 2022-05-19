//
//#pragma once
#include <cstring>
#include<string>
#include <iostream>
using namespace std;

class FeedBack {
private:
    char FeedBackId[10];
    char FeedBackDate[20];
    char Discription[50];
public:
    FeedBack();
    FeedBack(const char FId[],const char Fdate[], const char Fdis[]);
    void DisplayFeedBack();
    ~FeedBack();
};

FeedBack::FeedBack()
{
    strcpy(FeedBackId, "");
    strcpy(FeedBackDate, "");
    strcpy(Discription, "");
}

FeedBack::FeedBack(const char FId[], const char Fdate[], const char Fdis[])
{
    strcpy(FeedBackId, FId);
    strcpy(FeedBackDate, Fdate);
    strcpy(Discription, Fdis);
}

void FeedBack::DisplayFeedBack()
{
    cout<<"----------------------"<<endl;
    cout << "FeedBack Id:" << FeedBackId << endl; 
    cout << "Date:" << FeedBackDate << endl;
    cout << "Discription:" << Discription << endl;
}

FeedBack::~FeedBack()
{
    cout << "Everthing is deleted" << endl;
}

class R_Customer {
private:
    FeedBack* Rc;
    char DOB[15];
    char Gender[5];
public:
    R_Customer();
    R_Customer(const char FfId[], const char Ffdate[], const char Ffdis[], const char dob[], const char gen[]);
    void DispayR_Customer();
    ~R_Customer();
};

R_Customer::R_Customer()
{
  strcpy(DOB,"");
  strcpy(Gender,"");
  Rc = new FeedBack();
  
}

R_Customer::R_Customer(const char FfId[], const char Ffdate[], const char Ffdis[], const char dob[], const char gen[])
{
    Rc = new FeedBack(FfId, Ffdate, Ffdis);
    strcpy(DOB, dob);
    strcpy(Gender, gen);
}

void R_Customer::DispayR_Customer()
{
    Rc->DisplayFeedBack();
    cout << "date of birth:" << DOB << endl;
    cout << "Gender:" << Gender << endl;
    cout<<"----------------------"<<endl;

}

R_Customer::~R_Customer()
{
  cout<<"object deleted"<<endl;
}

int main() {
    R_Customer* r1 = new R_Customer("f1234", "2022-05-06", "good", "2000-05-06", "Male");
    r1->DispayR_Customer();
    delete r1;
    return 0;
};