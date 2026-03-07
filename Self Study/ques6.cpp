#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    float balance;

public:
    BankAccount(int accNo, string name, float bal)
    {
        this->accountNumber = accNo;
        this->accountHolderName = name;
        this->balance = bal;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount Deposited: " << amount << endl;
    }

    void withdraw(float amount)
    {
        if(amount > balance)
        {
            cout << "Insufficient Balance" << endl;
        }
        else
        {
            balance = balance - amount;
            cout << "Amount Withdrawn: " << amount << endl;
        }
    }

    void displayBalance() const
    {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolderName << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main()
{
    BankAccount acc1(101, "Shourya", 5000);

    acc1.deposit(2000);
    acc1.withdraw(1500);
    acc1.displayBalance();

    return 0;
}