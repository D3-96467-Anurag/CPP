#include <iostream>
using namespace std;

class InvalidMarksException
{
public:
    void display()
    {
        cout<<"Marks cannot be negative"<<endl;
    }
};

class Student
{
private:
    int rollno;
    int marks;

public:

    void setRecord()
    {
        cout<<"Enter roll number: ";
        cin>>rollno;

        cout<<"Enter marks: ";
        cin>>marks;

        if(marks < 0)
            throw InvalidMarksException();
    }

    void display()
    {
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    Student s;

    try
    {
        s.setRecord();
        s.display();
    }

    catch(InvalidMarksException e)
    {
        e.display();
    }

    return 0;
}