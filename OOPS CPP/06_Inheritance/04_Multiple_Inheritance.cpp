/******************************Multiple Inheritance**********************
 * In multiple inheritance, a class can inherit more than one class. This means that in this type 
 * of inheritance, a single child class can have multiple parent classes.
 * 
 *          class A         class B
 *            \               /
 *              \           /
 *               >    v    <
 *                class C
 * 
 * class parent_class1 { 
 *       //Body of parent class1 
 * }; 
 * class parent_class2 { 
 *       //Body of parent class2 
 * }; 
 * class child_class: access_modifier parent_class1, access_modifier parent_class2 { 
 *               //Body of child class
 * };
 * 
 * 
*/

#include <iostream>
using namespace std;

//Parent Class 1
class Animal{
    public :
    void eat(){
        cout<<"Eating"<<endl;
    }
};

//Parent Class 2
class Dog{
    public :
    void bark(){
        cout<<"Barking"<<endl;
    }
};

//Inherited Class
class BabyDog: public Animal, public Dog{
    public :
    void weep(){
        cout<<"Weeping"<<endl;
    }
};



int main(){
 // Construct object of BabyDog
 BabyDog rf;

 // Super Class 1 method
 rf.eat();
 // Super Class 2 method
 rf.bark();
 // Inherited/Sub Class method
 rf.weep();

return 0;
}