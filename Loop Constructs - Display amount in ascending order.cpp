#include<iostream>
using namespace std;

class Customers
{
	float amount[10];
	public:
		void SortData()
		{
			int ct;
			for(ct=0;ct<10;ct++)
			{
				cout<<"Enter the amount: ";
				cin>>amount[ct];
			}
			int counter=0;
			while(counter<9)
			{
				float temp;
				if(amount[counter]>amount[counter+1])
				{
					temp=amount[counter];
					amount[counter]=amount[counter+1];
					amount[counter+1]=temp;
					counter=0;
					continue;
				}
				counter++;
			}
		}
		
		void display()
		{
			for(int counter=0;counter<10;++counter)
			{
				cout<<"Element "<<counter<<": "<<endl;
			}
		}
};

int main()
{
	Customers c1;
	c1.SortData();
	c1.display();
	return 0;
}
