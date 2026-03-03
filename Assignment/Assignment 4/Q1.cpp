#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    // Default Constructor
    Time() {
        hour = 0;
        minute = 0;
        second = 0;
    }

    // Parameterized Constructor
    Time(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    // Getters
    int getHour() {
        return hour;
    }

    int getMinute() {
        return minute;
    }

    int getSeconds() {
        return second;
    }

    // Setters
    void setHour(int h) {
        hour = h;
    }

    void setMinute(int m) {
        minute = m;
    }

    void setSeconds(int s) {
        second = s;
    }

    // Print Time
    void printTime() {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main() {
    int size;
    cout << "Enter number of Time objects: ";
    cin >> size;

    // Dynamic array allocation
    Time* t = new Time[size];

    int choice;
    int count = 0;

    do {
        cout << "\n----- MENU -----\n";
        cout << "1. Add Time\n";
        cout << "2. Display All Time\n";
        cout << "3. Display only hours of all time objects\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            if(count < size) {
                int h, m, s;
                cout << "Enter hour minute second: ";
                cin >> h >> m >> s;

                t[count].setHour(h);
                t[count].setMinute(m);
                t[count].setSeconds(s);
                count++;

                cout << "Time added successfully!\n";
            } else {
                cout << "Array is full!\n";
            }
            break;

        case 2:
            if(count == 0) {
                cout << "No time objects to display.\n";
            } else {
                cout << "All Time Objects:\n";
                for(int i = 0; i < count; i++) {
                    t[i].printTime();
                }
            }
            break;

        case 3:
            if(count == 0) {
                cout << "No time objects to display.\n";
            } else {
                cout << "Hours of all Time Objects:\n";
                for(int i = 0; i < count; i++) {
                    cout << t[i].getHour() << endl;
                }
            }
            break;

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while(choice != 4);

    // Free memory
    delete[] t;

    return 0;
}