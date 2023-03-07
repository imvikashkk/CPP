/**********************Constructor OverLoading***********************
 * In c++, we can have more than one constructor in a class with the same name, as long as each has
 * a different list of argumens . This concepts is known as constructor OverLoading and is quite similar
 * to function overLoading. 
 * 
 * o OverLoaded constructors essentially have the same name and a different numbers of arguments.
 * 
 * o A constructor is called depending upon the number and type of arguments passed.
 * 
 * o While creating the object arguements must be passed to let the compiler know
 *   which constructor needs to called.
 * 
 * 
*/

#include <iostream>
using namespace std;

class A{

    float area = 0;
    public :

    A(){              // No-Argument Constructor
        area = 0;
        cout<<area<<endl;
    }

    A(int x, int y){  // parameterized Constructor, 2 parameter passed
        area = x*y;
        cout<<area<<endl;
    }

};
int main(){
  A arr;
  A ar();   // Kuchh bhi print nahi hoga
  A arbh(10,20);
 
return 0;
}