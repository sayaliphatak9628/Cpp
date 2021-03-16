#include<iostream>
using namespace std;

int globalVar;
class scope
{
	int x;
	public:
		void func1()
		{
			int localVar=10;
			cout<<globalVar<<endl;
		}
		
		void func2()
		{
			int localVar=5;
			cout<<localVar<<endl;//throws an error since localVar is not defined in func2
		}
};

int main()
{
	globalVar = 6;
	scope s1;
	s1.func1();
	s1.func2();
}
