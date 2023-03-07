#include <iostream>
#include "mylib.cpp"
using namespace std;
 
int getSum(int arr[], int size){

    /* Base Case */
    // if(size==0){
    //     return 0;
    // }

    if(size == 1){
        return arr[0];
    }

    /* Recursive Relation */
    int val = getSum(arr+1, size-1);
    int add = arr[0] + val;
    cout<<add<<" ";
    
    return add;

}

int main(){
    
    cout<<"Enter the Size : ";
    int n;
    cin>>n;
    cout<<"Enter the numbers : ";
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Sum is "<<getSum(arr, n);

return 0;
}