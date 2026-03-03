#include <iostream>
using namespace std;

// Step 1: Define structure
struct Date
{
    int day;
    int month;
    int year;
};

// Function to initialize date
void initDate(Date &d)
{
    d.day ;
    d.month ;
    d.year ;
}

// Function to accept date from user
void acceptDateFromConsole(Date &d)
{
    cout << "Enter Day: ";
    cin >> d.day;

    cout << "Enter Month: ";
    cin >> d.month;

    cout << "Enter Year: ";
    cin >> d.year;
}

// Function to print date
void printDateOnConsole(Date d)
{
    cout << "Date is: " << d.day << "/" << d.month << "/" << d.year << endl;
}

// Function to check leap year
bool isLeapYear(Date d)
{
    if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0))
        return true;
    else
        return false;
}

// Main function
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
            initDate(d);
            break;

        case 2:
            acceptDateFromConsole(d);
            break;

        case 3:
            printDateOnConsole(d);
            break;

        case 4:
            if (isLeapYear(d))
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