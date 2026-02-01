#include<iostream>
using namespace std;
int main()
{
	float marks;
	cout<<"Enter a marks";
	cin>>marks;
	if (marks<=1100||marks>0)
	float per (marks/1100*100);
	if (per>=80)
	cout<<"A+";
	else if (per>=70)
	cout<<"A";
	else if (per>=60)
	cout<<"B";
	else if (per>=50)
	cout<<"C";
	else if (per>=40)
	cout<<"D";
	else if (per<33)
	cout<<"fail";
	else
	cout<<"invalid input";
	return 0;
}

