#include <iostream>
using namespace std;

class Box
{
private:
    double length;
    double width;
    double height;

public:
    // 1. Parameterless Constructor (Default Values)
    Box()
    {
        length = 1;
        width = 1;
        height = 1;
    }

    // 2. Single Parameterized Constructor
    Box(double value)
    {
        length = value;
        width = value;
        height = value;
    }

    // 3. Three Parameterized Constructor
    Box(double l, double w, double h)
    {
        length = l;
        width = w;
        height = h;
    }

    // Function to calculate volume
    double calculateVolume()
    {
        return length * width * height;
    }
};

int main()
{
    int choice;

    do
    {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Calculate Volume with default values" << endl;
        cout << "2. Calculate Volume with same length, breadth and height" << endl;
        cout << "3. Calculate Volume with different length, breadth and height" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Box b1;  // Parameterless constructor
            cout << "Volume (Default Values) = " 
                 << b1.calculateVolume() << endl;
            break;
        }

        case 2:
        {
            double value;
            cout << "Enter value for length, breadth and height: ";
            cin >> value;

            Box b2(value);  // Single parameterized constructor
            cout << "Volume (Same Values) = " 
                 << b2.calculateVolume() << endl;
            break;
        }

        case 3:
        {
            double l, w, h;
            cout << "Enter length: ";
            cin >> l;
            cout << "Enter breadth: ";
            cin >> w;
            cout << "Enter height: ";
            cin >> h;

            Box b3(l, w, h);  // Three parameterized constructor
            cout << "Volume (Different Values) = " 
                 << b3.calculateVolume() << endl;
            break;
        }

        case 4:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 4);

    return 0;
}