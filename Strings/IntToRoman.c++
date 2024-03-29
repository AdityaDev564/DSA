#include <bits/stdc++.h>
using namespace std;
#define ll long long

string roman(int num)
{
    vector<pair<int, string>> romanMap = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    string ans = "";
    for (const auto &pair : romanMap)
    {
        while (num >= pair.first)
        {
            ans += pair.second;
            num -= pair.first;
        }
    }
    return ans;
}

string intToRoman(int num)
{
    string ans = "";
    int mul = 1;
    while (num)
    {
        int remNum = (num % 10) * mul;
        ans = roman(remNum) + ans;
        mul *= 10;
        num /= 10;
    }
    return ans;
}

int main()
{

    return 0;
}