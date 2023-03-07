#include <iostream>
using namespace std;

class Student{
    private :
    char health;
    int level;

    public :

    // getter
    char getHealth(){
        return health;
    }
    int getLevel(){
        return level;
    }

    // setter
    void setHealth(char h){
        health = h;
    }
    void setLevel(int l){
        level = l;
    }

};


int main(){
 
    // Creation Of Object Statically
    Student Vivek;

    // Setter
    Vivek.setHealth('G');
    Vivek.setLevel(4);

    // Getter
    cout<<"Vivek Health : "<<Vivek.getHealth()<<endl;
    cout<<"Vivek Level : "<<Vivek.getLevel()<<endl;

    // Creation of Object Dynamically
    Student *Veman = new Student();

    Veman->setHealth('B');   // (*Veman).setHealth('B');
    Veman->setLevel(6);      // (*Veman).setLevel(6);

    cout<<"Veman Health : "<<Veman->getHealth()<<endl; // (*Veman).getHealth()
    cout<<"Veman Level : "<<Veman->getLevel()<<endl;    // (*Veman).getLevel()
 
return 0;

}