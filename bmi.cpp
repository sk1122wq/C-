#include<iostream>
using namespace std;
int main(){
	float weight, height, bmi;
	cout<<"Enter weight(in kg):";
	cin>>weight;
	cout<<"Enter height (in meter)";
	cin>>height;
	bmi=weight/(height*height);
	cout<<"Your bmi is:"<<bmi<<endl;
	if (bmi<18.5)
	cout<<"underweight\n:";
	else if (bmi>=18.5&& bmi<24.9)
	cout<<"Normal weight\n";
	else
	cout<<"Overweight\n";
	return 0;
}
