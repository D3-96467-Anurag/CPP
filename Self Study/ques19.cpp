#include <iostream>
#include <list>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    list<int> l;

    for(int i=0;i<10;i++)
    {
        l.push_back(rand()%100);
    }

    cout<<"Reverse order:"<<endl;

    list<int>::reverse_iterator rit;
    for(rit=l.rbegin(); rit!=l.rend(); rit++)
    {
        cout<<*rit<<" ";
    }

    cout<<endl;

    for(list<int>::iterator it=l.begin(); it!=l.end(); it++)
    {
        *it = *it + 5;
    }

    cout<<"Using const iterator:"<<endl;

    list<int>::const_iterator cit;
    for(cit=l.begin(); cit!=l.end(); cit++)
    {
        cout<<*cit<<" ";
    }

    cout<<endl;

    l.sort();

    cout<<"Sorted list:"<<endl;

    for(list<int>::iterator it=l.begin(); it!=l.end(); it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;

    return 0;
}