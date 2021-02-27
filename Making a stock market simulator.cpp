#include<iostream>
#include<cmath> //math library functions
using namespace std;

int main()
{
	float a;     		//amount
	float p = 500;		//principle amount
	float r = .01;		//rate of interest
	
	for(int day=1; day<=7; day++){
		a = p * pow(1+r, day);
		cout<< day<<"------------" << a<<endl;
	}
}
