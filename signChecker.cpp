#include<iostream>
using namespace std;
int main(){
	int no;
	cout<<"Enter any number:";
	cin>>no;
	if(no > 0){
		cout<<no<<" is Positive";
	}
	else if(no < 0){
		cout<<no<<" is Negative";
	}
	else{
		cout<<no<<" is Zero";
	}
	return 0;
}

