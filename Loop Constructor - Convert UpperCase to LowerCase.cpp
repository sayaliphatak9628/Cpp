#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
	char in_str[50];
	int i=0;
	printf("Enter a string: ");
	gets(in_str);
	while(in_str[i]!='\0')
	{
		if(in_str[i]>='A' && in_str[i]<'Z')
		{
			in_str[i] = in_str[i]+32;
			i=i+1;
		}
		cout<<"The converted string is "<<in_str;
		getch();
	}
}
