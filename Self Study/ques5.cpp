#include <iostream>
using namespace std;

int mystrlen(char *str)
{
    int count = 0;

    while (str[count] != '\0')
    {
        count++;
    }

    return count;
}

void mystrcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

int main()
{
    char str1[100];
    char str2[100];

    cout << "Enter a string: ";
    cin >> str1;

    cout << "Length of string is: " << mystrlen(str1) << endl;

    mystrcpy(str2, str1);

    cout << "Copied string is: " << str2 << endl;

    return 0;
}