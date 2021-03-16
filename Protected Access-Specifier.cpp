#include<iostream>
using namespace std;


//protected member variables are same as that of accessing private member variables

//we just need to define the protected members in a seperate class and then the same class
// needs to be inherited
class Parent
{
	protected:
		float price;
};

class Child : public Parent
{
	public:
		void setPrice(float x)
		{
			price = x;
		}
		
		float getPrice()
		{
			return price;
		}
};


int main()
{
	Child obj;
	obj.setPrice(52.320);
	cout<<obj.getPrice();
}
