/* Source : GeeksForGeeks

Like Merge Sort, QuickSort is a Divide and Conquer algorithm. It picks an element as a pivot and partitions the given array around the 
picked pivot. There are many different versions of quickSort that pick pivot in different ways. 

    Always pick the first element as a pivot. (implemented Code Below)
    Always pick the last element as a pivot. (implemented QuickSort.png)
    Pick a random element as a pivot.
    Pick median as the pivot.

The key process in quickSort is a partition(). The target of partitions is, given an array and an element x of an array as the pivot,
put x at its correct position in a sorted array and put all smaller elements (smaller than x) before x, and put all greater elements 
(greater than x) after x. All this should be done in linear time.

*/

#include <iostream>
using namespace std;
   


   /* Partition Ke Liye */
   /* Ek Piviot Lena Hai */ // Yaha Pahle Index Ko Piviot Liya Gaya Hai
   /* count all  elements which are less than piviot */
   /* Piviot Ko swap Kardo (start+count) index wale element ke sath */
   /* Ab agar pahle > last element hai to swap kar do , pahle++, last-- */


int partition(int*arr, int s, int e){
    int piviot = arr[s];
    int count = 0;

    for(int i=s+1; i<=e; i++){
        if(arr[i] < piviot){
            count++;
        }
    }

    int piviotIndex = s + count;
    swap(arr[piviotIndex],arr[s]);

    int start = s;
    int end = e;

    while(start < piviotIndex && end > piviotIndex){

        while(arr[start] <= piviot){
            start++;
        }
        while(arr[end] > piviot){
            end--;
        }

        if(start < piviotIndex && end > piviotIndex){
            swap(arr[start], arr[end]);
        }

    }

    return piviotIndex;
}

void quicksort(int* arr, int s, int e){
    if(s>=e){
        return ;
    }
    int p = partition(arr, s, e);
    quicksort(arr, s, p-1);
    quicksort(arr, p+1, e);
} 


void print(int* arr, int sz){
    if(sz==-1)
        return;
    print(arr, sz-1);
    cout<<arr[sz]<<" ";
}


int main(){
 
    cout<<"enter the size of array : ";
    int n;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    quicksort(arr, 0, n-1);

    cout<<"Your sorted Array is : ";
    print(arr,n-1);
 
return 0;
}


/*

Adaptive Algorithm
In Place Algorithm

*/


/*

Best Time Coplexity     :   Ω(NlogN)
Average Time Complexity :   θ(NlogN)
Worst Time Complexity   :   O(N^2)

Worst Space Complexity  :   O(N)

*/