//IT21559136 ,W.L.D.N.N. Wijethunge,Group_MLB_03.02_01
#include<iostream>
#include<string>
using namespace std;
#include "Order.h"
#include "R_Customer.h"

//class Order Implimentations
Order::Order()
{
    
}
Order::Order(string id, string date, R_Customer *CUS)
{
    OrderID = id;
    OrderDate = date;
    cus = CUS;

}
void Order::displayOrderDetails()
{
    cout << " orderID : " << OrderID << endl;
    cus->displayCustomerDetails();
}

Order::~Order()
{
    cout << "Order Deleted" << endl;
}
