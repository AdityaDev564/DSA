#include <bits/stdc++.h>
using namespace std;
#define ll long long

string defangIPaddr(string address)
{
    string ans = "";
    string add = "[.]";
    for (int i = 0; i < address.size(); i++)
    {
        if (address[i] == '.')
        {
            ans += add;
        }
        else
        {
            ans.push_back(address[i]);
        }
    }
    return ans;
}

int main()
{

    return 0;
}