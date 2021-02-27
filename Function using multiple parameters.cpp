#include<iostream>
using namespace std;

int addNum (int x, int y, int a, int b)
{
	int answer = x + y + a + b;
	return answer;					//takes the answer from this function & displays in main
}

int main()
{
	cout<<addNum(12,15,22,35);	//cout to show the answer value
	return 0;
}
