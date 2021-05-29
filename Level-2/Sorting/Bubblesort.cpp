#include <iostream>
#include <vector>
using namespace std;


int bubblesort(int arr[], int &size){

    for(int i; i < size-1; i++){
        for(int i; i < size-1; i++){
            if (arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1] ;
                arr[i] = temp;
            }
        }
    }
    return;
}


int main(){
    int rrr[] = {9,8,7,6,5,4,3};
    int size = sizeof(rrr)/sizeof(rrr[0]);
    bubblesort(rrr, size);

    for (int i; i < rrr.size(); i++){
        cout << rrr[i] << endl;
    }
    return 0;
}