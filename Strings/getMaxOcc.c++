#include <bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string str)
{
    int arr[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        int number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = max(maxi, arr[i]);
        }
    }
    char finalAns = ans + 'a';
    return finalAns;
}

int main()
{
    string str = "testcase";
    cout << getMaxOccuringChar(str);
    return 0;
}