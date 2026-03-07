#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    virtual void work() = 0;   // Abstract method
};

class Student : public Person
{
    int marks;

public:
    Student(string n, int a, int m) : Person(n, a)
    {
        marks = m;
    }

    void study()
    {
        cout << "Student is studying" << endl;
    }

    void work()
    {
        cout << "Student's work is studying" << endl;
    }
};

class Teacher : public Person
{
    int salary;

public:
    Teacher(string n, int a, int s) : Person(n, a)
    {
        salary = s;
    }

    void teach()
    {
        cout << "Teacher is teaching" << endl;
    }

    void work()
    {
        cout << "Teacher's work is teaching" << endl;
    }
};

int main()
{
    Person *p;

    Student s("Rahul", 20, 85);
    Teacher t("Mehta", 40, 50000);

    p = &s;
    p->display();
    p->work();

    cout << endl;

    p = &t;
    p->display();
    p->work();

    return 0;
}