#include <iostream>
#include <string>
using namespace std;
 
void func(string str, int size){

    if(size == -1){
        return ;
    }

    cout<<str[size];
    func(str, size-1);

}

int main(){
 
    cout<<"Enter the string : ";
    string str;
    getline(cin,str);
    cout<<"Your Reverse String is : ";
    func(str, str.size());
 
return 0;
}