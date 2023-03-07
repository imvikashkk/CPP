#include <iostream>
using namespace std;
 

    unsigned long long fact(unsigned long long n){

        /* Base Case */
        if(n==0)
            return 1;

        /* Recursive Relation */

        // int time = fact(n-1);
        // int ans = n*time;
        // return ans;

        return n*fact(n-1);

    }


int main(){

    cout<<"Enter a no. between 0 to 20 : ";
    unsigned long long n;
    cin>>n;
    cout<<"Factorial is : "<<fact(n);

return 0;
}