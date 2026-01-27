#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number";
	cin>>num;
	if (num>0)
		if (num%2==0){
			cout<<"positive even"<<endl;}
		else{
			cout<<"positive odd";}
		else if(num<0)
		
			if(num%2==0){
				cout<<"negative even";
			}else{
			cout<<"negative odd"<<endl;
			}
			else{
				cout<<"zero"<<endl;
			}
		return 0;
	
}
