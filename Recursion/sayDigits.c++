#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sayDigits(int n, string arr[])
{
    if (n == 0)
    {
        return;
    }
    sayDigits(n / 10, arr);

    cout << arr[n % 10] << " ";
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three",
                      "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    sayDigits(n, arr);
    return 0;
}