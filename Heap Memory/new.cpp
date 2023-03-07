#include <iostream>
using namespace std;
 
int main(){

     // int val = 80;
     // int *ptr;
     // ptr = &val;
     int *ptr = new int(80);  //  //Note There is a int(val) paranthesis for the value of *ptr
     cout<<"Value to the pointer as a address : "<<endl;
     cout<<*ptr<<endl<<endl;

     // Memory Allocation 
     int *arr = new int[2];
     arr[0] = 90;
     arr[1] = 100;
     cout<<"Memory Allocation : "<<endl;
     cout<<arr[0]<<" "<<arr[1];
 
return 0;
}