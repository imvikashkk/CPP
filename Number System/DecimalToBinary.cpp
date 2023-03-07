#include <iostream>
using namespace std;

int main(){
    int num,bit;
    int i = 1;
    int ans = 0;
    cout<<"Enter The Decimal No: ";
    cin>>num;

    while(num != 0){

        bit = num%2;
        num = num/2;
        ans = ans + (bit*i);
        i = i*10;
        
    }
    

    cout<<ans;

    return 0;
}