#include<iostream>
using namespace std;

class Test
{
	public:
		newFunc()
		{
			new1 = 0;
		}
	private:
		int new1;
	
	//defining friend function	
	friend void TestFriend(Test t);
};

void TestFriend(Test t)
{
	t.new1=450;
	cout<< new1 <<endl;
}

int main()
{
	Test check;
	TestFriend(check);
}
