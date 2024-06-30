#include <bits/stdc++.h>
using namespace std;
#define ll long long

int countVowels(string s, int index)
{
    // base case
    if (index == -1)
        return 0;

    if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u')
        return 1 + countVowels(s, index - 1);
    else
        return countVowels(s, index - 1);
}

int main()
{
    string s = "hello";
    cout << countVowels(s, s.length() - 1) << endl;
    return 0;
}