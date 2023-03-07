/*******************************************Encapsulation****************************************
 * 
 * The process of grouping data members and corresponding methods into a single unit is known 
 * as encapsulation.
 * 
 * Wrapping u data member & function.
 * 
 * 
 * We Can create a fully encapsulated class by making all the data member private.
 * 
 * Advantages of encapsulation :-
 * 
 * 1. Encapsulation is a way to achieve data hiding because other classes will not be able to
 * access the data members.
 * 
 * 2. In Encapsulation we can hide the data's internal information which is better for seurity
 *  concerns.
 * 
 * 3. By encapsulation , we can make the class read only , The code reusability is also an 
 *    advantage of encapsulation.
 * 
 * 4. Encapsulated code is better for unit testing.
 * 
 *
*/


#include <iostream>
using namespace std;

class Student{
    // Private Data Member
    private :
    string sName;
    int sRollno;
    int sAge;

    // get and set method to acces the members
    public :

    void setName(string sName){
        this->sName = sName;
    }
    string getName(){
        return sName;
    }

    void setRollno(int sRollno){
        this->sRollno = sRollno;
    }
    int getRollno(){
        return sRollno;
    }

    void setAge(int sAge){
        this->sAge = sAge;
    }
    int getAge(){
        return sAge;
    }
};

int main(){
    Student st1;
    st1.setName("Vikash Kumar Khunte");
    st1.setRollno(50);
    st1.setAge(20);

    Student st2;
    st2.setName("Veman Baghel");
    st2.setRollno(47);
    st2.setAge(22);

    cout<<"\tNAME\t\t\t\t"<<"ROLLNO\t\t\t\t"<<"AGE"<<endl;
    cout<<st1.getName()<<"\t\t\t "<<st1.getRollno()<<"\t\t\t\t"<<st1.getAge()<<endl;
    cout<<st2.getName()<<"\t\t\t\t "<<st2.getRollno()<<"\t\t\t\t"<<st2.getAge()<<endl;


    
 
return 0;
}