/*************************Constructor*****************
 * CONSTRUCTOR : A constructor is a special type of member function that is 
 * called automatically when an object is created . In c++ a constructor has
 * the name as that of the class , and it does not have a return type.
 * 
 * eg. : 
 * 
 *       class D{
 *           public :
 *              // Create a constructor
 *           D(){ 
 *              // code
 *           }
 *        };
 * 
 * Here, the function D() is a constructor of the class D. Notice that the constructor :
 *              o has the same name as the class.
 *              o does not have a return type and
 *              o is public
 * 
 * 
 * 
 * Charateristics Of Constructor :
 * 
 *  1. The name of the constructor is the same as its class name.
    2. Constructors are mostly declared in the public section of the class though it can be 
       declared in the private section of the class.
    3. Constructors do not return values; hence they do not have a return type.
    4. A constructor gets called automatically when we create the object of the class.
    5. Constructors can be overloaded.
    6. Constructor can not be declared virtual.
    7. Constructor cannot be inherited.
    8. Addresses of Constructor cannot be referred.
    9. Constructor make implicit calls to new and delete operators during memory allocation.


                                      Types of Constructor :
                                    -------------------------
                                     |          |          |
                                     |          v          |
                                     v    Parametrized     v
                                  Default              Copy Constructor
*/


#include <iostream>
using namespace std;

class A{
    public :
    A(){  // constructor
        cout<<"Constructor invoked"<<endl;     // code body
    }
};


int main(){

A obj;
    
 
return 0;
}