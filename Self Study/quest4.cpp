#include <iostream>
using namespace std;

class Laptop
{
private:
    int brandId;
    float price;

public:
    Laptop() : brandId(1), price(50000)
    {
        cout << "Laptop Constructor Called" << endl;
    }

    ~Laptop()
    {
        cout << "Laptop Destructor Called" << endl;
    }

    void display() const
    {
        cout << "Brand Id : " << this->brandId << endl;
        cout << "Price    : " << this->price << endl;
    }
};

int main()
{
    Laptop l1;

    cout << "\nLaptop Details\n";
    l1.display();

    return 0;
}