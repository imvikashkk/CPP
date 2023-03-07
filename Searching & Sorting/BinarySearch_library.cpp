#include <iostream>
#include <cstdlib>        // C library stdlib.h
using namespace std;

int compare(const void * a, const void * b){ // Type unsafe

    if(*(int*)a<*(int*)b) return -1; // Cast needed
    if(*(int*)a==*(int*)b) return 0; // Cast needed
    if(*(int*)a>*(int*)b) return 1; // Cast needed

}


int main(){ 
    cout<<"Enter the Size of Array : ";
    int n;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the Elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the Searching Element : ";
    int key;
    cin>>key;


    (bsearch(&key, arr, 5, sizeof(int), compare))
    ? cout<<"Found!\n"
    : cout<<"Not Found\n";

}





// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main(){ 
//     cout<<"Enter the Size of Array : ";
//     int n;
//     cin>>n;
//     int *arr = new int[n];
//     cout<<"Enter the Elements of array : ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter the Searching Element : ";
//     int key;
//     cin>>key;

//     (binary_search(arr, arr+5, key) == true)
//     ? cout << "found!\n"
//     : cout << "not found\n";

// return 0;
// }
