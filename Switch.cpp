#include<iostream>
using namespace std;

int main()
{
	int age = 21;
	
	switch(age){
		case 16:
			cout<<"you're in high-school"<<endl;
			break;
		case 21:
			cout<<"you're graduated"<<endl;
			break;
		case 24:
			cout<<"go, get a job"<<endl;
			break;
		default:
			cout<<"oppss sorry";
	}
}
