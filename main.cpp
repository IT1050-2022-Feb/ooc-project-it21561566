#include "user.h"
#include "staffMember.h"
#include "R_Customer.h"
#include "recipe.h"
#include "Order.h"
#include "Payment.h"
#include "feedback.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {

  cout << "-----------------------------------------" << endl;

    Order* O1 = new Order("OD2154", "2021-02-30", C1);
    O1->displayOrderDetails();
    O1->~Order();

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
