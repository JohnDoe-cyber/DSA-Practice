#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string countAndSay(int A){
    string result = "";
    
    if(!A)
        return result;
    
    string str = "1";
    int cnt = 1;
    
    for (int i = 1; i<A; ++i)
    {
        int len = str.length();
        for(int j = 0; j<len; ++j)
        {
            if (j+1 != len && str[j]==str[j+1])
            {
                ++cnt; 
            }
            else
            {
                result += to_string(cnt) + str[j];
                cnt = 1;
            }
        }
        cout << result << endl;
        str = result;
        result.clear();
    }
    return str;
}


int main(){
    cout << countAndSay(5);
    // cout << SayIt("1211")<<endl;
    return 0;
}