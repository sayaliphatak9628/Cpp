#include<iostream>
#include<cstdlib> //c standard library
#include<ctime> //converts given time to local time
using namespace std;

int main()
{
	srand(time(0)); //to get random numbers every time
	
	for (int x=1; x < 10; x++){
		//we added %6 to get the remainder for random num.
		//we added 1+ to get the numbers between 1 to 6
		cout<<1+(rand() % 6)<<endl;
	}
}


