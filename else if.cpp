#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char ch;
	cout<<"enter the no";
	cin>>a>>b;
	cout<<"enter the operator"<<endl;
	cin>>ch;
	if(ch=='+')
	cout<<"sum="<<a+b;
	else if(ch=='-')
	cout<<"subtract="<<a-b;
		else if(ch=='*')
	cout<<"mul="<<a*b;
		else if(ch=='/')
	cout<<"divide="<<a/b;
	else
	cout<<"u enter the wrong oper";
	
	//make a calculater in else if
}
