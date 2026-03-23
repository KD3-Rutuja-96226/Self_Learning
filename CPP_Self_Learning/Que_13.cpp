#include<iostream>
#include<cstring>
using namespace std;


class Payment
{
public:
    virtual void makePayment(double amount) = 0; 
};

class CreditCard : public Payment
{
public:
    void makePayment(double amount)
    {
        cout << "Payment of " << amount << " done using Credit Card" << endl;
    }
};


class UPI : public Payment
{
public:
    void makePayment(double amount)
    {
        cout << "Payment of " << amount << " done using UPI" << endl;
    }
};


class Cash : public Payment
{
public:
    void makePayment(double amount)
    {
        cout << "Payment of " << amount << " done using Cash" << endl;
    }
};


class PaymentFactory
{
public:
    static Payment* create(char *mode)
    {
        if(strcmp(mode, "credit") == 0)
            return new CreditCard();
        else if(strcmp(mode, "upi") == 0)
            return new UPI();
        else if(strcmp(mode, "cash") == 0)
            return new Cash();
        else
            return NULL;
    }
};


int main()
{
    char mode[20];
    double amount;

    cout << "Enter payment mode (credit/upi/cash): ";
    cin >> mode;

    cout << "Enter amount: ";
    cin >> amount;

    Payment *p = PaymentFactory::create(mode); 

    if(p != NULL)
    {
        p->makePayment(amount); 
    }
    else
    {
        cout << "Invalid payment mode" << endl;
    }

    delete p; 
    
    return 0;
}