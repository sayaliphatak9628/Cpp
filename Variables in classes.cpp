#include<iostream>
using namespace std;

class SayaliClass
{
	//we are accessing private name function using public
	public:
		void setName(string x)	//define the name of function & provide user input in main
		{
			name = x;			//assign value of x to private name function
		}
		
		string getName()		//using getName, return the private name function value
		{
			return name;
		}
	
	
	private:				//it is a good practice to define functions as private
		string name;
};


int main()
{
	SayaliClass sayclass;
	sayclass.setName("Sayali Phatak");		
	cout << sayclass.getName();			//accessing private name using public specifier
}
