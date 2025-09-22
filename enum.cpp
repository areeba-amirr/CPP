#include<iostream>
using namespace std;

enum days {
	mon , tues , wed , thurs , fri , sat ,sun
};
enum colors {
	purple = 9,
	pink = 8
};

int main(){
	enum days today;
	today = tues;
	if( today == mon){
		cout<<"Day no "<<today+1<<"("<<"MONDAY"<<")"<<endl;
	}
	else if( today == tues){
		cout<<"Day no "<<today+1<<"("<<"TUESDAY"<<")"<<endl;
	}
	else if ( today == wed){
		cout<<"Day no "<<today+1<<"("<<"WEDNESDAY"<<")"<<endl;
	}
	else if( today == thurs){
		cout<<"Day no "<<today+1<<"("<<"THURSDAY"<<")"<<endl;
	}
	else if( today == fri){
		cout<<"Day no "<<today+1<<"("<<"FRIDAY"<<")"<<endl;
	}
	else if( today == sat){
		cout<<"Day no "<<today+1<<"("<<"SATURDAY"<<")"<<endl;
	}
	else{
		cout<<"Day no "<<today+1<<"("<<"SUNDAY"<<")"<<endl;
	}
	
	
	enum colors col;
	col = purple;
	cout<<col;
	return 0;
}
//ENUM is Enumertaion matlab string ko aik integer assign hota ha from 0 ,you can assign integers manually
//readable 
//easier to maintain
