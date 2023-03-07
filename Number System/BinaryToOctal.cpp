#include <iostream>
#include <cmath>
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
    int rem;
    int num;
    int ans = 0;
    int weight = 1;
    cout<<"Enter The Binary Number : ";
    cin>>num;

    while(num != 0){
       rem = num%10;
       num = num/10;
       ans = ans + (rem*weight);
       weight = weight*2;

    }
    DtoO(ans);

    return 0;
}