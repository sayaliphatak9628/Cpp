#include<iostream>
using namespace std;

//function prototype
int volume (int l=1, int w=1, int h=1); //default parameter if no value is passed

int main()
{
	cout << volume(12,6,9);   //arguements 
}

int volume (int l, int w, int h){
	return l*w*h;
}
