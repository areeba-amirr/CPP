#include<iostream>
using namespace std;
int main(){
	int no;
	cout<<"Enter any number:";
	cin>>no;
	if(no % 2 == 0){
		cout<<no<<" is Even";
	}
	else{
		cout<<no<<" is Odd";
	}
	return 0;
}

