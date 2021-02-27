#include<iostream>
using namespace std;

void printArr(int theArray[], int sizeofArray);

int main()
{
	int a[4] = {12,53,22,64};
	int b[2] = {82,34};
	
	printArr(b,2);	
}

void printArr (int theArray[], int sizeofArray)
{
	for (int x=0; x<sizeofArray; x++)
	{
		cout<<theArray[x]<<endl;
	}
};
