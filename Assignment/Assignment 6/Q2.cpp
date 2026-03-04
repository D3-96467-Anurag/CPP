#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    double salary;

public:
    Employee()
    {
        id = 0;
        salary = 0.0;
    }

    Employee(int i, double s)
    {
        id = i;
        salary = s;
    }

    void setId(int i)
    {
        id = i;
    }

    int getId()
    {
        return id;
    }

    void setSalary(double s)
    {
        salary = s;
    }

    double getSalary()
    {
        return salary;
    }

    void accept()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Manager : virtual public Employee
{
protected:
    double bonus;

public:
    Manager()
    {
        bonus = 0.0;
    }

    Manager(int i, double s, double b)
        : Employee(i, s)
    {
        bonus = b;
    }

    void setBonus(double b)
    {
        bonus = b;
    }

    double getBonus()
    {
        return bonus;
    }

    void acceptManager()
    {
        accept();
        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void displayManager()
    {
        display();
        cout << "Bonus: " << bonus << endl;
    }
};

class Salesman : virtual public Employee
{
protected:
    double commission;

public:
    Salesman()
    {
        commission = 0.0;
    }

    Salesman(int i, double s, double c)
        : Employee(i, s)
    {
        commission = c;
    }

    void setCommission(double c)
    {
        commission = c;
    }

    double getCommission()
    {
        return commission;
    }

    void acceptSalesman()
    {
        accept();
        cout << "Enter Commission: ";
        cin >> commission;
    }

    void displaySalesman()
    {
        display();
        cout << "Commission: " << commission << endl;
    }
};

class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
    }

    SalesManager(int i, double s, double b, double c)
        : Employee(i, s), Manager(i, s, b), Salesman(i, s, c)
    {
    }

    void accept()
    {
        Employee::accept();
        cout << "Enter Bonus: ";
        cin >> bonus;
        cout << "Enter Commission: ";
        cin >> commission;
    }

    void display()
    {
        Employee::display();
        cout << "Bonus: " << bonus << endl;
        cout << "Commission: " << commission << endl;
    }
};

int main()
{
    cout << "----- Manager -----\n";
    Manager m;
    m.acceptManager();
    m.displayManager();

    cout << "\n----- Salesman -----\n";
    Salesman s;
    s.acceptSalesman();
    s.displaySalesman();

    cout << "\n----- SalesManager -----\n";
    SalesManager sm;
    sm.accept();
    sm.display();

    return 0;
}