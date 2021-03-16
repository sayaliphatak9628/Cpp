#include<iostream>
#include<cmath>

using namespace std;

//remember, structure is always defined before main method
struct marks
{
	char name[5]; //add array length to run the code, otherwise it will give error
	int roll_no;
	float score;
};
	
int main()
{
	marks tuna[]=
	{
		//remember {} since this is an array
		{"A",15,76.3},
		{"B",18,83.15},
		{"C",26,66.08}
	};
		
	cout<<tuna[0].name<<endl;
	cout<<tuna[1].roll_no<<endl;
	cout<<tuna[2].score;
	
}
