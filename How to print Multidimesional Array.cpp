#include<iostream>
using namespace std;

int main()
{
	int tuna [2][3] = {{2,3,4},{7,8,9}};
	
	//accessing array in matrix format
	
	for(int row=0; row<2; row++)
	{
		//it will loop in first row and enter the columns & then in next line, enter columns
		for(int column=0; column<3; column++)
		{
			cout<<tuna[row][column]<<" ";
		}
		cout<<endl;
	}
}
