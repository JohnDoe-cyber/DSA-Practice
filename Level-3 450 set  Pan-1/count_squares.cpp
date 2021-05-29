#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// int countSquares(int N) {
//     // code here
//     int numberman = 0;
//     for (int i=1; i<N; i++){
//         // if (typeid(sqrt(i)).name() == typeid(int).name()){
//         //     numberman = i;
//         // }
//         if (floor(sqrt(i)) == sqrt(i)){
//             numberman = sqrt(i);
//         }
//         else{
//             //pass;
//         }
//     }
//     return numberman;
// }


int countSquares(int N) {
    int numberman = 0;

    int i;
    // while(i<N){
    // for (int i=1; i<sqrt(N); i++){

    //     i



    //     // if (floor(sqrt(i)) == sqrt(i)){
    //     //     numberman = sqrt(i);
    //     // }
    //     // else{
    //     //     //pass;
    //     // }
    //     // i = s
    // }

    numberman = ceil(sqrt(N)) - 1;


    return numberman;
}



int main(){

    cout<<countSquares(9)<<endl;
    cout<<countSquares(1)<<endl;
    cout<<countSquares(0)<<endl;


    // cout<<typeid(sqrt(16)).name();
    // cout<<typeid(int).name();

    
    return 0;
}