#include <iostream>
#include "mylib.cpp"

using namespace std;
 
int main(){
 
 int *str;
 int size = 0;
 str = arr_str_int(size);

for(int i = 0; i<size; i++)
 cout<<str[i]<<" ";
    
 
return 0;
}