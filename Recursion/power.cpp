#include <iostream>
using namespace std;

int power(int num, int pow){
    if(pow==0){
        return 1;
    }
    return num*power(num,pow-1);

}

int main(){
 
    cout<<"Enter the number : ";
    int num;
    cin>>num;

    powersection :
    cout<<"Enter the power : ";
    int pow;
    cin>>pow;
    
    
    if(pow==0){
        cout<<"Your Answer is : ";
        cout<<1;
    }
    else if(pow>0){
        cout<<"Your Answer is : ";
        cout<<power(num,pow);
    }
    else{
        cout<<"Enter A Valid Integer Power !! ";
        cout<<endl<<endl;
        goto powersection;
    }
 
return 0;
}