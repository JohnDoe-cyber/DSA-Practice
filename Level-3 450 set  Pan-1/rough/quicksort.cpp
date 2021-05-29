#include <iostream>
#include <bits/stdc++.h>
using namespace std;



// /// First Sorting the Array
// int partition(vector<int> arr, int low, int high){
//     int pivot = arr[high];
//     int i = low - 1;
//     for (int j=low; j<=high-1; j++){
//         if (arr[j]<pivot){
//             i++;
//             arr[i], arr[j] = arr[j], arr[i];
//         }
//     }
// }

// int quickSort(vector<int> arr, int start, int end){
//     if ()
// }


// int main(){
//     vector<int> arr = {10, 7, 8, 9, 1, 5};
//     quickSort(arr, 0, arr.size()-1);
//     return 0;
// }


// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* Function to print an array */
void printArray(vector<int> arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
 
/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition (vector<int> &arr, int low, int high)
{
    int n = 8;

    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
 
    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            cout << "inside i "<<i;
            swap(&arr[i], &arr[j]);
            cout << "inside ";
            printArray(arr, n);

        }
    }
    swap(&arr[i + 1], &arr[high]);
    printArray(arr, n);

    return (i + 1);
}
 
/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        cout<<"first half ";
        quickSort(arr, low, pi - 1);
        cout<<"second half";
        quickSort(arr, pi + 1, high);
    }
}
 

// Driver Code
int main()
{
    vector<int> arr = {10, 7, 8, 9, 19, 3, 5, 21};
    printArray(arr, arr.size());
    quickSort(arr, 0, arr.size() - 1);
    cout << "Sorted array: \n";
    printArray(arr, arr.size());
    return 0;
}