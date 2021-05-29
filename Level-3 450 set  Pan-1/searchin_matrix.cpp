#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int l, int r, int x){
    // for (int i=0; i<arr.size()-1; i++){
    //     cout << arr[i]<<endl;
    // }

    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}


bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row_number = -1;
    int return_value = -1;

    cout<<matrix.size()<<endl;
    cout<<matrix[0].size()<<endl;


    if (target > matrix[matrix.size()-1][matrix[0].size()-1] || matrix.size()<1){
        row_number = -1;
    }else if (matrix.size()==1){
        row_number = 0;
        return_value = binarySearch(matrix[row_number], 0, matrix[row_number].size(), target);
    }
    else{
        // Select the row number to serach further
        for (int i=0; i<matrix.size(); i++){
            if (target <= matrix[i+1][matrix[0].size()-1] && target > matrix[i][matrix[0].size()-1]){
                row_number = i+1;
                // cout<< "Hey" << matrix[i+1][matrix.size()] << endl;
                break;
            }
            else if (target <= matrix[i][matrix[0].size()-1]){
                // cout<< "Hey";
                // cout<< "Hey" << matrix[i+1][matrix.size()] << endl;
                row_number = i;
                break;
            }
            else{
                // cout<< "Hey";
                // cout<< "matrix size" << matrix[i][matrix.size()] <<matrix.size()<< endl;


                //pass
                // row_number = -1;
                // return -1;
            }
        }
    }
    // cout <<"row_number"<< row_number <<endl;
    // cout <<"row_number" << matrix[0][matrix.size()-1]<<endl;
    // cout <<"row_number" << row_number<<endl;

    // for (int i=0; i<matrix[0].size()-1; i++){

    // }

    if (row_number != -1){
        // cout << "Binary" << binarySearch(matrix[row_number], 0, matrix[row_number].size(), target)<<endl;
        return_value = binarySearch(matrix[row_number], 0, matrix[row_number].size(), target);
    }

    if (return_value !=-1){
        return true;
    }else{
        return false;
    }

}


int main(){
    int target = 1;
    // vector<vector<int>> mat = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    vector<vector<int>> mat = {{1}};

    cout << searchMatrix(mat, target);
    return 0;
}