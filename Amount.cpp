#include<iostream>
using namespace std;
int main()
{
	float amt,profit;
	cout<<"Enter amount";
	cin>>amt;
	profit=(amt*5)/100;
	if (amt>=0 && amt<=100000){
	cout<<"profit is"<<profit<<endl;
	cout<<"after adding profit"<<amt+profit<<endl;}
	profit=(amt*7)/100;
	if (amt>=100001 && amt<=500000){
	cout<<"profit is"<<profit<<endl;
	cout<<"after adding profit"<<amt+profit<<endl;}
	profit=(amt*10)/100;
	if (amt>=5000001 && amt<=1000000){
	cout<<"profit is"<<profit<<endl;
	cout<<"after adding profit"<<amt+profit<<endl;}
	profit=(amt*12)/100;
	if (amt>=100001 && amt<=5000000){
	cout<<"profit is"<<profit<<endl;
	cout<<"after adding profit"<<amt+profit<<endl;}
	profit=(amt*15)/100;
	if (amt>=5000001 && amt<=10000000){
	cout<<"profit is"<<profit<<endl;
	cout<<"after adding profit"<<amt+profit<<endl;}
	
	
	
	
	

	
	
}
