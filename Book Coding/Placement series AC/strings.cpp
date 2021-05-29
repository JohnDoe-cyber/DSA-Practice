#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;



int main(){

    string str;

    str = "ABC";
    cout << str << endl;

    cout << endl;

    // string str2(5, 'Barack');              // error
    string str2(5, 'B');
    cout << str2 << endl;

    cout << endl;


    // string str3;
    // getline(cin, str3);      /// Can take the whole sentence while the cin takes only first word of the sentence
    // // cin>>str3;
    // cout << str3 <<endl;

    cout << endl;


    string a = "abc";
    string b = "def";
    // string b = 'def';          // Notice cannot asssign in single quotes
    string d = "abc";

    if (a.compare(b)){    //  !a.compare(b)
        cout << "A and B are not equal"<< endl;
    }
    if (a.compare(d)){    // here one/1 means comparision is true ..... can also do !a.compare(b)
        cout << "A and D are not equal"<< endl;
    }

    cout << a.empty()<<endl;

    a.append(b);
    cout << a << endl;
    cout << a+b << endl;

    cout << a[0]<<endl;
    a.clear();
    cout <<"after clearing"<< a << endl;


    cout << endl;


    string sp = "doughbag";

    cout << "found bag at " << sp.find("bag")<< endl ;
    sp.erase(3,2);       // (index, number of alphabets to delete)
    cout << "found bag at " << sp.find("bag")<< endl ;

    sp.insert(2, "dag");
    sp.size();
    cout << sp.substr(1, 4) <<endl;

    string sp2 = "12523";
    int x = stoi(sp2);
    cout << x <<endl;
    string pp = to_string(x);

    sort(sp2.begin(),sp2.end());    // from the alorithm module header 
    cout << sp2;


    return 0;
}