// Append characters from string (function)

#include <iostream>
#include <cstring>
using namespace std;
 
int main(){
 
      // Take any two strings
       char src[50] = " Riya Roy";
       char dest[50]= "Sonam";

      // Appends 5 character from src to dest
      strncat(dest, src, 5);

      // Prints the string
      cout <<"Source string : "<< src << endl; //  Riya Roy
      cout <<"Destination string : "<< dest;   // Sonam Riya
 
return 0;
}