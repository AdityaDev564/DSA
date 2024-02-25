/*
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.



Example 1:

Input: s = "is2 sentence4 This1 a3"
Output: "This is a sentence"
Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

string sortSentence(string s)
{
    map<int, string> mp;
    string word = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            word += s[i];
        }
        else if (isdigit(s[i]))
        {
            int position = s[i] - '0'; // Convert character to integer
            mp[position] = word;
            word = "";
        }
    }

    vector<string> sentence;
    for (auto it : mp)
    {
        sentence.push_back(it.second);
    }

    string ans = "";
    for (int i = 0; i < sentence.size(); i++)
    {
        ans += sentence[i];
        if (i != sentence.size() - 1)
        {
            ans += " ";
        }
    }

    return ans;
}

int main()
{

    return 0;
}