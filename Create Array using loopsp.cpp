#include<iostream>
using namespace std;

int main()
{
	int arr[9];	//define array elements no
	
	cout<<"Elements --------------- Values"<<endl;	
	
//array using for loop
	for (int x=0; x<=8; x++)
	{
		arr[x] = 82;	//defining array 
		
		cout<<"\t"<<x<<"-----------"<<arr[x]<<endl;		//displaying elements & values
	}
}
