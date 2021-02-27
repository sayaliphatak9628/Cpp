#include<iostream>
using namespace std;

int main()
{
	int x = 1;
	int num;
	int total = 0; //total of user input
	
	while (x <= 5){
		//cout<<"X is "<<x<<endl;
		cin>>num;
		//total + num will work like this say num=10 it will enter 0+10 then num=8 so 10+8=18
		total = total + num; 
		x++;  //x = x+1;
	}
	
	cout<<"Total is "<<total<<endl;
	return 0;
}
