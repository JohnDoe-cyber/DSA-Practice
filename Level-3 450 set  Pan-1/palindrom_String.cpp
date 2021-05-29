#include <iostream>
#include <bits/stdc++.h>
using namespace std;




int isPlaindrome(string S)
{
    // Your code goes here
    int shrugger = ceil(S.length() / 2);
    int yes_or_no = 1;
    for (int i = 0; i < shrugger; i++)
    {
        if (S[i] == S[S.length() - i-1])
        {
            yes_or_no *= 1;
        }
        else
        {
            yes_or_no *= 0;
        }
    };

    // const string Zero = "S is not a palindrome";
    // const string One = "S is a palindrome";

    if (yes_or_no == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
};


int main(){
    cout<<isPlaindrome("abba");
    return 0;
}