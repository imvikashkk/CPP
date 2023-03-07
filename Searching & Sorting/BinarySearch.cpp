/*
 Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the
 search interval in half. The idea of binary search is to use the information that the array
 is sorted and reduce the time complexity to O(Log n). 
*/


/*
    Binary Search Algorithm: The basic steps to perform Binary Search are:

    Sort the array in ascending order.
    Set the low index to the first element of the array and the high index to the last element.
    Set the middle index to the average of the low and high indices.
    If the element at the middle index is the target element, return the middle index.
    If the target element is less than the element at the middle index, set the high index to
        the middle index – 1.
    If the target element is greater than the element at the middle index, set the low index
        to the middle index + 1.
    Repeat steps 3-6 until the element is found or it is clear that the element is not present 
        in the array.

*/


/*

int start = 0;
int end = size-1;

int mid = (start+end)/2;          // Bad Practice int ke range se bahar ho jayega 2^31-1 se
int mid = start + (end-start)/2;  // Best Approach
unsigned long long int  mid = (start+end)/2;  // good but not efficient due to need more memory than int

*/


// #include <iostream>
// #include <climits>
// using namespace std;

// // ITERATIVE APPROACH
// int binarySearch(int *arr, int &size, int &key){
//     int start = 0;
//     int end = size-1;
    
//     while(start<=end){
//         int mid = (start + end)/2;
//         if(arr[mid] == key){
//             return mid;
//         }
//         else if(arr[mid]> key){
//             end = mid-1;   // goto left wala part
//         }
//         else{ //arr[mid]< key
//             start = mid + 1;  // goto right wala part
//         }
//     }

//     return -1;
// }


// // RECURSIVE APPROACH
// int binarySearch(int *arr, int start, int end, int key){
//     unsigned long long int  mid = (start+end)/2;

//     if(start>end){
//         return -1;
//     }
//     else if(arr[mid]==key){
//         return mid;
//     }
//     else if(arr[mid]> key){
//         return binarySearch(arr, start, mid-1, key);
//     }
//     else { /* arr[mid]< key */
//         return binarySearch(arr, mid+1, end, key);
//     }
// }


// int main(){
//     cout<<"Enter the array size : ";
//     int n;
//     cin>>n;
//     int *arr = new int[n];

//     cout<<"Enter the Elements of array in ascending order : ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     cout<<"\n\t\t _________Binary_Search_________";
//     cout<<"\n\t\t                                ";
//     cout<<"\n\t\t_________________________________";
//     cout<<"\n\n\tEnter the Search_Element : ";
//     int key;
//     cin>>key;

//     // int idx = binarySearch(arr, n-1, key); // Iterative Approach

//     int idx = binarySearch(arr,0,n,key); // Recursive Approach

//         // Ternary Conditional  
//         (idx == -1)
//         ? cout<<"\tElement is not present in array \n\tor Array is not in ascending order."<<endl<<endl
//         : cout<<"\tIndex Value of Searching_Element is : "<<idx<<endl<<endl;

        
// return 0;
// }


// STL

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// // binary_search

int main(){
    cout<<"Enter the array size : ";
    vector<int> arr;
    int n;
    cin>>n;
    arr.resize(n);

    cout<<"Enter the Elements of array in ascending order : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"\n\t\t _________Binary_Search_________";
    cout<<"\n\t\t                                ";
    cout<<"\n\t\t_________________________________";
    cout<<"\n\n\tEnter the Search_Element : ";
    int key;
    cin>>key;


    bool idx = binary_search(arr.begin(), arr.end(), key);  // return true if found otherwise return false

          
        if(idx == true){

            // Using Lower Bound
            int idx = ( lower_bound(arr.begin(), arr.end(), key) - arr.begin()); // return index of key or lower element 


            // // Using Upper Bound
            // int idx = ( upper_bound(arr.begin(), arr.end(), key) - arr.begin()) - 1; // return index+1 of key or upper element


            cout<<"\tElement Present in array Index Value is : "<<idx<<endl<<endl;


        }
        else{
            cout<<"\tElement is not present in array \n\tor Array is not in ascending order."<<endl<<endl;
        }

return 0;
}



/*

Best Time Coplexity     :   Ω(1)
Average Time Complexity :   θ(logN)
Worst Time Complexity   :   O(logN)

Worst Space Complexity  :   O(1)

*/