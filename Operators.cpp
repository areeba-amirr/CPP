#include<iostream>
using namespace std;
int main(){
	int no1,no2,sum,diff,product,div,rem;
	cout<<"Enter First Number:";
	cin>>no1;
	cout<<"Enter Second Number:";
	cin>>no2;
	cout<<"*********Arithmetic Operators**********"<<endl;
	cout<<"SUM :"<<no1+no2<<endl;
	cout<<"DiFF :"<<no1-no2<<endl;
	cout<<"PRODUCT :"<<no1*no2<<endl;
	cout<<"DIV:"<<no1/no2<<endl;
	cout<<"REMAINDER :"<<no1%no2<<endl;
	cout<<"*********Relational Operators**********"<<endl;
	cout<<"no1 > no2? "<<(no1>no2)<<endl;
	cout<<"no1 < no2? "<<(no1<no2)<<endl;
	cout<<"no1 == no2? "<<(no1==no2)<<endl;
	cout<<"no1 != no2? "<<(no1!=no2)<<endl;
	cout<<"no1 >= no2? "<<(no1>=no2)<<endl;
	cout<<"no1 <= no2? "<<(no1<=no2)<<endl;
	cout<<"*********Logical Operators**********"<<endl;
	cout<<"no1 != no2 && no1 > no2 ? "<<(no1 != no2 && no1 > no2)<<endl;
	cout<<"no1 == no2 || no1 != no2? "<<(no1==no2 || no1 != no2)<<endl;
	cout<<"!no1 > no2? "<<(!(no1>no2))<<endl;
	cout<<"*********Ternary Operators**********"<<endl;
	cout<<"Conditions:"<< (no1>no2 ?"Condition True":"Condition false")<<endl;
	cout<<"*********Assignment Operators**********"<<endl;
	cout<<"Pre-Increment:"<<(++no1)<<endl;
	cout<<"Post-Increment:"<<(no1++)<<endl;
	cout<<"Pre-Decrement:"<<(--no1)<<endl;
	cout<<"Post-Decrement:"<<(no1--)<<endl;
	cout<<"no1 += no2:"<<(no1+= no2)<<endl;
	cout<<"no1 -+ no2:"<<(no1 -+ no2)<<endl;
	return 0;
}
