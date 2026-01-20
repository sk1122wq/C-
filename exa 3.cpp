#include<iostream>
using namespace std;
int main()
{
	int x=2,y=3;
	
	int mul=x*y;
	int sub=x-y;
	int add=x+y;
	cout<<"mul is "<<mul<<endl;
	cout<<"sub is "<<sub<<endl;
	cout<<"add is "<<add<<endl;
	switch(x,y)
	{	
		case 1:
		cout<<mul;
		break;
		case 2:
		cout<<sub;
		break;
		case 3:
		cout<<add;
		break;
		default:
		cout<<"invalid value";
	
	}

	
	
}
