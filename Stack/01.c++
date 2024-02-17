// Stack using arrays

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Stack
{
    int capacity;
    int *arr;
    int top;

public:
    Stack(int c)
    {
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    void push(int data)
    {
        if (this->top == this->capacity - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }

    int pop()
    {
        if (this->top == -1)
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        int value = this->arr[this->top];
        this->top--;
        return value;
    }
    int getTop()
    {
        if (this->top == -1)
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return this->arr[this->top];
    }

    bool isEmpty()
    {
        return this->top == -1;
    }

    int size()
    {
        return this->top + 1;
    }

    bool isFull()
    {
        return this->top == this->capacity - 1;
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