#include <bits/stdc++.h>
using namespace std;

bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

bool checkPalindrome(string s)
{
    // Write your code here.
    string temp = "";
    for (int j = 0; j < s.size(); j++)
    {
        if (valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }
    s = temp;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int i = 0;
    int j = s.size() - 1;
    while (i <= j)
    {
        if (s[i])
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else
                break;
    }
    if (i >= j)
    {
        return true;
    }
    return false;
}

int main()
{
    string s1 = "c1 O$d@eeD o1c";
    string s = "codingninjassajNiNgNidoc";
    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    // cout << s << endl;
    cout << checkPalindrome(s);
    cout << checkPalindrome(s1);
    return 0;
}