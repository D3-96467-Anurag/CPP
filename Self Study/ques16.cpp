#include <iostream>
using namespace std;

class Student
{
public:
    void display()
    {
        cout<<"Student Display"<<endl;
    }
};

class SmartPointer
{
private:
    Student *ptr;

public:
    SmartPointer(Student *p)
    {
        ptr = p;
    }

    Student* operator->()
    {
        return ptr;
    }

    ~SmartPointer()
    {
        delete ptr;
        cout<<"Memory released"<<endl;
    }
};

int main()
{
    try
    {
        SmartPointer s(new Student);

        s->display();

        // if exception occurs
        throw 1;
    }

    catch(...)
    {
        cout<<"Invalid input"<<endl;
    }

    return 0;
}