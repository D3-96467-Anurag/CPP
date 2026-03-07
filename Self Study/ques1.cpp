#include <iostream>

using namespace std;

void callByValue(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
}
void callByReference(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int main()
{
  int x, y;
  cout << "Enter the numbers : ";
  cin >> x >> y;
  callByValue(x, y);
  cout << "Call by value: " << endl;
  cout << " x : " << x;
  cout << " y : " << y << endl;
  cout << "Call by reference: " << endl;
  callByReference(x, y);
  cout << " x : " << x;
  cout << " y : " << y;
}