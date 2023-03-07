#include <iostream>
#include <cstring>
using namespace std;
 
int main(){
 
    char str1[20] = "CPP programming";
    char str2[20];

    cout<<"Before strcpy() str2 is : "<<str2<<endl;  // Garbage Value
  // copying str1 to str2
  strcpy(str2, str1);

  cout<<"After strcpy() str2 is : ";
  puts(str2); // CPP programming

  return 0;
 
return 0;
}