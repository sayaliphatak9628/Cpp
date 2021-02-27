//loop when we dont know how much time to run

#include<iostream>
using namespace std;

int main(){
	int age;
	int ageTotal = 0;
	int numOfPeople = 0; //enter 0 to calculate 
		
		cout<<"Enter the first person age or -1 to quit"<<endl;
		cin>>age;
	
	while (age != -1){
		ageTotal = ageTotal + age;
		numOfPeople++;				//add this line to count people added
		
		cout<<"Enter next person age or -1 to quit"<<endl;
		cin>>age;
	}
		
		cout<<"Number of persons entered :"<<numOfPeople<<endl;
		cout<<"Average age of people entered: "<<ageTotal / numOfPeople;
		return 0;
}
