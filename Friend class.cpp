#include<iostream>
using namespace std;

class myClass1
{
	friend class myClass2; //myClass2 is a friend of myClass1
	int x;
	
	public:
		myClass1(int a)
		{
			x = a;
		}
			
};

class myClass2
{
	public:
		void showData(myClass1 obj)
		{
			cout<<"X value is: "<<obj.x;
		}
};

int main()
{
	myClass1 obj1(5);
	myClass2 obj2;
	obj2.showData(obj1);
	
}
