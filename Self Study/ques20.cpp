#include <iostream>
#include <memory>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout<<"Object Created"<<endl;
    }

    ~Demo()
    {
        cout<<"Object Destroyed"<<endl;
    }

    void show()
    {
        cout<<"Demo Function"<<endl;
    }
};

int main()
{
    cout<<"Unique Pointer"<<endl;

    unique_ptr<Demo> u1(new Demo());
    u1->show();

    cout<<"Shared Pointer"<<endl;

    shared_ptr<Demo> s1(new Demo());
    shared_ptr<Demo> s2 = s1;

    cout<<"Reference count: "<<s1.use_count()<<endl;

    cout<<"Weak Pointer"<<endl;

    weak_ptr<Demo> w1 = s1;

    if(!w1.expired())
    {
        cout<<"Weak pointer referencing shared object"<<endl;
    }

    return 0;
}