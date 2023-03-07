/******************************Const Keyword For Object Creation******************************
 * 
 * Object Creation : we declaire the object as constant using the const keyword By doing
 * this, the properties of the object once initialized cannot be changed further.
 * 
 * function : 
 * 
*/

#include <iostream>
using namespace std;
 
class Testing{
    public :
    string fname;
    string lname;

    public :

    Testing(string fname, string lname){
        this->fname  = fname;
        this->lname  = lname;
    }
};

int main(){
 
const Testing temp("Vikash", "Khunte");          // const keyword used in object creation
cout<<"First Name : "<<temp.fname<<endl;
cout<<"Last Name : "<<temp.lname<<endl;
 

 //   NOT POSSIBLE DUE TO CONST KEYWORD  USED IN OBJECT CREATION `//
// temp.fname = "Rahul";
// cout<<"\nAfter Change ==> "<<endl;
// cout<<"First Name : "<<temp.fname<<endl;
// cout<<"Last Name : "<<temp.lname<<endl;

return 0;
}