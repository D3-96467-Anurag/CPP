#include <iostream>
#include <string>

using namespace std;

class Product
{
protected:
    int id;
    string title;
    float price;

public:
    Product(int i, string t, float p)
    {
        id = i;
        title = t;
        price = p;
    }

    virtual float calculateDiscount() = 0;  // Pure Virtual Function

    virtual void display() = 0;             // Pure Virtual Function

    virtual ~Product() {}   // Virtual Destructor (Important)
};
class Book : public Product
{
private:
    string author;

public:
    Book(int i, string t, string a, float p)
        : Product(i, t, p)
    {
        author = a;
    }

    float calculateDiscount()
    {
        return price - (price * 0.10);   // 10% discount
    }

    void display()
    {
        cout << "\nBook Details\n";
        cout << "ID: " << id << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Original Price: " << price << endl;
        cout << "Price After 10% Discount: " << calculateDiscount() << endl;
    }

    ~Book() {}
};

class Tape : public Product
{
private:
    string artist;

public:
    Tape(int i, string t, string ar, float p)
        : Product(i, t, p)
    {
        artist = ar;
    }

    float calculateDiscount()
    {
        return price - (price * 0.05);   // 5% discount
    }

    void display()
    {
        cout << "\nTape Details\n";
        cout << "ID: " << id << endl;
        cout << "Title: " << title << endl;
        cout << "Artist: " << artist << endl;
        cout << "Original Price: " << price << endl;
        cout << "Price After 5% Discount: " << calculateDiscount() << endl;
    }

    ~Tape() {}
};
int main()
{
    Product* arr[3];   // Array of base class pointers
    int choice;
    float totalBill = 0;

    for(int i = 0; i < 3; i++)
    {
        cout << "\nSelect Product Type for Item " << i+1 << endl;
        cout << "1. Book\n2. Tape\nEnter choice: ";
        cin >> choice;

        int id;
        string title;
        float price;

        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Title: ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter Price: ";
        cin >> price;

        if(choice == 1)
        {
            string author;
            cout << "Enter Author: ";
            cin.ignore();
            getline(cin, author);

            arr[i] = new Book(id, title, author, price);
        }
        else if(choice == 2)
        {
            string artist;
            cout << "Enter Artist: ";
            cin.ignore();
            getline(cin, artist);

            arr[i] = new Tape(id, title, artist, price);
        }
        else
        {
            cout << "Invalid choice. Creating default Book.\n";
            arr[i] = new Book(id, title, "Unknown", price);
        }
    }

    cout << "\n======= BILL DETAILS =======\n";

    for(int i = 0; i < 3; i++)
    {
        arr[i]->display();  // Runtime Polymorphism
        totalBill += arr[i]->calculateDiscount();
    }

    cout << "\nTotal Final Bill: " << totalBill << endl;

    // Deleting dynamically allocated memory
    for(int i = 0; i < 3; i++)
    {
        delete arr[i];  // Prevent memory leak
    }

    return 0;
}