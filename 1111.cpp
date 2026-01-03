#include<iostream>
using namespace std;
class car2 {

	private:
		string model;
		int year;
		public:
			void input(){
			cout<<"Enter model";
			cin>>model;
			cout<<"enter year";
			cin>>year;
		}
		void display(){
			cout<<"car model"<<model<<",year:"<<year<<endl;
		}
	};
	int main(){
		car2 mycar;
		mycar.input();
		mycar.display();
		return 0;
	    }	
