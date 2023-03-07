#include<iostream>
using namespace std;


long long int merge(int *arr, int s, int e) {
    long long int Inv = 0;

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] <= second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{ // first[index1] > second[index2];
            arr[mainArrayIndex] = second[index2];
            Inv = Inv + len1 - index1;
            mainArrayIndex++; index2++;

        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
        
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

    return Inv;

}

long long int Inversion_Count_Bade(int *arr, int s, int e) {
    long long int Inv = 0;

    //base case
    if(s >= e) {
        return 0;
    }
    
    int mid = (s+e)/2;

    //left part sort karna h 
    Inv += Inversion_Count_Bade(arr, s, mid);
    
    //right part sort karna h 
    Inv += Inversion_Count_Bade(arr, mid+1, e);

    //merge
    Inv += merge(arr, s, e);

    return Inv;

}

int main() {

    // int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    // int n = 15;

    int arr[4] = {8,4,2,1};

    cout<<Inversion_Count_Bade(arr, 0, 3);



    // for(int i=0;i<n;i++){
    //     cout << arr[i] << " ";
    // } cout << endl;

    return 0;
}