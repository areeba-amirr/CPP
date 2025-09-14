#include<iostream>
using namespace std;
int main(){
	int no1, no2, choice;
	cout<<"Enter Two Numbers:";
	cin>>no1>>no2;
	cout<<"Enter Your Choice:"<<endl<<"1. Addition"<<endl<<"2. Substraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl;
	cin>>choice;
	switch(choice){
		case 1 : cout<<no1<<"+"<<no2<<" = "<<no1+no2; break;
		case 2 : cout<<no1<<"-"<<no2<<" = "<<no1-no2; break;
		case 3 : cout<<no1<<"*"<<no2<<" = "<<no1*no2; break;
		case 4 : cout<<no1<<"/"<<no2<<" = "<<no1/no2; break;
		default : cout<<"Invalid Choice";
	}
	return 0;
}

