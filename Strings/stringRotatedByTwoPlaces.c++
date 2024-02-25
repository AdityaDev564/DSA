/*
Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating (in any direction) string 'a' by exactly 2 places.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void rotateClockwise(string &s)
{
    char c = s[s.size() - 1];
    int index = s.size() - 2;
    while (index >= 0)
    {
        s[index + 1] = s[index];
        index--;
    }
    s[0] = c;
}

void rotateAntiClockwise(string &s)
{
    char c = s[0];
    int index = 1;
    while (index < s.size())
    {
        s[index - 1] = s[index];
        index++;
    }
    s[index - 1] = c;
}

bool isRotated(string str1, string str2)
{
    // Your code here
    string clockwise = str1, anticlockwise = str1;
    rotateClockwise(clockwise);
    rotateClockwise(clockwise);
    if (clockwise == str2)
        return true;
    rotateAntiClockwise(anticlockwise);
    rotateAntiClockwise(anticlockwise);
    if (anticlockwise == str2)
        return true;

    return false;
}

int main()
{

    return 0;
}