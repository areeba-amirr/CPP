#include<iostream>
using namespace std;
int max(int no1,int no2){
	if(no1 > no2) return no1;
	else return no2;
}
int main(){
	int no1,no2;
	cout<<"Enter Two Numbers:";
	cin>>no1>>no2;
	cout<<max(no1,no2)<<" is greatest";
	return 0;
}

