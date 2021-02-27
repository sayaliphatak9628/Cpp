#include<iostream>
using namespace std;

//loop is something which runs the code as many times as required
int main()
{
	int tuna = 1;
	
	while (tuna <= 7){
		cout<<"Tuna is "<<tuna<<endl;
		tuna = tuna + 1; 			  //to stop the loop, if we dont add this, it runs forever
	}
}
