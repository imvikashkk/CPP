// operator= can be used on strings in place of strcpy function
// operator<=, operator<, operator>=, operator> operators can be used on strings
   //in place of strcmp function
// + Operator can be used in place of strcat 


// Strings are objects that represent sequences of characters.
   // The standard string class provides support for such objects with an interface similar to 
   // that of a standard container of bytes, but adding features specifically designed to operate
   // with strings of single-byte characters
// The string class is an instantiation of the basic string class template that uses char 
   // (that is bytes) as its character type, with its default char traits and allocator type

#include <iostream>
#include <string>
using namespace std;
 
int main(){
 
    string str1 = "Vikash";
    string str2 = " Jii";
    string str = str1 + str2;
    cout<<str;
 
return 0;
}