#include<iostream>
#include<cmath>
using namespace std;

//defining structure with data-types
struct nameperson
{
	char name[15];
	int age;
};

int main()
{
	//naming structure and assigning its values
	nameperson tuna= 	//tuna is a function
	{
		"sayali phatak",
		24
	};
	
	cout<<tuna.name;		//displaying structure content
}
