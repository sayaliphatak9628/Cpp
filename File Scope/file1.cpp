//this is the main file which needs to be executed

#include<iostream>
#include "C:\Users\Vilash\Desktop\C++\File Scope\file2.cpp"
using namespace std;

int i = 10;
int main()
{
	void disp();
	i=i+9;
	cout<<"\n file1.cpp: "<<i;
	disp();
	
}
