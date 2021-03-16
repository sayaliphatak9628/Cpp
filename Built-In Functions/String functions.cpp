#include<iostream>
#include<string.h>
using namespace std;

int main()
{
/*
	//strcpy - copies the first string to second or third string
	char str1[10] = "Hello";
	char str2[10] = "World";
	char str3[10];
		strcpy( str3, str1);
		cout <<str3 << endl;
		
	//strcat - concatenates second string value to first string
	char str4[10] = "Hello";
	char str5[10] = "World";
		strcat( str4, str5);
   		cout <<str4 << endl;

	//strlen - counts the length of string
	char arr[] = "Welcome to C++ Programming";  
    cout <<"Length of String = "<<strlen(arr)<<endl;  
*/
	//strstr
	char str1[] = "Hello World";
	char str2[] = "or";
	char found=strstr(str1,str2);
	cout<<found-str1+1;
}
