#include <iostream>
#include <stack>
using namespace std;

int DtoH(int num){
    int bit;
    stack <int> ans;
    int i =1;

    while(num != 0){
        bit = num%16;
        num = num/16;
        ans.push(bit);
    }

    while(!ans.empty()){

        switch(ans.top()){
            case 10 :
               cout<<"A";
               ans.pop();
               break;
            case 11 :
               cout<<"B";
               ans.pop();
               break;
            case 12 :
               cout<<"C";
               ans.pop();
               break;
            case 13 :
               cout<<"D";
               ans.pop();
               break;
            case 14 :
               cout<<"E";
               ans.pop();
               break;
            case 15 :
               cout<<"F";
               ans.pop();
               break;
            default :
               cout<<ans.top();
               ans.pop();
               break;

        }
    }
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
    DtoH(ans);

    return 0;
}