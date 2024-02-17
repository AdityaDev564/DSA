#include <bits/stdc++.h>
using namespace std;

// string replaceSpaces(string &str)
// {
//     string temp = "";
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == ' ')
//         {
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else
//         {
//             temp.push_back(str[i]);
//         }
//     }
//     return temp;
// }

// string replaceSpaces(string &str){
//     string temp = "";
//     for(int i = 0; i < str.length(); i++){
//         if(str[i] == ' '){
//             temp += "@40";
//         }
//         else{
//             temp += str[i];
//         }
//     }
//     return temp;
// }

string replaceSpaces(string &str)
{
    string ch = "@40";

    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] == ' ')
        {
            str.replace(i, 1, ch);
        }
    }
    return str;
}

int main()
{
    string str = "Coding Ninjas";
    cout << replaceSpaces(str);
    return 0;
}