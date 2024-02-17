#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node
{

public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{

    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{

    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next; // or tail = temp;
}

void insertAtPosition(Node *&head, int position, int d)
{

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;

    print(head);

    insertAtHead(head, 12);
    insertAtHead(head, 15);

    insertAtTail(tail, 20);
    insertAtTail(tail, 25);

    print(head);

    insertAtPosition(head, 3, 22);
    print(head);

    return 0;
}