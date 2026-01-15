#include<iostream>
using namespace std;
int main()
{
	int age=20;
	string country="USA";
	if (age>=18)
		if (country=="USA")
		{
			cout<<"Eligible to vote in the USA"<<endl;
			
		}
		else if(country=="canada")
		{
			cout<<"Eligible to vote in canada"<<endl;
		}else
		{
			cout<<"check voting eligible for other countries"<<endl;
			
		}
		else
		{
			cout<<"not eligible to vote"<<endl;
		}
}
