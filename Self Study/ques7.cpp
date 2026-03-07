#include <iostream>
using namespace std;

namespace college
{

class Student
{
private:
    int rollno;
    string name;

public:
    Student(int r, string n)
    {
        rollno = r;
        name = n;
    }

    void setRoll(int r)
    {
        rollno = r;
    }

    int getRoll()
    {
        return rollno;
    }

    void display() const
    {
        cout << "Student Roll No : " << rollno << endl;
        cout << "Student Name    : " << name << endl;
    }
};


class Teacher
{
private:
    int id;
    string name;

public:
    Teacher(int i, string n)
    {
        id = i;
        name = n;
    }

    void setId(int i)
    {
        id = i;
    }

    int getId()
    {
        return id;
    }

    void display() const
    {
        cout << "Teacher Id   : " << id << endl;
        cout << "Teacher Name : " << name << endl;
    }
};

}

int main()
{
    college::Student s1(1,"Shamali");
    college::Teacher t1(101,"Mr Ketan Kore");

    cout<<"Student Details"<<endl;
    s1.display();

    cout<<endl;

    cout<<"Teacher Details"<<endl;
    t1.display();

    return 0;
}