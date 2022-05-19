//IT21561566 - S.R.N.M Fernando
class Payment
{
private:
	char paymentID[10];
	char paymentType[10];
	double paymentAmount;
	char paymentDate[20];
	long int cardNumber;
	int pin;

public:
	Payment();
	void Paymentdet(const char pID[], const char pType[], double pAmount, const char pDate[], long int cNumber, int cvv);
	void displayPaymentdet();
	long int getCnumber();
	int getPin();
  void dispSecuredinfo();
	~Payment();
};
