#include <iostream>
using namespace std;
 
void merge(int *arr, int s, int e){
    int mid = (s+e)/2;

    int len1 = mid+1 - s;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    /* Copy Karna Hai Pahle Wale Array Me*/
    int MainArrIndex = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[MainArrIndex++];
    }

    /* Copy Karna Hai Pahle Wale Array Me */
    MainArrIndex =  mid+1;
    for(int i=0; i<len2; i++){
        second[i] = arr[MainArrIndex++];
    }


    /* Ab Merge 2 Sorted Array Wala Code */

    int index1 = 0;
    int index2 = 0;
    MainArrIndex = s; 
    
    while((index1 < len1) && (index2 < len2)){
        if(first[index1] < second[index2]){
            arr[MainArrIndex++] = first[index1++];
        }
        else{     
            arr[MainArrIndex++] = second[index2++];
        }
    }


    while(index1 < len1 ){
        arr[MainArrIndex++] = first[index1++];
    }

    while(index2 < len2){
        arr[MainArrIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int *arr, int s, int e){
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
} 

int main(){
 
    int arr[] = {6,4,7,3,8,1,5};
    int size =7;
    mergeSort(arr, 0, size-1);

   for(int i=0; i<size; i++   )
    cout<<arr[i]<<" ";
 
return 0;
}



/*
Stable Algorithm
*/


/*

    Best Time Coplexity     :   Ω(NlogN)
    Average Time Complexity :   θ(NlogN)
    Worst Time Complexity   :   O(NlogN)

    Worst Space Complexity  :   O(N)

*/