/********************************Hierarchical_Inheritance*****************************
 * 
 * In hierarchical inheritance, one class serves as a base class for more than one derived class.
 * 
 *                                   ClassA
 *                                /          \
 *                            ClasB1         ClassB2
 *                           /      \        /      \
 *                       ClassC1  ClassC2  ClassD1  ClassD2
 * 
 * Syntax :-
 * -------------
 * 
 * class parent_class { 
 *        //Body of parent class 
 * }; 
 * 
 * class child_class1: access_modifier parent_class { 
 *        //Body of child class1 
 * }; 
 * 
 * class child_class2: access_modifier parent_class { 
 *       //Body of child class2 
 * };
 * 
*/

#include <iostream>
using namespace std;

// Parent Class A
class Animal{
    public :
     void eat(){
        cout<<"Eating"<<endl;
     }
};

// Child Class B1
class Dog: public Animal{
    public : 
     void bark(){
        cout<<"Barking"<<endl;
     }
};

// Child Class B2
class Cat: public Animal{
    public :
     void meow(){
        cout<<"Meowing"<<endl;
     }
};


int main(){
 
 // Creating object of Dog
 Dog dg;
 // calling eat function of Animal super class using object of Dog Child Class
 dg.eat();
 // calling the bark() function
 dg.bark();
/*********************************************************************************/

// Creating the object of Cat Class
Cat ct;
// Calling eat function of Animal super class Using object of Cat Child Class'
ct.eat();
// Calling the meow() function 
ct.meow();
    
 
return 0;
}