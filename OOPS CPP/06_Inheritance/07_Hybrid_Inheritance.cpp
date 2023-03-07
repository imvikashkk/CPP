/***************************Hybrid Inheritance**************************
 * Hybrid inheritance is a combination of more than one type of inheritance. For example, 
 * A child and parent class relationship that follows multiple and hierarchical inheritances can 
 * be called hybrid inheritance.
 * 
 *                           classA    classF
 *                           /      \    |
 *                        classC    classB
 *                       /      \
 *                   classD    classE
 * 
 * class parent_classA { 
 *         //Body of parent class1 
 * }; 
 * 
 * class parent_classB { 
 *        //Body of parent class1 
 * }; 
 * 
 * class child_classC: access_modifier parent_classA { 
 *        //Body of child class1 
 * }; 
 * 
 * class child_classD: access_modifier parent_classC { 
 *        //Body of child class1 
 * }; 
 * 
 * class child_classE: access_modifier parent_classC { 
 *        //Body of child class1 
 * }; 
 * 
 * class child_classB: access_modifier parent_classA, access_modifier parent_classF { 
 *       //Body of child class2 
 * };
 *                             
*/


#include <iostream> 
using namespace std; 

// Parent class1 
class Vehicle { 
    public: Vehicle() { 
        cout << "This is a Vehicle" << endl; 
        } 
};
 //Parent class2 
 class Fare { 
    public: Fare() { 
        cout << "Fare of Vehicle\n"; 
        } 
}; 
//Child class1 
class Car: public Vehicle { 

}; 
//Child class2 
class Bus: public Vehicle, public Fare { 

}; 
// main function 
int main() { 
    // creating object of sub class will 
    // invoke the constructor of base class 
    Bus obj2; 
    
    return 0; 
}