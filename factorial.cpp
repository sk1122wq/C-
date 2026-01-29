#include<iostream>
using namespace std;
int main(){
	int a,f=1;
	cout<<"Enter the number "<<endl;
	cin>>a;
	for (int i=a; i>=2; i--){
		f=f*i;
	}
	cout<<"factorial="<<f;
}
