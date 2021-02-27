#include<iostream>
using namespace std;

int tuna = 82; //global scope

int main()
{
	int tuna = 26;   //local variable
	//to access global variable, we need to add :: 
	cout << ::tuna << endl;
}
