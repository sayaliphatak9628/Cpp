#include<iostream>
extern int i;
using namespace std;

int disp()
{
	i=i-3;
	cout<<"\n file2.cpp: "<<i;
}
