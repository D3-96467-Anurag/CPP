#include <iostream>
using namespace std;

class LinkedList;   // forward declaration

class Node
{
    int data;
    Node *next;

public:
    Node(int d)
    {
        data = d;
        next = NULL;
    }

    friend class LinkedList;
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void add_first(int val)
    {
        Node *temp = new Node(val);

        temp->next = head;
        head = temp;
    }

    void add_last(int val)
    {
        Node *temp = new Node(val);

        if(head == NULL)
        {
            head = temp;
            return;
        }

        Node *ptr = head;

        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        ptr->next = temp;
    }

    void display()
    {
        Node *ptr = head;

        while(ptr != NULL)
        {
            cout << ptr->data << " -> ";
            ptr = ptr->next;
        }

        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList l;

    l.add_first(30);
    l.add_first(20);
    l.add_first(10);

    l.add_last(40);
    l.add_last(50);

    l.display();

    return 0;
}