#include <iostream>
#include <string>
using namespace std;
 
void digi(int num){
    
    /* Base Case */
    if(num==0){
        return ;
    }

    /* Recursive Relation*/
    int ans = num%10;
    digi(num/10);

    string nwrd[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
    cout<<nwrd[ans]<<" ";

}

int main(){
    
    cout<<"Enter Any Integer No. : ";
    int num;
    cin>>num;
    cout<<"Your No. in Words : ";
    digi(num);
 
return 0;
}