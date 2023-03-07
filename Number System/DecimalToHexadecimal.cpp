#include <iostream>
#include <stack>
using namespace std;

int main(){
    int bit,num;
    stack <int> ans;
    int i = 1;
    cout<<"Enter the Number : ";
    cin>>num;

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

    return 0;
}