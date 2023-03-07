/* Source : GeeksForGeeks
Insertion sort is a simple sorting algorithm that works similar to the way you sort
playing cards in your hands. The array is virtually split into a sorted and an unsorted part.
Values from the unsorted part are picked and placed at the correct position in the sorted part.
*/

#include <iostream>
using namespace std;

// /* ITERATIVE METHOD */
// int insertionSort(int *arr , int size){
    
//     for(int i=1; i<size; i++){
//         int j = i-1;
//         int key = arr[i];

//         while (j >= 0 && arr[j] > key){
//                    arr[j + 1] = arr[j];
//                     j = j - 1;
//         }
//         arr[j + 1] = key;
//     }

// }



/* RECURSIVE METHOD */

int ISsplit(int arr[], int j, int key){

    if(j>=0 && arr[j] > key){
        arr[j+1] = arr[j];
        j--;
        ISsplit(arr, j, key);
    }
    else{
        return j;
    }
}

void recurInsertionSort(int arr[], int n){
	if (n <= 0){
		return;
    }

	recurInsertionSort( arr, n-1 );

	int key = arr[n];
	int j = n-1;

    int k =  ISsplit(arr, j, key);
    j = k;

	arr[j+1] = key;
}



int main(){


	cout<<"\n\n\nEnter the array size : ";
    int n;
    cin>>n;
    int arr[100];

    cout<<"Enter the Elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"\n\t\t   __________Insertion_Sort___________";
    cout<<"\n\t\t                                  ";
    cout<<"\n\t\t__________________________________________";

	// insertionSort(arr, n);  // INTERATIVE METHOD

    recurInsertionSort(arr,n-1); // RECURSIVE METHOD

    cout<<"\n\n\tYour Sorted Array is : ";

	for(int i = 0; i<n ; i++){
		cout<< arr[i] << " ";
    }cout<<endl<<endl<<endl<<endl;
	


return 0;

}

/*
Adaptive Algorithm  :
In Place Algorithm  :
Stable Algorithm    : 


*/

/*

Best Time Coplexity     :   Ω(N)
Average Time Complexity :   θ(N^2)
Worst Time Complexity   :   O(N^2)

Worst Space Complexity  :   O(1)

*/
