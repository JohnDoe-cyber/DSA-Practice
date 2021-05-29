#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    
    map<int, string> ma;

    ma[0] = "Docker";
    ma[1] = "Kubernetes";

    for (int i=0; i< 3; i++){
        cout << ma[i] << endl;
    }

    return 0;
}
