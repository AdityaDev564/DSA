#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *Arr2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node *deleteHead(Node *head)
{
    if (head == NULL or head->next == NULL)
        return NULL;

    Node *prev = head;
    head = head->next;
    head->back = NULL;
    prev->next = NULL;
    delete prev;

    return head;
}

Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    Node *prev = temp->back;
    prev->next = NULL;
    temp->back = NULL;
    delete temp;

    return head;
}

Node *deleteKNode(Node *head, int k)
{
    if (k == 1)
    {
        return deleteHead(head);
    }
    if (head == NULL)
        return nullptr;

    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
            break;

        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *front = temp->next;

    if (prev == NULL && front == NULL)
    {
        delete temp;
        return NULL;
    }
    else if (prev == NULL)
        return deleteHead(head);

    else if (front == NULL)
        return deleteTail(head);
    else
    {
        prev->next = front;
        front->back = prev;
        temp->next = NULL;
        temp->back = NULL;
        delete temp;

        return head;
    }
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(Node *node)
{
    // Write your code here.
    Node *back = node->back;
    Node *front = node->next;

    if (front == NULL)
    {
        back->next = NULL;
        node->back = NULL;
        delete node;
        return;
    }

    back->next = front;
    front->back = back;

    node->next = node->back = NULL;
    delete node;
}

Node *insertAtFront(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
        return temp;

    temp->next = head;
    head->back = temp;
    return temp;
}

Node *insertBeforeTail(Node *head, int data)
{
    if (head == NULL)
        return new Node(data);

    if (head->next == NULL)
        insertAtFront(head, data);

    Node *tail = head;
    while (tail->next != NULL)
        tail = tail->next;

    Node *prev = tail->back;
    Node *newNode = new Node(data, tail, prev);
    prev->next = newNode;
    tail->back = newNode;

    return head;
}

void addNode(Node *head, int pos, int data)
{
    // Your code here
    Node *newNode = new Node(data);
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == pos)
            break;

        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        temp->next = newNode;
        newNode->back = temp;
        newNode->next = NULL;
    }
    else
    {
        newNode->back = temp;
        newNode->next = temp->next;
        temp->next->back = newNode;
        temp->next = newNode;
    }
}

Node *insertBeforeKthElement(Node *head, int k, int val)
{
    if (head == NULL)
        return new Node(val);
    if (k == 1)
        return insertAtFront(head, val);
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}

void insertBeforeNode(Node *node, int val)
{
    Node *prev = node->back;
    Node *newNode = new Node(val, node, prev);
    prev->next = newNode;
    node->back = newNode;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    // vector<int> arr = {1};
    Node *head = Arr2DLL(arr);
    print(head);
    // head = deleteHead(head);
    // head = deleteTail(head);
    // head = deleteKNode(head, 1);
    // deleteNode(head->next->next->next);
    // if (head == NULL)
    //     cout << "NULL" << endl;
    // else
    //     print(head);

    // head = insertAtFront(head, 20);
    // head = insertBeforeTail(head, 20);
    // addNode(head, 1, 20);
    // head = insertBeforeKthElement(head, 4, 20);
    insertBeforeNode(head->next->next->next, 20);
    print(head);
    return 0;
}