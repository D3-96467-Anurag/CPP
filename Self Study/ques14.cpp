#include <iostream>
#include <cstring>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    char accountHolderName[50];
    double balance;

public:
    BankAccount()
    {
        accountNumber = 0;
        strcpy(accountHolderName,"NA");
        balance = 0;
    }

    void accept()
    {
        cout<<"Enter account number: ";
        cin>>accountNumber;

        cout<<"Enter name: ";
        cin>>accountHolderName;

        cout<<"Enter balance: ";
        cin>>balance;
    }

    void deposit(double amount)
    {
        if(amount < 0)
            throw amount;

        balance += amount;
    }

    void withdraw(double amount)
    {
        if(amount < 0)
            throw amount;

        if(amount > balance)
            throw "Insufficient Balance";

        balance -= amount;
    }

    void display()
    {
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Name: "<<accountHolderName<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main()
{
    BankAccount b;
    double amt;

    b.accept();

    try
    {
        cout<<"Enter deposit amount: ";
        cin>>amt;
        b.deposit(amt);

        cout<<"Enter withdraw amount: ";
        cin>>amt;
        b.withdraw(amt);
    }

    catch(double x)
    {
        cout<<"Invalid amount entered: "<<x<<endl;
    }

    catch(const char* msg)
    {
        cout<<"Error: "<<msg<<endl;
    }

    b.display();

    return 0;
}