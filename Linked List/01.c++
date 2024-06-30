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

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

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

int LengthOfLL(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

bool searchKey(Node *head, int key)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

Node *removesHead(Node *head)
{
    if (head == NULL)
        return head;

    Node *temp = head;
    head = head->next;
    delete temp;
    // free(temp);
    return head;
}

Node *removeK(Node *head, int k)
{
    if (head == nullptr)
        return head;

    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int cnt = 0;
    Node *temp = head, *prev = NULL;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *deleteElement(Node *head, int element)
{
    if (head == NULL)
        return head;
    if (head->data == element)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *temp = head, *prev = NULL;
    while (temp != NULL)
    {
        if (temp->data == element)
        {
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}

int main()
{
    vector<int> arr = {2, 4, 5, 8};
    // Node *y = new Node(arr[0], nullptr);
    // cout << y << endl;
    // cout << y->data << endl;
    Node *head = convertArr2LL(arr);
    cout << head->data << endl;
    LinkedListTraversal(head);
    // head = removesHead(head);
    // head = removeK(head, 2);
    head = deleteElement(head, 2);
    LinkedListTraversal(head);
    // cout << LengthOfLL(head) << endl;
    // cout << searchKey(head, 5) << endl;
    // cout << searchKey(head, 10) << endl;
    return 0;
}