/*****************************Inheritance_Ambiguity***************************
 * There may be a possibility that a class may inherit member functions with the same name from
 * two or more base classe and the derived class may not have functions with the same name as 
 * those of its base classes. if the derived class object need to access one of the same named
 * member function of the classes . if results in ambiguity as it is not clear to the compiler 
 * which base's class member should be invoked.
 * 
 * ___________________________________________________________
 * Avoid Ambiguity using scope resolution operator :-
 * 
 * The ambiguity can be resolved by using the scope resolution operator by specifying the class
 * in which the member function lies as given below : 
 * Syntax :-
 * object.class_name::method_name();
*/

#include <iostream>
using namespace std;

class A{
  public :
    void abc(){
        cout<<"Class A"<<endl;
    }
};

class B{
    public :
     void abc(){
        cout<<"Class B"<<endl;
     }
};

class C : public A, public B{
    public :
     void abc(){
        cout<<"Class C"<<endl;
     }
};


int main(){
 // Construction Object of Class C
 C obj;

 // calling the abc() function
 obj.abc();  // always call its class method. // Class C
 obj.A::abc(); // call A class method.
 obj.B::abc(); // Call B class Method.

 obj.C::abc(); // Bad Work

    
 
return 0;
}


/*************************************NOTE**********************************
 * If method is not present in object class but present in super class,
 * then throw an error.
*/