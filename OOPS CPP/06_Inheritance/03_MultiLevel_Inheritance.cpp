/******************MultiLevel_Inheritance***********************
 * When a class inherits from a derived class, and the derived class becomes the base class 
 * of the new class, it is called multilevel inheritance. In multilevel inheritance, there is 
 * more than one level.
 * 
 *      class A
 *        |
 *        v
 *      class B
 *        |
 *        v
 *      class C
 * 
 * 
 * Syntax :-
 * ----------
 * 
 * class parent_class { 
 *       //Body of parent class 
 * }; 
 * 
 * class child_class: access_modifier parent_class { 
 *         //Body of child class 
 * }; 
 * 
 * class child_class_of_child_class: access_modifier child_class { 
 *         //Body of class 
 * };
*/

#include<iostream> 
using namespace std; 
// Parent class 
class Animal { 
    public: 
    void eat() { 
        cout << "eating" << endl; 
    }
}; 

// Child class 
class Dog: public Animal { 
    public: 
    void bark() { 
        cout << "barking" << endl; 
    } 
}; 

class BabyDog: public Dog { 
    public: 
    void weep() {
         cout << "weeping"; 
    } 
}; 

int main() { 
    // Creating an object of the child 
    class BabyDog obj; 
    // calling methods 
    obj.eat(); 
    obj.bark(); 
    obj.weep();
}