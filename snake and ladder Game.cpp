#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(0));
	int position=0;
	while (position<100){
		int dice=rand()%6+1;
		position +=dice;
		if (position==25)position=5;
		else if (position==40)
		position=60;
		cout<<"Rolled a"<<dice<<",Current position :"<<position<<endl;
		if(position >=100){
			cout<<"Congratulations! you reached 100\n";
			break;
		}
	}
	return 0;
	
}
