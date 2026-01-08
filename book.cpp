#include<iostream>
using namespace std;
int main()
{
	int x,y,sum,prod;
	cout<<"\n Enter the first number";
	cin>>x;
	cout<<"\n ENter the second number";
	cin>>y;
	if (x>0){
		sum=x+y;
		prod=x*y;
		cout<<"\n sum="<<sum<<endl;
		cout<<"\n product="<<prod;
	}
	return 0;
}
