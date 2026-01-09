#include<iostream>
using namespace std;
int main(){
	string employeename;
	double basicsalary, bonus, deductions, netsalary;
	cout<<"Enter employee name:";
	cin>>employeename;
	cout<<"Enter basic salary name:";
	cin>>basicsalary;
	cout<<"Enter bonus amount:";
	cin>>bonus;
	cout<<"Enter deductions:";
	cin>>deductions;
	netsalary=basicsalary+bonus-deductions;
	cout<<"\npayroll Details for"<<employeename<<endl;
	cout<<"net salary:"<<netsalary<<endl;
	return 0;
	
	
}
