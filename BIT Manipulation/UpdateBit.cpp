#include <iostream>
using namespace std;

int Update(int n, int i, int bt){
    int mask = (~(1<<i));
    n = n&mask;
    return (n|(bt<<i));
}
int main(){

    int n,i,bt;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"Enter the position : ";
    cin>>i;
    cout<<"Enter the bit (0 or 1) : ";
    cin>>bt;

    cout<<"After Update Bit Is : "<<Update(n,i,bt)<<endl<<endl;
    return 0;
}