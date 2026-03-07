#include <iostream>
#include <math.h>
using namespace std;

inline int factorial(int n)
{
  int fact = 1;
  if (n == 0) // factorial of 0 is 1
  {
    return 1;
  }
  for (int i = n; i > 1; i--)
  {
    fact = fact * i; // fact = 1* n * (n-1) * (n-2) * (n-3) * .... * 2
  }
  return fact;
}

inline int power(int base, int pow)
{
  int result = 1;
  if (base == 0)
  {
    return 0;
  }
  if (pow == 0)
  {
    return 1;
  }
  for (int i = 1; i <= pow; i++)
  {
    result = result * base; // result = 1* base * base * base * .... * base (pow times)
  }
  return result;
}

int main()
{
  int num;
  int base;
  int pow;
  cout << "Enter the number : "; //
  cin >> num;
  cout << "Enter the base : ";
  cin >> base;
  cout << "Enter the pow : ";
  cin >> pow;
  cout << "Factorial of: " << num << " is : " << factorial(num) << endl;
  // cout << "Enter a & b for Power(a,b): ";
  // cin >> base >> pow;
  cout << base << " ^ " << pow << " : "
       << power(base, pow) << endl;
  return 0;
}
