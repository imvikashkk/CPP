// the strcat() function contcatenates (joins) two strings.

#include <iostream>
#include <cstring>
using namespace std;
 
int main(){
 
    char str1[100] = "This is ", str2[] = "Vikash Kumar";

   // concatenates str1 and str2
   // the resultant string is stored in str1.
   strcat(str1, str2);

   puts(str1); // This is Vikash Kumar
   puts(str2); // Vikash Kumar

   return 0;
 
return 0;
}