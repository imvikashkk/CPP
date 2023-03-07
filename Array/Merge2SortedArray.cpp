#include <iostream>
using namespace std;
 

void merge(int arr1[], int s1, int arr2[], int s2, int arr3[]){
    int sz1 =0;
    int sz2 =0;
    int sz3 =0; 
    
    while((s1>=sz1) && (s2>=sz1)){
        if(arr1[sz1] < arr2[sz2]){
            arr3[sz3++] = arr1[sz1++];
        }
        else{           // arr1[sz1] >= arr2[sz2]
            arr3[sz3++] = arr2[sz2++];
        }
    }


    while(s1>sz1){
        arr3[sz3++] = arr1[sz1++];
    }

    while(s2>sz2){
        arr3[sz3++] = arr2[sz2++];
    }
}


int main(){
    
    int s1 = 5;
    int s2 = 3;
    int arr1[s1] = {10,30,50,70,90};
    int arr2[s2] = {20,40,60};
    int arr3[9];

    merge(arr1, s1, arr2, s2, arr3);

    for(int i=0; i<8; i++){
        cout<<arr3[i]<<" ";
    }
 
return 0;
}