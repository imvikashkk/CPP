/*****************************************Destructor*******************************
 * Destructor : A destructor is a special member function that works just opposite to a constructor :
 * unlike constructors that are used for initializing an object , destructors destroy (or delete)
 * the object.
 * 
 * syntax : 
 *        ~class_name(){
 *               // Same code
 *        }
 * 
 * Similar to the construuctor, the destructor name should exactly match the class name. A destructor
 * declaration should always begin with the tlide(~) symbol, as shown in the syntax above.
 * 
 * 
 * 
 * 
 * 
 * ## When is a destructor called ?
 * A destructor function is called automatically when the objects goes out of scope.
 * 
 * 1. the function ends.
 * 2. the program ends.
 * 3. a block containing local variables ends.
 * 4. a delete operator is called.
 * 
 * 
 * 
 * 
 * ## Destructor Rules : 
 * 
 * 1. The name should begin with a tlide sign(~) must match the class name.
 * 2. There cannot be more than one destructor in a class.
 * 3. Unlike constructors that can have parameters, destructors do not allow any parameter.
 * 4. They do not have any return type ,just like constructors.
 * 5. When you do not specify and destructor in a class, the compiler generates a default 
 *    destructor and  inserts it into your code. 
 * 
 * Note : Destructor automatically created in code. but also we can create the manually destructor.
 * 
 * 
 * Note : Static Allocation ke liye Destructor automatically call hota hai.
 *        Jabki Dynamic Allocation ke liye Destructor Manually call karna padta hai.
*/

#include <iostream>
using namespace std;

class Hero{
    public :
    int RollNo;
    string Name;

    // Constructor
    Hero(){
        cout<<"Constructor Is Called"<<endl;
    }

    // Destructor
    ~Hero(){
        cout<<"Destructor Is Called"<<endl;
    }
};
 
int main(){
 
    // static
    Hero hero1;      // automatically Destructor cqll

    //Dynamic 
    Hero *hero2 = new Hero();    
    delete  hero2;   // manually Destructor call
 
return 0;
}

