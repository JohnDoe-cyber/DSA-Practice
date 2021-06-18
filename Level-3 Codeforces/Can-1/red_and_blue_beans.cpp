#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int CheckValid(int x[]){
    int possible = 1;
    int min_among = std::min(x[0], x[1]);

    int main_array[min_among][2];
    for (int i; i<min_among; i++){
        main_array.push_back([1, 1]);
    }

    int difference_between = std::abs(x[0]- x[1]);
    while (difference_between>0){
        for (int j; j<min_among; j++){
            if (std::abs(main_array[j][0] - main_array[j][1] < x[2])){
                main_array[j][1] += 1;
                difference_between -= 1;
            }
            else{
                possible = 0;
                difference_between = 0;
                break;
            }
        }
    }
    return possible;
    
}

int main(){
    int n;
    cin>> n;
    for (int i; i<n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        int somearray[] = {a, b, c};
        CheckValid(somearray);        
    }

}