#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    void initDate()
    {
        day = 1;
        month = 1;
        year = 2000;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter Day: ";
        cin >> day;

        cout << "Enter Month: ";
        cin >> month;

        cout << "Enter Year: ";
        cin >> year;
    }

    void printDateOnConsole()
    {
        cout << "Date is: " << day << "/" << month << "/" << year << endl;
    }

    bool isLeapYear()
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return true;
        else
            return false;
    }
};

int main()
{
    Date d;
    int choice;

    do
    {
        cout << "\n1. Init Date";
        cout << "\n2. Accept Date";
        cout << "\n3. Print Date";
        cout << "\n4. Check Leap Year";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            d.initDate();
            break;

        case 2:
            d.acceptDateFromConsole();
            break;

        case 3:
            d.printDateOnConsole();
            break;

        case 4:
            if (d.isLeapYear())
                cout << "It is a Leap Year\n";
            else
                cout << "Not a Leap Year\n";
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}