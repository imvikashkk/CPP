#include <iostream>
using namespace std;
 
 void print(int num){
    /* Base Case */
    if(num==0){
        return;
    }

    /* Recursive Relation */
    print(num-1);

    /* Processing */
    if((num%10)==1)
        cout<<endl<<num<<" ";

    else
        cout<<num<<" ";


 }

int main(){
    int num;
    cout<<"Enter the last Number : ";
    cin>>num;
    cout<<"Your Numbers are : "<<endl;
    print(num);
 
return 0;
}