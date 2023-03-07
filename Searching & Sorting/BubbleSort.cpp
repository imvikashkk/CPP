/* Source : GeeksForGeeks

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements 
if they are in the wrong order. This algorithm is not suitable for large data sets as its average and 
worst-case time complexity is quite high.

*/


#include <iostream>
using namespace std;

// // ITERATIVE METHOD
// void bubbleSort(int *arr, int& size){
//     for(int i=0; i<size-1; i++){
//         for(int j=0; j<size-i-1; j++){
//             if(arr[j+1]<arr[j]){

//             swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }


// RECURSIVE METHOD

void bsSwap(int arr[], int times, int limit){   // Swapping
    if(times == limit){
        return;
    }
    else{
        if(arr[times]>arr[times+1]){
               swap(arr[times],arr[times+1]);
        }
        bsSwap(arr, times+1, limit);
    }
}

void bubbleSort(int arr[], int size){
    if(size == 0){
        return;
    }
    else{
          size = size-1; 
          bsSwap(arr,0,size+1);
          bubbleSort(arr, size);  
    }
}


 int main(){
    cout<<"Enter the array size : ";
    int n;
    cin>>n;
    int arr[100];

    cout<<"Enter the Elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"\n\t\t _________Bubble_Sort_________";
    cout<<"\n\t\t                                ";
    cout<<"\n\t\t_________________________________";


    // bubbleSort(arr, n);  // ITERATIVE METHOD
    bubbleSort(arr, n-1);    // RECURSIVE METHOD
    

    cout<<"\n\n\tYour Sorted Array is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl<<endl;
     
return 0;
}

/*

Adaptive Algorithm
In Place Algorithm
Stable Algorithm

*/

/*
Best Time Coplexity     :   Ω(N)
Average Time Complexity :   θ(N^2)
Worst Time Complexity   :   O(N^2)
Worst Space Complexity  :   O(1)
*/