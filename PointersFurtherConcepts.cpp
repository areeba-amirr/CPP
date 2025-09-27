#include<iostream>
using namespace std;
int main(){
	int val = 23;
	int *ptr;
	ptr = &val;
	
	string name = "Areeba";
	string *point;
	point = &name;
	cout<<"Name : "<<name<<endl;
	cout<<"Address : "<< point<<endl;
	cout<<"Nmae via pointer : "<<*point<<endl;
	
	cout<<"Value : "<< val <<endl;
	cout<<"Address : "<< ptr<<endl;
	cout<<"Value via pointer : "<< *ptr<<endl;
	
	//Changing value
	val = 34;
	cout<<"Value : "<< val <<endl;
	cout<<"Address : "<< ptr<<endl;
	cout<<"Value via pointer : "<< *ptr<<endl;
	
	//Changing value using pointer
	*ptr = 90; 
	cout<<"Value : "<< val <<endl;
	cout<<"Address : "<< ptr<<endl;
	cout<<"Value via pointer : "<< *ptr<<endl;
	
	*point = "Areeba Aamir";
	cout<<"Name : "<<name<<endl;
	cout<<"Address : "<< point<<endl;
	cout<<"Nmae via pointer : "<<*point<<endl;
	
	//Mathematics on pointer
	int no1,no2,*ptr1,*ptr2,add,diff,product,div;
	cout<<"Enter Two Numbers:"<<endl;
	cin>>no1;
	cin>>no2;
	ptr1 = &no1;
	ptr2 = &no2;
	add = *ptr1 + *ptr2;
	diff = *ptr1 - *ptr2;
	product = *ptr1 * *ptr2;
	div = *ptr1 / *ptr2;
	cout<<"Add : "<<add<<endl;
	cout<<"Diff : "<<diff<<endl;
	cout<<"Product : "<<product<<endl;
	cout<<"Div : "<<div<<endl;
	return 0;
}
