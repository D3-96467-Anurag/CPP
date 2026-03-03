
#include <iostream>
using namespace std;

class tollbooth
{
private:
    unsigned int totalCars;
    unsigned int payingCars;
    unsigned int nonPayingCars;
    double totalCash;

public:
    // Constructor initializes all data members to 0
    tollbooth()
    {
        totalCars = 0;
        payingCars = 0;
        nonPayingCars = 0;
        totalCash = 0.0;
    }

    // Function for paying car
    void payingCar()
    {
        totalCars++;
        payingCars++;
        totalCash += 0.50;
    }

    // Function for non-paying car
    void nopayCar()
    {
        totalCars++;
        nonPayingCars++;
    }

    // Function to display totals
    void printOnConsole()
    {
        cout << "\n----- Tollbooth Report -----" << endl;
        cout << "Total Cars Passed     : " << totalCars << endl;
        cout << "Paying Cars           : " << payingCars << endl;
        cout << "Non-Paying Cars       : " << nonPayingCars << endl;
        cout << "Total Cash Collected  : $" << totalCash << endl;
        cout << "----------------------------" << endl;
    }
};

int main()
{
    tollbooth booth;  // Object created

    int choice;

    do
    {
        cout << "\n===== Tollbooth Menu =====" << endl;
        cout << "1. Paying Car" << endl;
        cout << "2. Non-Paying Car" << endl;
        cout << "3. Display Report" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                booth.payingCar();
                cout << "Paying car recorded." << endl;
                break;

            case 2:
                booth.nopayCar();
                cout << "Non-paying car recorded." << endl;
                break;

            case 3:
                booth.printOnConsole();
                break;

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while(choice != 4);

    return 0;
}