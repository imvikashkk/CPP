// calloc() stands for contiguous allocation.  
// It reserve a block of memory with the given amount of bytes.
// The return value is a void pointer to allocated space.
// Therefore the void pointer needs to be casted to the appropriate type as per the requirment.
// However, if the space is insufficient , allocation of memory fails and it returns a NULL pointer.
// All the values at allocatec memory are initialized to 0.


#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    cout<<"\n\n\t\t___________________________________________";
    cout<<"\n\n\t\t      calloc Dynamic Memory Allocation     ";
    cout<<"\n\n\t\t___________________________________________"<<endl<<endl;

    int n;
    int *ptr;
    cout<<"Enter the size of array : ";
    cin>>n;
    ptr = (int*)calloc(n, sizeof(int));   // Dynamically allocated Array
    cout<<"Value of Allocated Memory is "<<(*ptr)<<"in calloc allocation"<<endl;
    cout<<"Enter the element of array : ";
    for(int i=0; i<4; i++){
        cin>>ptr[i];
    }

    cout<<"Your Elements are : ";
    for(int i=0; i<n; i++){
        cout<<ptr[i]<<" ";
    }

return 0;
}