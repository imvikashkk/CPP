#include <iostream>
#include <cstdlib>
using namespace std;


int compare(const void *a, const void *b){                          /* Type unsafe */
                                  
    // return (*(int*)a < *(int*)b);         // Descendind Oerder    /* Cast needed */
    return (*(int*)a > *(int*)b);         // Ascendind Oerder    /* Cast needed */

}


int main () { 
    int arr[] = {45, 65, 14, 4, 62, 4};
    int size = sizeof(arr)/sizeof(arr[0]);

    //  Start ptr, #elements, Memorysize, func ptr
    qsort(arr, size, sizeof(int), compare);

    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
}

/*
 -> sizeof(int) and compare function passed to qsort
 -> compare function is type unsafe & needs complicated cast
*/