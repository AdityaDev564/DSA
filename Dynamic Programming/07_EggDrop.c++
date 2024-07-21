#include <bits/stdc++.h>
using namespace std;
#define ll long long

// int eggDrop(int n, int k)
// {
//     // your code here
//     if (k == 1 || k == 0)
//         return k;

//     int min = INT_MAX, x, res;

//     for (x = 1; x = k; x++)
//     {
//         res = max(eggDrop(n - 1, x - 1), eggDrop(n, k - x));
//         if (res < min)
//             min = res;
//     }

//     return min + 1;
// }

int eggDrop(int n, int k)
{
    // your code here
    int eggFloor[n + 1][k + 1];
    int res;
    int i, j, x;

    // We need one trial for one floor and 0 trials for 0 floor
    for (i = 1; i <= n; i++)
    {
        eggFloor[i][0] = 0;
        eggFloor[i][1] = 1;
    }
    // We always need j trials for one egg and j floors
    for (j = 1; j <= k; j++)
        eggFloor[1][j] = j;

    for (i = 2; i <= n; i++)
    {
        for (j = 2; j <= k; j++)
        {
            eggFloor[i][j] = INT_MAX;
            for (x = 1; x <= j; x++)
            {
                res = 1 + max(eggFloor[i - 1][x - 1],
                              eggFloor[i][j - x]);
                if (res < eggFloor[i][j])
                    eggFloor[i][j] = res;
            }
        }
    }
    return eggFloor[n][k];
}

int main()
{

    return 0;
}