#include<iostream>
using namespace std;

class Test
{
	public:
		Test()
		{
			cout<<"Constructor invoked"<<endl;
		}
		
		//Destructor starts with ~
		~Test()
		{
			cout<<"Destructor invoked"<<endl;
		}
};

Test obj1;

int main()
{
	cout<<"main() begins"<<endl;
	Test obj2;
	{
		cout<<"Inner block begins"<<endl;
		Test obj3;
		cout<<"Inner block ends"<<endl;
	}
	cout<<"main() ends";	
}
