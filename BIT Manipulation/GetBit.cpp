#include <iostream>
using namespace std;


int getBit(int n, int i){
    return ((n & (1<<i)) != 0);
}

int main(){
    int n;
    int i;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"Enter the position : ";
    cin>>i;

    cout<<"Bit At the given position is : "<<getBit(n,i)<<endl<<endl;

    main();

    return 0;
}