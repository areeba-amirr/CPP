#include<iostream>
using namespace std;
int main(){
	int no;
	cout<<"Enter Number to print its multiplication table:";
	cin>>no;
	int i = 1;
	while(i <= 10){
		cout<<no<<" x "<<i<<" = "<<no*i<<endl;
		i++;
	}
	return 0;
}

