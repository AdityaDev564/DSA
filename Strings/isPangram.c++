#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool checkIfPangram(string sentence)
{
    int count[26] = {0};
    for (int i = 0; i < sentence.size(); i++)
    {
        count[sentence[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
            return false;
    }
    return true;
}

int main()
{

    return 0;
}