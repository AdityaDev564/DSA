#include <bits/stdc++.h>
using namespace std;
#define ll long long

void tohcal(int n, int src, int help, int dest)
{
    if (n == 1)
    {
        cout << "move disk " << n << " from rod " << src << " to rod " << dest << endl;
        return;
    }
    tohcal(n - 1, src, dest, help);
    cout << "move disk " << n << " from rod " << src << " to rod " << dest << endl;
    tohcal(n - 1, help, src, dest);
}
long long toh(int N, int from, int to, int aux)
{
    // Your code here

    tohcal(N, from, aux, to);
    return pow(2, N) - 1;
}

int main()
{

    return 0;
}