#include <iostream>
using namespace std;

bool func(string str, int s, int e){
    
    if(s>e){
        return true;
    }
    if(str[s] != str[e]){
        return false;
    }
    else{
        return func(str,s+1,e-1);
    }

}

int main(){
 
    cout<<"Enter the string : ";
    string str;
    cin>>str;
    cout<<func(str, 0, str.size()-1);
 
return 0;
}