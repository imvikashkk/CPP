#include <iostream>
#include <cmath>
using namespace std;

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
    cout<<ans;

    return 0;
}