#include "Payment.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

Payment::Payment()
{
	strcpy(paymentID, "");
	strcpy(paymentType, "");
	paymentAmount = 0;
	strcpy(paymentDate, "");
	cardNumber = 0;
	pin = 0;
}

void Payment::Paymentdet(const char pID[], const char pType[], double pAmount, const char pDate[], long int cNumber, int cvv)
{
	strcpy(paymentID, pID);
	strcpy(paymentType, pType);
	paymentAmount = pAmount;
	strcpy(paymentDate, pDate);
	cardNumber = cNumber;
	pin = cvv;
}

long int Payment::getCnumber()
{
	return cardNumber;
}

int Payment::getPin()
{
	return pin;
}

void Payment::displayPaymentdet()
{
	cout << "________________________" << endl;
	cout << "Payment Id:" << paymentID << endl;
	cout << "Payment Type:" << paymentType << endl;
	cout << "Payment Amount :" << paymentAmount << endl;
	cout << "Payment Date:" << paymentDate << endl;
	cout << "________________________" << endl;
}
void Payment::dispSecuredinfo()
{
cout<< "Card Number :" << getCnumber() << endl;
cout<< "CVV :" << getPin() << endl;
}
Payment::~Payment()
{
	cout << "Payment deleted" << endl;
}