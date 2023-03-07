// Copy block of memory (function) 

#include <iostream>
#include <cstring>
using namespace std;

// int main(){
//     char arr[] = "Vikash";
//     char arr1[] = "Kumar Khunte";

//     puts("Before memcpy() arr[] is : ");
//     puts(arr);

    
//     // Copies contents of arr1 to arr
//     memcpy(arr, arr1, sizeof(arr1));

//     puts("After memcpy() arr[] is : ");
//     puts(arr);

    


// return 0;
// }

// memcpy() simply copies data one by one from one location to another.
// memcpy() doesn’t check for overflow or \0 
// memcpy() leads to problems when source and destination addresses overlap.
// Memory Size Doesn't Change.


// Sample program to show that memcpy() can lose data.

int main(){

    char csrc[100] = "Geeksfor";
    memcpy(csrc + 5, csrc, strlen(csrc) + 1);
    //    "Geeks", "Geeksfor", "8+1"

    cout<<csrc;    // GeeksGeeksfor

    
    return 0;

return 0;
}

