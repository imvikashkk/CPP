/*******************Single_Inheritance*******************
 * 1. Single Inheritance: In single inheritance, one class can extend the functionality of another 
 *                        class. In single inheritance, there is only one parent class and one 
 *                        child class.
 * 
 *              class A
 *                |
 *                v
 *              class B
 * 
 * class parent_class { 
 *        //Body of parent class 
 * };  
 * class child_class: access_modifier parent_class { 
 *       //Body of child class 
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

// Child clas
class Dog: public Animal {
     public: 
     void bark() {
         cout << "barking"; 
     } 
}; 
     
int main() { 
    // Creating an object of the child 
    class Dog obj; 
    // calling methods 
    obj.eat(); 
    obj.bark(); 
}