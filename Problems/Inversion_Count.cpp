#include <iostream>
using namespace std;

/*__________________________________________________________________________________________________________*/

// Time Complexity O(N^2)  //  Space Complexity O(1)

int Inversion_Count_Chhote(int *arr, int size){
    int count = 0;
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]>arr[j]){
                count ++ ;
            }
        }
    }
    return count;
}


/*___________________________________________________________________________________________________________*/

// Time Complexity 0(NlogN) // Space Complexity O(N)

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




/*__________________________________________________________________________________________________________*/



int main(){
    
    cout<<"Enter The Size Of Array : "; 
    int n ;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter The Elements Of Array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Your Inversion Count Is : ";
    // Chhoti Size Ke Liye  // Time Complexity : O(n^2)
    if(n<20)
         cout<<Inversion_Count_Chhote(arr,6);
    // Badi Size Ke Liye // Use Merge Sort // Time Complexity O(NlogN)
    else
         cout<<Inversion_Count_Bade(arr,0, n-1);
 
return 0;
}