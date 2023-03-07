/*****************************Parameterized Conswtructor*************************
 *  Parameterized Constructors: It is possible to pass arguments to constructors. Typically,
 *  these arguments help initialize an object when it is created. To create a parameterized constructor,
 *  simply add parameters to it the way you would to any other function. When you define the constructor’s
 *  body, use the parameters to initialize the object. 
 * 
 * Student   st(para);
 *   ^        ^   ^
 *   |        |   |
 * Class_name |  Parameter
 *          Object
*/



// // CPP program to illustrate
// // parameterized constructors
// #include <iostream>
// using namespace std;

// class Point {
// private:
// 	int x, y;

// public:
// 	// Parameterized Constructor
// 	Point(int x1, int y1)
// 	{
// 		x = x1;
// 		y = y1;
// 	}

// 	int getX() { return x; }
// 	int getY() { return y; }
// };

// int main()
// {
// 	// Constructor called
// 	Point p1(10, 15);

// 	// Access values assigned by constructor
// 	cout << "p1.x = " << p1.getX()
// 		<< ", p1.y = " << p1.getY();

// 	return 0;
// }


// Example
#include<iostream>
#include<string.h>

using namespace std;

class student
{
	int rno;
	string name;
	double fee;

	public:
	student(int,string ,double);
	void display();
	
};

student::student(int no,string n,double f)
{
	rno=no;
	name = n;
	fee=f;
}	

void student::display()
{
	cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
}
	
int main()
{
	student s(1001,"Ram",10000);
	s.display();
	return 0;
}
