#include <bits/stdc++.h>
using namespace std;
#define ll long long

int countDistinctWays(int nStairs)
{
    //  Write your code here.
    if (nStairs < 0)
    {
        return 0;
    }
    if (nStairs == 0)
    {
        return 1;
    }
    return countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << countDistinctWays(n) << endl;
    return 0;
}