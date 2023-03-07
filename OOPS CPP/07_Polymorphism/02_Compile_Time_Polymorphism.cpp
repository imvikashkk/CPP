/************************************Compile Time Polymorphism***********************************
 *  Compile time polymorphism is also known as static polymorphism. This type of polymorphism can 
 *  be achieved  achieved through function overloading or operator overloading.
 */







/*________________________________________________________________________________________________
__________________________________________________________________________________________________
 * a) Function OverLoading : -
 * ----------------------------
 *             When there are multiple functions in a class with the same name but different 
 * parameters, these functions are overloaded. The main advantage of function overloading is it
 * increses the readability of the program. Functions can be Overloaded by using different numbers 
 * of arguements and by using different types of arguements.
 *            
*/



/* i) Function overloading with different numbers of arguments:-
 *---------------------------------------------------------------- 
 * In this example, we have created two functions, the first add() performs the addition of the two
 * numbers, and the second add() performs the addition of the three numbers. Let’s look at the 
 * example:
*/
// #include <iostream>
// using namespace std;

// class A{
//     public :
//     // Function with two parameters 
//     int add(int num1, int num2) { 
//         return num1 + num2; 
//     } 

//     // Function with three parameters 
//     int add(int num1, int num2, int num3) { 
//         return num1 + num2 + num3; 
//     }
// };

// int main(){
//  A rf;

//  cout<<"Addition of two Integer : "<<rf.add(10,50)<<endl;
//  cout<<"Addition of three Integer : "<<rf.add(10,40,65)<<endl;

// return 0;
// }




/* ii) Function overloading with different types of arguments: 
 -----------------------------------------------------------------
 * In this example, we have created two add() functions with different data types. The first add() 
   takes two integer arguments and the second add() takes two double arguments.
*/
// #include <iostream>
// using namespace std;

// class A{
//     public :
//     // Method with two parameters 
//     int add(int num1, int num2) { 
//         return num1 + num2; 
//     } 

//     // Method with two parameters 
//     double add(double num1, double num2) { 
//         return num1 + num2; 
//     }

//     // Method with two different parameter.
//     int add(double num1, int num2){
//         return num1+num2;
//     }
// };

// int main(){
//  A rf;

//  cout<<"Addition of two Integer : "<<rf.add(10,50)<<endl;
//  cout<<"Addition of two Double : "<<rf.add(10.52,40)<<endl;

// return 0;
// }





/* iii) Default Arguments:
 *--------------------------
A default argument is a value providedin a function declaration automatically assigned by the 
compiler if the function’s caller doesn’t provide a value for the argument with a default value. 
However, if arguments are passed while calling the function, the default arguments are ignored.
*/
// #include <iostream>
// using namespace std;

// class A{
//     public :
   
//     // Default Parameter
//     double add(double num1, double num2=0, double num3=3, double num4=0) { 
//         return num1 + num2 + num3 + num4; 
//     }
// };

// int main(){
//  A rf;

//  cout<<"Addition Usin Default Parameter Method : "<<rf.add(10,50)<<endl;
//  cout<<"Addition Usin Default Parameter Method : "<<rf.add(10,50,54.62)<<endl;
//  cout<<"Addition Usin Default Parameter Method : "<<rf.add(10,50,65.12,58.24)<<endl;
//  cout<<"Addition Usin Default Parameter Method : "<<rf.add(10.25,50.65,24.652,0.325)<<endl;

// return 0;
// }











/*____________________________________________________________________________________________
______________________________________________________________________________________________
b) Operator Overloading: 
-----------------------------
C++ also provides options to overload operators. For example, we can make the operator (‘+’) for 
the string class to concatenate two strings. We know that this is the addition operator whose task 
is to add two operands. A single operator, ‘+,’ when placed between integer operands, adds them and
concatenates them when placed between string operands.

Points to remember while overloading an operator: 
● It can be used only for user-defined operators(objects, structures) but cannot be used for 
  in-built operators(int, char, float, etc.). 
● Operators = and & are already overloaded in C++, so we can avoid overloading them. 
● Precedence and associativity of operators remain intact.


List of operators that can be overloaded in C++:
    _____________________________________________________________________________
    |     +           +             *            /           %           ^      |
    |     &           |             ~            !           ,           =      | 
    |     <           >            <=           >=          ++          --      |
    |    <<          >>            ==           !=          &&          ||      |
    |    +=          -=            /=           %=          ^=          &=      |
    |    |=          *=            <<=         >>=          []          ()      |
    |    ->          ->*           new         new[]       delete     delete[]  |
    |___________________________________________________________________________|

List of operators that cannot be overloaded in C++:
         ::           .*            .           ?:


Syntax :-

return_type operatorOverLoadOperator (){

}

*/

// #include <iostream>
// using namespace std;

// class A{
//     public :
//     int a;
//     int b;

//     void operator+ (A &ob){
//         cout<<"Operator OverLoading + to -  : "<<ob.a-ob.b<<endl;
//     }
// };

// int main(){
 
//     A obj1, obj2;

//     obj1.a = 50;
//     obj1.b = 30;

//     obj2.a = 60;
//     obj2.b = 20;

//     obj2 + obj1;
 
// return 0;
// }



#include<iostream> 
using namespace std; 
class Complex { 
    private: 
    int real, imag; 

    public: 
    Complex(int r = 0, int i = 0) { 
        real = r; imag = i; 
    }
    // This is automatically called when '+' is used with 
    // between two Complex objects 
    Complex operator + (Complex const & b) { 
        Complex a; 
        a.real = real + b.real; 
        a.imag = imag + b.imag; 
        return a; 
    } 
    
    void print() { 
        cout << real << " + i" << imag << endl; 
    } 
    
}; 

int main() { 
    Complex c1(10, 5), c2(2, 4); 
    Complex c3 = c1 + c2;  // An example call to "operator+" 
    c3.print(); 
}
