// realloc() stands for reallocation.
// If the dynamically allocated memory is insufficient we can change the size of
    // previosly allocated memory using realloc() function

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    cout<<"\n\n\t\t___________________________________________________|";
    cout<<"\n\n\t\t| realloc Dynamic Memory Allocation using malloc   |";
    cout<<"\n\n\t\t|__________________________________________________|"<<endl<<endl;
    
    int n;
    int *ptr;
    cout<<"Enter the size of array : ";
    cin>>n;
    ptr = (int*)malloc(n*sizeof(int));   // Dynamically allocated Array
    cout<<"Value of Allocated Memory is "<<(*ptr)<<" Garbage Value in malloc allocation"<<endl;
    cout<<"Enter the element of array : ";
    for(int i=0; i<n; i++){
        cin>>ptr[i];
    }

    cout<<"Your Elements are : ";
    for(int i=0; i<n; i++){
        cout<<ptr[i]<<" ";
    }

    cout<<"\nArray elements ko badhate hai \n  Memory Reallocate karo aur jyada karo : "<<endl;
    cout<<"Enter the size of array : ";
    cin>>n;
    ptr = (int*)realloc(ptr, n*(sizeof(int)));
    cout<<"Enter the Elements : ";
    for(int i=0; i<n; i++){
        cin>>ptr[i];
    }

    cout<<"Now Your Elements are : ";
    for(int i=0; i<n; i++){
        cout<<ptr[i]<<" ";
    }

return 0;
}