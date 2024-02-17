// Stack using Linked List

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
    Node *head;
    int capacity;
    int currSize;

public:
    Stack(int c)
    {
        this->capacity = c;
        this->currSize = 0;
        head = NULL;
    }

    bool isEmpty()
    {
        return this->head == NULL;
    }

    bool isFull()
    {
        return this->currSize == this->capacity;
    }

    void push(int data)
    {
        Node *new_node = new Node(data);
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        new_node->next = this->head;
        this->head = new_node;
        this->currSize++;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return INT_MIN;
        }
        Node *temp = this->head;
        this->head = this->head->next;
        int value = temp->data;
        delete temp;
        this->currSize--;
        return value;
    }

    int getTop()
    {
        if (this->head == NULL)
        {
            cout << "Stack Underflow" << endl;
            return INT_MIN;
        }
        return this->head->data;
    }

    int size()
    {
        return this->currSize;
    }
};

int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.getTop() << endl;
    st.push(4);
    cout << st.getTop() << endl;
    st.pop();
    cout << st.getTop() << endl;
    return 0;
}