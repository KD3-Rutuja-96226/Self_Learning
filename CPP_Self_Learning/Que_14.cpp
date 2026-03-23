#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount < 0) {
            throw amount; 
        }
        balance += amount;
        cout << "Successfully deposited " << amount << ". New balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount < 0) {
            throw amount; 
        }
        if (amount > balance) {
            throw string("Error: Insufficient balance. You only have $") + to_string(balance);
        }
        balance -= amount;
        cout << "Successfully withdrew " << amount << ". Remaining balance: " << balance << endl;
    }

    void display() {
        cout << "Account Holder: " << accountHolder << " | Balance: " << balance << endl;
    }
};

int main() {
    BankAccount myAccount("John Doe", 500.0);
    double amt;
    int choice;

    while (true) {
        cout << "\n1. Deposit\n2. Withdraw\n3. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 3) break;

        cout << "Enter amount: ";
        cin >> amt;

        try {
            if (choice == 1) {
                myAccount.deposit(amt);
            } else if (choice == 2) {
                myAccount.withdraw(amt);
            }
        } 
        catch (double e) {
            cout << "Caught Exception: Invalid negative amount (" << e << ") entered!" << endl;
        } 

        catch (string e) {
            cout << "Caught Exception: " << e << endl;
        }
    }

    return 0;
}
