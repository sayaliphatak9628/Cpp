#include<iostream>
using namespace std;

class New
{
	public:
		void print();
		void p2();
};

void New::print()
{
	cout<<"Hello World";
}

void New::p2()
{
	cout<<"\nSecond line";
}

int main()
{
	New obj;
	obj.print();
	obj.p2();
}
