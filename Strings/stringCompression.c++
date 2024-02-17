/*
Leetcode 443. String Compression
Given an array of characters chars, compress it using the following algorithm:
The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

After you are done modifying the input array, return the new length of the array.

You must write an algorithm that uses only constant extra space.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int compress(vector<char> &chars)
{
    int i = 0, ansIndex = 0;
    int n = chars.size();

    while (i < n)
    {
        int j = i + 1;
        while (j < n && chars[i] == chars[j])
        {
            j++;
        }

        chars[ansIndex++] = chars[i];
        int count = j - i;

        if (count > 1)
        {
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main()
{

    return 0;
}