#include "user.h"
#include "staffMember.h"
#include "R_Customer.h"
#include "Recipe.h"
#include "Order.h"
#include "Payment.h"
#include "FeedBack.h"
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
  
  cout<<"************************************"<<endl;
  R_Customer *C1 = new R_Customer("Nipuna", "IT21469046", "niphes1123@gmail.com", "2000-05-01", "Male" ,5);
  
    C1->displayCustomerDetails();
    delete C1;
  
  cout<<"************************************"<<endl;
  cout<<endl;
  
  staffMember*s1 = new staffMember("Mahinda R.", "22222AV" ,"mahindar22@gmail.com" ,"senior Editor");
  
     s1->displaystaffmDetails();
     delete s1;
  
  cout<<"************************************"<<endl;

  cout << "-----------------------------------------" << endl;

    Order* O1 = new Order("OD2154", "2021-02-30", C1);
    O1->displayOrderDetails();
    delete O1;

  cout << "-----------------------------------------" << endl;
  
  Payment* p1 = new Payment();
  Payment* p2 = new Payment();
  Payment* p3 = new Payment();

  p1->Paymentdet("P101256", "Debit Card", 5000, "2022-05-14", 2115566669, 556 );
  p2->Paymentdet("P101587", "Credit Card", 3500, "2022-06-20", 2115558348, 539 );
  p3->Paymentdet("P159345", "Debit Card", 4700, "2022-03-09", 2117854112, 457 );
    
  p1->displayPaymentdet();
  p1->dispSecuredinfo();

  p2->displayPaymentdet();
  p2->dispSecuredinfo();

  p3->displayPaymentdet();
  p3->dispSecuredinfo();
  
return 0;
}
