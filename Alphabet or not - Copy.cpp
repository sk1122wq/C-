
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter any character";
	cin>>ch;
	cout<<"it is"<<(((ch>='a'&& ch<='z')||(ch>='A'&&ch<='Z')))?
	"Alphabet":"not alphabet";
	return 0;
	
}
