#include<iostream>
using namespace std;
bool isEven(int num){
	if(num % 2 == 0) return true;
	else return false;
}
int main(){
	int no;
	cout<<"Enter Any Number:";
	cin>>no;
	cout<<isEven(no);
	return 0;
}

