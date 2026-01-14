#include<iostream>
using namespace std;
int main(){
	cout<<"monday thusday wednesday friday saturday sunday"<<endl;
	for (int i=1; i<=30; i++){
		cout<<i<<"\t";
		if (i%7==0)
		cout<<endl;
	}
	}
