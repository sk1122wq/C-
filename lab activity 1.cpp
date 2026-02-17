#include<iostream>
using namespace std;
int add(int a, int b)
{
	int add = a+b;
	return add;
}
int main()
{
	int i,j;
	cout<<"enter two numbers"<<endl;
	cin>>i>>j;
	cout<<add(i,j);
}
