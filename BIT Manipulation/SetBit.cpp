#include <iostream>
using namespace std;

int SetBit(int n,int i){
    return (n|(1<<i));
}

int main(){
    int n;
    int i;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"Enter the position : ";
    cin>>i;

    cout<<"Now The Number Is : "<<SetBit(n,i);
    return 0;

    main();
}