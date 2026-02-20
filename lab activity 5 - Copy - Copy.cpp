#include<iostream>
using namespace std;
int a(int a)


{
	int m= a/2;
	for(int i=2; i<=10; i++)
	{
		if (a%i==0)
		{
			cout<<"the number is composite";
			break;
			
		}
	}
	
	
}
int main()
{
	int x;
	cout<<"enter a numer"<<endl;
	cin>>x;
	cout<<a(x);
}
