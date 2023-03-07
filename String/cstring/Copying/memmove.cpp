// Move block of memory (function)
/* A program to demonstrate working of memmove */

#include <iostream>
#include <cstring>
using namespace std;
 
//     int main(){
 
//     char str1[] = "Vikash";
//     char str2[] = "Kumar Khunte";

//     puts("Before the memmove() str1[] is : ");
//     puts(str1);
    
    
//     /* Copies contents of str2 to sr1 */
//     memmove(str1, str2, sizeof(str2));

//     puts("Before the memmove() str1[] is : ");
//     puts(str1);
 


//     return 0;
//     }


// memmove() copies the data first to an intermediate buffer,
      // then from the buffer to destination.



int main(){
    char str[100] = "Learningisfun";
    char *first, *second;
    first = str;
    second = str;

    cout<<"Original String : "<<str<<endl;  // Learningisfun


    // when overlap happens then it just ignore it
    memcpy(first + 8, first, 10);
    //   "Learning", "Learaningisfun", 10
    //                 "Learningis" because of only 10 char
    cout<<"memcpy overlap : "<<str<<endl;  //LearningLearningis
    

    // first = "LearningLearningis"
    memmove(second + 8, first, 10);
    //     "Learning", "LearningLe"  beacuse only 10
    cout<<"memmove overlap : "<<str<<endl;  // LearningLearningLe
    return 0;
}