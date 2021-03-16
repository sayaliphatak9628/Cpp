#include<iostream>
#include<ctype.h> //character function library
using namespace std;

int main()
{

	//isalnum - returns alphanumeric values
	char a = '0';
	if(isalnum(a))
		cout<<a<<" is alphanumeric";
	else
		cout<<a<<" is not alphanumeric";

	//isalpha - returns if alphabet
	char b = '4';
	if(isalpha(b))
		cout<<b<<" is alphabet";
	else
		cout<<b<<" is not an alphabet";
	
	//isdigit - returns if digit
	char c = '5';
	if(isdigit(c))
		cout<<c<<" is digit";
	else
		cout<<c<<" is not a digit";

	//toupper - returns ascii values of capital alphabets
	char d = 'a';
	cout<<toupper(d);

	//tolower - returns ascii values of small alphabets 		
	char e = 'a';
	cout<<tolower(e);

	//isupper - returns the cout statement only if the character is in upper case
	char f = 'A';
	if(isupper(f))
		cout<<e<<" in upper case";

	//islower - returns the cout statement only if the character is in lower case
	char g ='n';
	if(islower(g))
		cout<<g<<" in lower case";
		
}
