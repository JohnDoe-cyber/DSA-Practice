#include <iostream>
#include <bits/stdc++.h>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    //  It internally keeps the sorting
    // insert operation is just in log(n) time
    set <int> s;
    s.insert(1);
    s.insert(-11);
    s.insert(-231);
    s.insert(340);
    s.erase(1);
    s.insert(100);

    for (int x:s){
        cout << x << " ";
    }
    cout <<endl;
    // auto it = s.find(-1);
    auto it = s.find(-11);
    if (it == s.end()){
        cout << "Not present";
    }else{
        cout << *it << " present in the set";
    }
    cout << endl;


    cout << endl;
    cout << endl;
    cout << endl;






    /// Map
    // Building the map takes O(n) time 
    map <char, int> count;
    string x = "d-gopal Krishna has a blog at github io.";
    for (char i: x){
        count[i]++;
    }
    for(char i: x){
        cout << i << " " << count[i] << endl;
    }


    set <pair <int, int> > Stl;

    Stl.insert({1,2});
    Stl.insert({3,20});
    Stl.insert({21,29});

    int point = 1;
    auto it = Stl.upper_bound({point});
    if (it == S.begin()){
        cout << "NOt in the interval";
        return;
    }
    it-- ;

    pair <int, int> current = *it;
    if (current.first <=point && point<=current.second ){
        cout << "yes in here!";
    }else{
        cout << "not present \n";


    


    return 0;
}