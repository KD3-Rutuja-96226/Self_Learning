#include <iostream>
using namespace std;
class BankAccount
{
private:
    int accNum;
    string accHolName;
    double balance;

public:
    BankAccount(void)
    {
        this->accNum = 0;
        this->accHolName = "";
        this->balance = 0;
    }
    void acceptRecord(void)
    {
        cout << "AccountNumber : " << endl;
        cin >> accNum;
        cout << "Account Holder : " << endl;
        cin >> accHolName;
        cout << "Balance : " << endl;
        cin >> balance;
    }
    void deposit(int amt)
    {
        if (amt > 0)
        {
            balance += amt;
        }
        else{
            cout<<"Invalid Amount."<<endl;
        }
    }
    void withdraw(int amt)
    {
        if (amt > 0 && amt <= balance)
        {
            balance -= amt;
        }
        else{
            cout<<"Invalid Amount."<<endl;
        }
    }
    void display(void)
    {
        cout << "Account Number : " << accNum << endl;
        cout << "Account Holder Name : " << accHolName << endl;
        cout << "Balance : " << balance << endl;
    }
};
int menuList(void)
{
    int choice;
    cout << "\n \n0.Exit." << endl;
    cout << "1.Enter Record." << endl;
    cout << "2.Deposit." << endl;
    cout << "3.Withdraw." << endl;
    cout << "Enter the Choice : " << endl;
    cin >> choice;
    return choice;
}
int main()
{
    int choice, amt;
    BankAccount b;
    while ((choice = menuList()) != 0)
    {
        switch (choice)
        {
        case 1:
            b.acceptRecord();
            break;

        case 2:
            cout<<endl;
            cout << "Enter the Amount : " << endl;
            cin >> amt;
            b.deposit(amt);
            b.display();
            break;
        case 3:
            cout <<"Enter the Amount : " << endl;
            cin >> amt;
            b.withdraw(amt);
            b.display();
            break;

        default:
            break;
        }
    }
}