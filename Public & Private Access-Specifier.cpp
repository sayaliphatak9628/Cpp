#include<iostream>
using namespace std;

class PublicDemo
{
	public:
		void setName(string x)
		{
			line = x;
		}
		
		string getName()
		{
			return line;
		}
	
		
	private:
		string line;
};

int main()
{
	PublicDemo access;
	access.setName("This is public & private accessing demo!");
	cout<<access.getName();
}
