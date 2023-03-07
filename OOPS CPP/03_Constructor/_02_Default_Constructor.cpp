/**********************Default Constructor***********************
 * 1. Default Constructors: Default constructor is the constructor which doesn’t take any argument.
 *                          It has no parameters. It is also called a zero-argument constructor.
 *
 *  Even if we do not define any constructor explicitly, the compiler will automatically provide a 
 *  default constructor implicitly.
*/

// Example
#include<iostream>
using namespace std;
class student
{
	int rno;
	char name[50];
	double fee;
	public:
	student()					 // Explicit Default constructor
	{
		cout<<"Enter the RollNo:";
		cin>>rno;
		cout<<"Enter the Name:";
		cin>>name;
		cout<<"Enter the Fee:";	
		cin>>fee;
	}	
	
	void display()
	{
		cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
	}
};

int main()
{
	student s;
	s.display();
	return 0;
}
