/*
Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the
smallest (or largest) element from the unsorted portion of the list and moving it to the sorted
portion of the list. The algorithm repeatedly selects the smallest (or largest) element from the 
unsorted portion of the list and swaps it with the first element of the unsorted portion. 
This process is repeated for the remaining unsorted portion of the list until the entire list 
is sorted. One variation of selection sort is called “Bidirectional selection sort” that goes 
through the list of elements by alternating between the smallest and largest element, this way 
the algorithm can be faster in some cases.

The algorithm maintains two subarrays in a given array.
    -> The subarray which already sorted. 
    -> The remaining subarray was unsorted.
*/

#include <iostream>
using namespace std;

// // ITERATIVE METHOD
// int selectionSort(int *arr, int& size){

//     for(int j=0; j<size-1; j++){     // Sorted Subarray

//         int min_idx = j;
//         for(int i=j+1; i<size; i++){   // Finding the index of minimum element // Unsorted Subarray
//             if(arr[i]<arr[min_idx]){
//                  min_idx = i;
//             }
//         }
//         if(min_idx != j){                 // Swaping
//             swap(arr[j], arr[min_idx]);
//         }

//     }

// }

// RECURSIVE METHOD

int minIndex(int a[], int idx, int sz)
{
	if (idx == sz)
		return idx;

	int k = minIndex(a, idx + 1, sz);

	int minidx = (a[idx] < a[k])? idx : k;
    return minidx;
}


void recurSelectionSort(int a[], int size, int index = 0)
{
	if (index == size){
	     return;
    }
	int idx = minIndex(a, index, size-1);

	if (idx != index){
	    swap(a[idx], a[index]);
    }
	recurSelectionSort(a, size, index + 1);
}



int main(){
    cout<<"Enter the array size : ";
    int n;
    cin>>n;
    int arr[100];

    cout<<"Enter the Elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"\n\t\t   __________Selection_Sort___________";
    cout<<"\n\t\t                                  ";
    cout<<"\n\t\t__________________________________________";


    // selectionSort(arr, n);  // ITERATIVE
    recurSelectionSort(arr, n); // RECURSIVE METHOD
    
    cout<<"\n\n\tYour Sorted Array is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl<<endl;
     
return 0;
}




/*
Best Time Coplexity     :   Ω(N^2)
Average Time Complexity :   θ(N^2)
Worst Time Complexity   :   O(N^2)
Worst Space Complexity  :   O(1)
*/