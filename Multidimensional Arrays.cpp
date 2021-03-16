//array inside another array

#include<iostream>
using namespace std;

int main()
{
	//2 rows, 3 columns
	//{2,3,4}=row1, {6,7,8}=row2
	int sally[2][3] = {{2,3,4},{6,7,8}};
	
	//2,3,4
	//6,7,8
	
	//first we enter row/index & then which column/index to access
	cout<<sally[0][2]<<endl;
	cout<<sally[1][0];
}
