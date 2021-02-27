#include<iostream>
using namespace std;

int main()
{
	int age = 129;

//nested if...if the first condition is satisfied, it will run the condition in first block	
	if (age > 60){
	
		if (age > 100){
			cout<<"why are you still alive?"<<endl;
		}
	}
	else{
		cout<<"you are young, get a job";
	}
}
