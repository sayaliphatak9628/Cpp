#include<iostream>
using namespace std;

class Sample
{
	static int count;
	
	public:
		void show();
		static void showCount();
};

int Sample::count;

void Sample::show()
{
	cout<<"\n Hello "<<count;
	count++;
}

void Sample::showCount()
{
	cout<<"\n Count is: "<<count;
}

int main()
{
	Sample a,b,c;
	a.show();
	b.show();
	c.show();
	
	Sample::showCount();
}
