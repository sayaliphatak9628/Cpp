#include<iostream>
using namespace std;

//classes are easy way to group all functions, variables.
class SayaliClass
{
	public:
		void coolSaying()  //dont forget to put ()
		{
			cout<<"Preachin to the choir"<<endl;
		}
};	//dont forget to put ;

int main()
{
	SayaliClass sayclass;	//only class_name & object_name, no ()
	sayclass.coolSaying();  //dont forget to put ()
	return 0;
}
