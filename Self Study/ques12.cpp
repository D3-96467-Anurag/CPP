#include <iostream>
#include <cstring>
using namespace std;

class Product
{
protected:
    char title[50];
    float price;

public:
    virtual void accept()
    {
        cout << "Enter title: ";
        cin >> title;

        cout << "Enter price: ";
        cin >> price;
    }

    virtual void display()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public Product
{
    int pages;

public:
    void accept()
    {
        Product::accept();
        cout << "Enter pages: ";
        cin >> pages;
    }

    void display()
    {
        cout << "Pages: " << pages << endl;
    }
};

class Tape : public Product
{
    int playtime;

public:
    void accept()
    {
        Product::accept();
        cout << "Enter playtime: ";
        cin >> playtime;
    }

    void display()
    {
        cout << "Playtime: " << playtime << endl;
    }
};

int main()
{
    int choice;

    Product *arr[5];

    for(int i=0;i<5;i++)
    {
        cout<<"1. Book  2. Tape"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                arr[i] = new Book();
                arr[i]->accept();
                break;

            case 2:
                arr[i] = new Tape();
                arr[i]->accept();
                break;
        }
    }

    cout << endl << "Displaying pages and playtime:" << endl;

    for(int i=0;i<5;i++)
    {
        arr[i]->display();
    }

    return 0;
}