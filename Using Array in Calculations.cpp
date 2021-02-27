#include<iostream>
using namespace std;

int main()
{
	int tuna[] = {20,52,34,67,40};
	int sum = 0;
	
	for (int x=0; x<5; x++)
	{
		sum = sum + tuna[x];
		cout << sum <<endl;
	}
}
