#include<iostream>
using namespace std;
//Default Parameter
int square (int no = 0 ){ 
	return no*no;
}
string display (string name = "No value" ){ 
	return name;
}
//Pass by Reference
int swap (int &no1,int &no2){
	int temp = no1;
	no1 = no2;
	no2 = temp ;
}
//passing array 
int sum(int num[]){  //size will automatically pass
	int sum = 0;
	for(int i = 0; i <= 9 ;i++){
		sum += num[i];
	}
	return sum;
}
//passing structure
struct student {
	int id;
	int age;
}s1;
void display(student s1){
	cout<<"Id:"<<s1.id<<endl;
	cout<<"Age:"<<s1.age<<endl;
}
struct employee {
	int id;
	int age;
}e1;
void show(employee e1){
	cout<<"Id:"<<e1.id<<endl;
	cout<<"Age:"<<e1.age<<endl;
}
int main(){
	//Default Parameter testing
	cout<<square(4)<<endl;
	cout<<square(9)<<endl;
	cout<<square()<<endl;
	cout<<display("Areeba")<<endl;
	cout<<display()<<endl;
	//Pass by Reference testing
	int no1 = 10, no2 = 20;
	cout<<"Value before swapping"<<endl;
	cout<<"No1:"<<no1;
	cout<<" No2:"<<no2<<endl;
	
	swap(no1,no2);
	
	cout<<"Value after swapping"<<endl;
	cout<<"No1:"<<no1;
	cout<<" No2:"<<no2<<endl;
	//Passing array testing
	int num [] = {2,3,4,5,6,7,8,8,8,6};  
	cout<<"SUM:"<<sum(num)<<endl;
	//Passing structure testing
	s1.id = 101;
	s1.age = 19;
	display(s1);
	e1.id = 102;
	e1.age = 20;
	show(e1);
	return 0;
}
