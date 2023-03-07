#include <iostream>
using namespace std;

int DtoO(int num){
    int bit;
    int ans =0;
    int i =1;
     while(num != 0){
        bit = num%8;
        num = num/8;
        ans = ans + (bit*i);
        i = i*10;
    }
    cout<<ans;
}

int main(){
    int num;
    
    cout<<"Enter the num : ";
    cin>>num;
    
    DtoO(num);

    return 0;
}