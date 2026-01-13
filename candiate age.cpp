#include<iostream>
using namespace std;
int main()
{
	int candiateage;
	cout<<"enter the age of candiate age";
	cin>>candiateage;
	if( candiateage<18){
		cout<<"sorry,you are not eligible for caste your vote";
		cout<<" you would be able to caste your vote after"<<18-candiateage<<"year"<<endl;
	}
	else {
		cout<<"congratulation you are eligible for casting your vote"<<endl;

	}
	return 0;
}
