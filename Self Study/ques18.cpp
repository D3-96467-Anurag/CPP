#include <iostream>
using namespace std;

template<class T>
class Array
{
private:
    T *arr;
    int size;

public:
    Array(int s)
    {
        size = s;
        arr = new T[size];
    }

    void accept()
    {
        for(int i=0;i<size;i++)
        {
            cout<<"Enter element "<<i+1<<": ";
            cin>>arr[i];
        }
    }

    void display()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    T& operator[](int index)
    {
        return arr[index];
    }

    ~Array()
    {
        delete[] arr;
    }
};

int main()
{
    int n;

    cout<<"Enter array size: ";
    cin>>n;

    Array<int> a(n);

    a.accept();
    a.display();

    cout<<"Element at index 2: "<<a[2]<<endl;

    return 0;
}