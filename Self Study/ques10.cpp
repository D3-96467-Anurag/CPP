#include <iostream>
using namespace std;

class Matrix
{
    int a[2][2];

public:
    void input()
    {
        cout << "Enter elements of matrix:" << endl;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void display()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(Matrix m)
    {
        Matrix temp;

        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }

        return temp;
    }

    Matrix operator-(Matrix m)
    {
        Matrix temp;

        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                temp.a[i][j] = a[i][j] - m.a[i][j];
            }
        }

        return temp;
    }

    Matrix operator*(Matrix m)
    {
        Matrix temp;

        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                temp.a[i][j] = 0;

                for(int k=0;k<2;k++)
                {
                    temp.a[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }

        return temp;
    }
};

int main()
{
    Matrix m1,m2,m3;

    cout<<"Enter Matrix 1"<<endl;
    m1.input();

    cout<<"Enter Matrix 2"<<endl;
    m2.input();

    cout<<"Addition:"<<endl;
    m3 = m1 + m2;
    m3.display();

    cout<<"Subtraction:"<<endl;
    m3 = m1 - m2;
    m3.display();

    cout<<"Multiplication:"<<endl;
    m3 = m1 * m2;
    m3.display();

    return 0;
}