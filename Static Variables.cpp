#include<iostream>
using namespace std;

void func()
{
	//static variable assigns a value in memory for one time use only
	
	//if we do not add static here at the time of initilazing a variable, we will get output
	// as 5 for 4 times
	static int a = 5;
	cout<<a<<endl;
	a++;
}

int main()
{
	for(int i=0; i<4; i++)
	{
		func();
	}
}
