#include <iostream>
#include <string>

using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    // Default Constructor
    Date()
    {
        day = 1;
        month = 1;
        year = 2000;
    }

    // Parameterized Constructor
    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    // Setters
    void setDay(int d)
    {
        day = d;
    }

    void setMonth(int m)
    {
        month = m;
    }

    void setYear(int y)
    {
        year = y;
    }

    // Getters
    int getDay() const
    {
        return day;
    }

    int getMonth() const
    {
        return month;
    }

    int getYear() const
    {
        return year;
    }

    // Display Function
    void printDate() const
    {
        cout << day << "/" << month << "/" << year;
    }
};

class Person
{
private:
    string name;
    string address;
    Date birthdate;   // Association (Person HAS-A Date)

public:
    // Default Constructor
    Person()
    {
        name = "Unknown";
        address = "Unknown";
    }

    // Parameterized Constructor
    Person(string n, string a, Date b)
    {
        name = n;
        address = a;
        birthdate = b;  // Association
    }

    // Setters
    void setName(string n)
    {
        name = n;
    }

    void setAddress(string a)
    {
        address = a;
    }

    void setBirthdate(Date b)
    {
        birthdate = b;
    }

    // Getters
    string getName() const
    {
        return name;
    }

    string getAddress() const
    {
        return address;
    }

    Date getBirthdate() const
    {
        return birthdate;
    }

    // Display
    void printPerson() const
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Birthdate: ";
        birthdate.printDate();
        cout << endl;
    }
};
class Student
{
private:
    int id;
    float marks;
    string course;
    Date joiningDate;   // Association
    Date endDate;       // Association

public:
    // Default Constructor
    Student()
    {
        id = 0;
        marks = 0.0;
        course = "Not Assigned";
    }

    // Parameterized Constructor
    Student(int i, float m, string c, Date j, Date e)
    {
        id = i;
        marks = m;
        course = c;
        joiningDate = j;
        endDate = e;
    }

    // Setters
    void setId(int i)
    {
        id = i;
    }

    void setMarks(float m)
    {
        marks = m;
    }

    void setCourse(string c)
    {
        course = c;
    }

    void setJoiningDate(Date j)
    {
        joiningDate = j;
    }

    void setEndDate(Date e)
    {
        endDate = e;
    }

    // Getters
    int getId() const
    {
        return id;
    }

    float getMarks() const
    {
        return marks;
    }

    string getCourse() const
    {
        return course;
    }

    Date getJoiningDate() const
    {
        return joiningDate;
    }

    Date getEndDate() const
    {
        return endDate;
    }

    // Display
    void printStudent() const
    {
        cout << "Student ID: " << id << endl;
        cout << "Marks: " << marks << endl;
        cout << "Course: " << course << endl;

        cout << "Joining Date: ";
        joiningDate.printDate();
        cout << endl;

        cout << "End Date: ";
        endDate.printDate();
        cout << endl;
    }
};
int main()
{
    // Creating Date objects
    Date birth(15, 8, 2002);
    Date join(1, 7, 2021);
    Date end(30, 4, 2025);

    // Creating Person
    Person p1("Anurag", "Pune", birth);

    // Creating Student
    Student s1(101, 88.5, "Computer Science", join, end);

    cout << "===== Person Details =====" << endl;
    p1.printPerson();

    cout << endl;

    cout << "===== Student Details =====" << endl;
    s1.printStudent();

    return 0;
}