#include <iostream>
using namespace std;

int ClearBit(int n, int i){
    int mask = (~(1<<i));
    return n & mask;
    // return (n&(~(1<<i)));
}


int main(){
    int n;
    int i;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"Enter the position : ";
    cin>>i;

    cout<<"After Clear the given Position : "<<ClearBit(n,i)<<endl<<endl;

    main();
    return 0;
}