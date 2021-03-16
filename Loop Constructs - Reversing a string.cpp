#include<iostream>
using namespace std;

class Strings
{
	char test[101],nest[101];
	int i, j;
	public:
		void reverseString()
		{
			i = j = 0;
			cout<<"Enter string to be reversed: ";
			cin>>test;
			
			while(test[i]!= '\0')
			{
				i=i+1;
			}
			
			for(--i;i>=0;nest[j++]=test[i--]);
			nest[j]='\0';
			cout<<endl<<"The reversed string is: "<<endl<<nest;
		}
};

int main()
{
	Strings obj;
	obj.reverseString();
	return 0;
}
