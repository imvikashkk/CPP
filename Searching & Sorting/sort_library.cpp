

#include <iostream>
#include <algorithm> 
using namespace std;

bool compare(int i, int j) {                       /* Type safe */
    // return (i > j);           // Descending Order /* No cast needed */
    return (i < j);           // Ascending Order /* No cast needed */
}

int main() { 
    int data[] = {32, 71, 12, 45, 26};
    int n = sizeof(data)/sizeof(data[0]);

   // Start ptr., end ptr., func. ptr.
    // sort(data, data+n, compare);

    sort(data, data+n); // Ascending Order No Need to Compare

    for (int i = 0; i < 5; i++){
        cout << data[i] << " ";
    }

return 0;
}


/*
Time Complexity: O(N log N)
Auxiliary Space: O(1)
*/