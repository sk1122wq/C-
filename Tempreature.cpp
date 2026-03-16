#include<iostream>
using namespace std;
int main(){
	int temp=30;
	int humidity=80;
	if (temp>25)
		if (humidity>70){
			cout<<"it is hot and humid"<<endl;}
			else if(humidity>50)
			{
				cout<<"it's hot and moderately humid"<<endl;
			}
			else{
				cout<<"Temperature is moderate"<<endl;
			}return 0;
			}
