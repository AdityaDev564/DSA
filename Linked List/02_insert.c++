#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

void LinkedListTraversal(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *insertHead(Node *head, int val)
{
    Node *temp = new Node(val, head);
    return temp;
}

Node *insertTail(Node *head, int val)
{
    if (head == nullptr)
    {
        return new Node(val);
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = new Node(val);
    return head;
}

Node *insertKth(Node *head, int val, int k)
{
    if (head == NULL)
    {
        if (k == 1)
            return new Node(val);
        else
            return NULL;
    }
    if (k == 1)
    {
        Node *temp = new Node(val, head);
        return temp;
    }

    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k - 1)
        {
            Node *newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node *insertBeforeValue(Node *head, int el, int val)
{
    if (head == NULL)
    {
        return head;
    }

    if (head->data == val)
        return new Node(el, head);

    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->next->data == val)
        {
            Node *newNode = new Node(el, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    Node *head = new Node(10);
    head = insertTail(head, 20);
    head = insertTail(head, 30);
    head = insertTail(head, 40);
    LinkedListTraversal(head);
    head = insertHead(head, 5);
    LinkedListTraversal(head);
    head = insertKth(head, 25, 3);
    LinkedListTraversal(head);
    head = insertBeforeValue(head, 15, 25);
    LinkedListTraversal(head);
    return 0;
}