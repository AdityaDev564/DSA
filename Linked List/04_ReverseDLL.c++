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

// Naive Solution

// Node *reverseDLL(Node *head)
// {

//     if (head == NULL || head->next == NULL)
//         return head;

//     Node *temp = head;
//     stack<int> st;
//     while (temp != NULL)
//     {
//         st.push(temp->data);
//         temp = temp->next;
//     }
//     temp = head;
//     while (temp != NULL)
//     {
//         temp->data = st.top();
//         st.pop();
//         temp = temp->next;
//     }

//     return head;
// }

Node *ReverseDLL(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        prev = curr->back;

        curr->back = curr->next;
        curr->next = prev;

        curr = curr->back;
    }

    return prev->back;
}

void print(Node *head)
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
    vector<int> arr = {10, 20, 30, 40, 50};
    Node *head = Arr2DLL(arr);
    print(head);
    head = ReverseDLL(head);
    print(head);
    return 0;
}