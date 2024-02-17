#include <bits/stdc++.h>
using namespace std;
#define ll long long

void reachHome(int src, int des)
{
    // Base Case
    if (src == des)
    {
        cout << "reached destination at step " << src << endl;
        return;
    }

    // Processing
    src++;

    // Recursive call
    reachHome(src, des);
}

int main()
{
    int src = 1;
    int des = 10;
    reachHome(src, des);
    return 0;
}