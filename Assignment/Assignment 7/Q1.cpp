#include<iostream>
#include<vector>
using namespace std;

class Employee{
protected:
    int id;
    double salary;

public:
    Employee():id(0),salary(0){}

    virtual void accept(){
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter Salary: ";
        cin>>salary;
    }

    virtual void display(){
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }

    virtual ~Employee(){}
};

// Manager
class Manager : virtual public Employee{
protected:
    double bonus;

public:
    Manager():bonus(0){}

    void accept(){
        Employee::accept();
        cout<<"Enter Bonus: ";
        cin>>bonus;
    }

    void display(){
        Employee::display();
        cout<<"Bonus: "<<bonus<<endl;
    }
};

// Salesman
class Salesman : virtual public Employee{
protected:
    double commission;

public:
    Salesman():commission(0){}

    void accept(){
        Employee::accept();
        cout<<"Enter Commission: ";
        cin>>commission;
    }

    void display(){
        Employee::display();
        cout<<"Commission: "<<commission<<endl;
    }
};

// SalesManager
class SalesManager : public Manager, public Salesman{

public:
    void accept(){
        Employee::accept();
        cout<<"Enter Bonus: ";
        cin>>bonus;
        cout<<"Enter Commission: ";
        cin>>commission;
    }

    void display(){
        Employee::display();
        cout<<"Bonus: "<<bonus<<endl;
        cout<<"Commission: "<<commission<<endl;
    }
};

int main(){

    vector<Employee*> emp;

    int choice;

    do{
        cout<<"\n1 Add Manager";
        cout<<"\n2 Add Salesman";
        cout<<"\n3 Add SalesManager";
        cout<<"\n4 Count Employees";
        cout<<"\n5 Display Managers";
        cout<<"\n6 Display Salesmen";
        cout<<"\n7 Display SalesManagers";
        cout<<"\n0 Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;

        switch(choice){

        case 1:{
            Manager *m = new Manager();
            m->accept();
            emp.push_back(m);
            break;
        }

        case 2:{
            Salesman *s = new Salesman();
            s->accept();
            emp.push_back(s);
            break;
        }

        case 3:{
            SalesManager *sm = new SalesManager();
            sm->accept();
            emp.push_back(sm);
            break;
        }

        case 4:{
            int m=0,s=0,sm=0;

            for(Employee* e:emp){

                if(dynamic_cast<SalesManager*>(e))
                    sm++;

                else if(dynamic_cast<Manager*>(e))
                    m++;

                else if(dynamic_cast<Salesman*>(e))
                    s++;
            }

            cout<<"Managers: "<<m<<endl;
            cout<<"Salesmen: "<<s<<endl;
            cout<<"SalesManagers: "<<sm<<endl;

            break;
        }

        case 5:{
            for(Employee* e:emp){
                Manager* m = dynamic_cast<Manager*>(e);

                if(m && !dynamic_cast<SalesManager*>(e)){
                    m->display();
                    cout<<endl;
                }
            }
            break;
        }

        case 6:{
            for(Employee* e:emp){
                Salesman* s = dynamic_cast<Salesman*>(e);

                if(s && !dynamic_cast<SalesManager*>(e)){
                    s->display();
                    cout<<endl;
                }
            }
            break;
        }

        case 7:{
            for(Employee* e:emp){
                SalesManager* sm = dynamic_cast<SalesManager*>(e);

                if(sm){
                    sm->display();
                    cout<<endl;
                }
            }
            break;
        }

        }

    }while(choice!=0);

    return 0;
}