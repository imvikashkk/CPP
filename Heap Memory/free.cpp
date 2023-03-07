// free() is used to  free the allocated memory.
// This will free the memory being used by the program in the heap.

#include <iostream>
using namespace std;

int main(){
    cout<<"\n\n\t\t_____________________________________________";
    cout<<"\n\n\t\t|      free allocated Memory Allocation     |";
    cout<<"\n\n\t\t|___________________________________________|"<<endl<<endl;
    
    
    // Here we use malloc for memory allocation.
    int n;
    int *ptr;
    cout<<"Enter the size of array : ";
    cin>>n;
    ptr = (int*)malloc(n*sizeof(int));   // Dynamically allocated Array
    cout<<"Value of Allocated Memory is "<<(*ptr)<<" Garbage Value"<<endl;
    cout<<"Enter the element of array : ";
    for(int i=0; i<4; i++){
        cin>>ptr[i];
    }

    cout<<"Your Elements are : ";
    for(int i=0; i<n; i++){
        cout<<ptr[i]<<" ";
    }

    // free allocated memory
    free(ptr);

    return 0;
}