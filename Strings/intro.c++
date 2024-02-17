#include <bits/stdc++.h>
using namespace std;

int getLength(char name[])
{
    int i = 0;
    while (name[i] != '\0')
    {
        i++;
    }
    return i;
}

void reverseString(char name[])
{
    int i = 0;
    int j = getLength(name) - 1;
    while (i < j)
    {
        swap(name[i++], name[j--]);
    }
}

int main()
{
    char name[20];
    cout << "Enter your name: ";
    cin >> name;
    cout << name << endl;
    cout << "The length of your name " << name << " is " << getLength(name) << endl;
    reverseString(name);
    cout << "The reverse of your name is " << name << endl;
    return 0;
}