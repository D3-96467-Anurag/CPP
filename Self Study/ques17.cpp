#include <iostream>
#include <fstream>
using namespace std;

class Student
{
private:
    int rollno;
    float marks;

public:
    void accept()
    {
        cout<<"Enter roll number: ";
        cin>>rollno;

        cout<<"Enter marks: ";
        cin>>marks;
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

    ofstream fout("student.dat", ios::binary);
    s.accept();

    fout.write((char*)&s, sizeof(s));
    fout.close();

    Student s2;

    ifstream fin("student.dat", ios::binary);
    fin.read((char*)&s2, sizeof(s2));
    fin.close();

    cout<<"Student data from file:"<<endl;
    s2.display();

    return 0;
}