#include<iostream>
using namespace std;

class loops
{
	int num1,num2;
	public:
		void fibonacci()
		{
			num1=num2=1;
			cout<<num1<<endl;
			
			while(num2<25)
			{
				cout<<num2<<endl;
				num2 += num1;
				num1=num2-num1;
			}
		}
};

int main()
{
	loops l1;
	l1.fibonacci();
	return 0;
}
