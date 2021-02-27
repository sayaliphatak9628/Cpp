//a constructor is a function that gets called automatically as soon as you create an object
//constructor does not have return type
//constructors are used to get variables & initial values
//we can create multiple objects from same class

#include<iostream>
using namespace std;

class SayaliClass
{
	public:							//add public before creating a constructor
		//constructor
		SayaliClass(string z){
			setName (z);
			cout<<"Constructor invoked"<<endl;
		}
	
		void setName(string x){
			name = x;
			cout<< "accessing private function variable"<<endl;
		}
		
		string getName(){			//use string instead of void here
			return name;
		}
	
		
	private:
		string name;
};


int main()
{
	SayaliClass obj("Sayali Vilas Phatak"); 
	//obj.setName("Sayali Vilas Phatak");
	cout << obj.getName();
	return 0;
}
