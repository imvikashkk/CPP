#include <iostream>
using namespace std;





// // Write a program to ckeck if a given number is power of 2 or not ::::::

// int main(){
//     int n;
//     cout<<"Enter the Number : ";
//     cin>>n;
//     if((n & (n-1)) == 0){
//         cout<<"Given Number is power of 2 ";
//     }
//     else{
//         cout<<"Given Number is not power of 2 ";
//     }
    
//     return 0;
// }







// // Write a program to count the number of ones in binary representation of a number  ::::::

// int main(){
//     int n;
//     int count = 0;
//     cout<<"Enter Any Number : ";
//     cin>>n;

//     while(n != 0){
//         n = (n&(n-1));
//         count++;
//     }
    
//     cout<<"Numbers of one is : "<<count<<endl<<endl;

//     main();


//     return 0;

// }









// // Write a program to geerate all possible subsets of a set :::::

// int subsets(int arr[], int n){
//         for(int i=0; i<(1<<n); i++){  // 1<<n is 2 to the power n
//         for(int j=0; j<n; j++){
//             if(i&(1<<j)){   // Using Get Bit
//                 cout<<arr[j]<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int arr[122];
//     int n;
//     cout<<"Enter the size of set array : ";
//     cin>>n;
//     cout<<"Enter the elements of array : ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     cout<<"Subsets Are : ";
//     subsets(arr,n);
   
//     return 0;
// }









// // Write a program to find a unique number in array
//    // where all numbers except one are present twice

// int unique(int arr[], int n){
//     int xorsum = 0;
//     for(int i=0; i<n; i++){
//         xorsum = xorsum^arr[i];
//     }
//     return xorsum;
// }

// int main(){
//     int n;
//     int arr[100];
//     cout<<"Enter the Size of set/array : ";
//     cin>>n;
//     cout<<"Enter the Elements of array/Set : ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<"Unique Number is : "<<unique(arr,n);

//     return 0;
// }









// // Write a program to find two unique number in an array
//     // where all numbers except two are present twice

// int SetBit(int n, int pos){
//     return ((n & (1<<pos)) != 0);
// }

// int unique(int arr[], int n){
//     int xorsum = 0;
//     for(int i=0; i<n; i++){
//         xorsum = xorsum ^ arr[i];
//     }
//     int tempxor = xorsum;
    
//     // To find the position of right most one bit of xorsum 
//     int setbit = 0;
//     int pos = 0;
//     while(setbit != 1){
//         setbit = xorsum & 1;
//         pos++;
//         xorsum = xorsum >> 1;
//     }
  
   
//     // To find first unique Number ::::
//     int newxor = 0;
//     for(int i=0; i<n; i++){
//         if( SetBit(arr[i], pos-1) ){
//                 newxor = newxor ^ arr[i];
//         }
//     }
//     int new2xor = tempxor^newxor;
//     cout<<"First Unique Number is : "<<newxor<<endl;
//     cout<<"Second Unique Number is : "<<new2xor<<endl;

// } 

// int main(){
//     int n;
//     int arr[100];
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     cout<<"Enter the elements of array : ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     unique(arr,n);

//     return 0;
// }








// // Write a program to find a unique number in an array where 
//     // all numbers except one , are present thrice.

// bool getbit(int n, int pos){
//     return (n & (1<<pos)) != 0;
// }

// int setBit(int n, int pos){
//      return (n|(1<<pos));
// }

// int unique(int arr[], int n){
//     int result = 0;
//     for(int i=0; i<64; i++){
//         int sum =0;
//         for(int j=0; j<n; j++){
//             if(getbit(arr[j],i)){
//                 sum++;
//             }
//         }
//         if(sum%3 != 0){
//             result = setBit(result, i);
//         }
//     }
//     return result;
// }

// int main(){
//     int n;
//     int arr[100];
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     cout<<"Enter the elements of array : ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     cout<<"Unique Number is : "<<unique(arr,n);

//     return 0;
// }