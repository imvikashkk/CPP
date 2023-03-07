/*
Linear Search is defined as a sequential search algorithm that starts at one end and
goes through each element of a list until the desired element is found, otherwise the 
search continues till the end of the data set. It is the easiest searching algorithm
*/

/*_________________________________________________________________________________________________*/

// #include <iostream>
// using namespace std;



/* ITERATIVE APPROACH */
// int linearSearch(int *arr, int &size, int &key){
//     for(int i=0; i<size; i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
//                               // Time complexity: O(size)  Auxiliary Space: O(1)
// }



/* RECURSIVE APPROACH */

// int linearSearch(int *arr, int size, int key){
//     if(size == -1){
//         return -1;
//     }
//     else if(arr[size]==key){
//         return size;
//     }
//     else{
//         return linearSearch(arr, size-1, key);         
//                                 // Time complexity: O(N)  Auxiliary Space: O(N)
//     }
// }




// int main(){
//     cout<<"Enter the array size : ";
//     int n;
//     cin>>n;
//     int *arr = new int[n];

//     cout<<"Enter the Elements of array : ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     cout<<"\n\t\t _________Linear_Search_________";
//     cout<<"\n\t\t                                ";
//     cout<<"\n\t\t_________________________________";
//     cout<<"\n\n\tEnter the Search_Element : ";
//     int key;
//     cin>>key;
//     int idx = linearSearch(arr, n, key);

//         // Ternary Conditional  
//         (idx == -1)
//         ? cout<<"\tElement is not present in array."
//         : cout<<"\tIndex Value of Searching_Element is : "<<idx<<endl<<endl;
     
// return 0;
// }



/*

Best Time Coplexity     :   Ω(1)
Average Time Complexity :   θ(N)
Worst Time Complexity   :   O(N)

Worst Space Complexity  :   O(1)

*/




/* STL Approach */
/*________________________________________________________________________________________*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int key;
    vector<int>arr;
    cout<<endl;
    cout<<"Enter the size of Array : ";
    int size;
    cin>>size;
    arr.resize(size);

    cout<<"Enter the Elements of array : ";
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    cout<<"\n\t\t _________Linear_Search_________";
    cout<<"\n\t\t                                ";
    cout<<"\n\t\t_________________________________";

    cout<<"\n\tEnter the Search_Element : ";
    cin>>key;

    vector<int>::iterator it;
    it = find(arr.begin(), arr.end(), key);      // Time complexity: O(size)  Auxiliary Space: O(N)

        // Ternary Conditional  
        (it!=arr.end())
        ? cout<<"\tIndex Value of Searching_Element is : "<<(it-arr.begin())<<endl<<endl  // true
        : cout<<"\tElement is not present in array."<<endl<<endl;                         // false
     
return 0;
}




