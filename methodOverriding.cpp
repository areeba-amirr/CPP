//Key Point -> Inheritance is compulsary
//Same return tyype , same parameters just functionality different
//Run-Time Polymorphism
#include<iostream>
using namespace std;
class Person{
	public :
		int no1,no2,no3;
		string name;
		void display(){
			cout<<"Name : "+name<<endl;
		}
	int sum (){
		return  no1+no2;
	}	
};
class Employee : public Person{
	public :
		int age;
		void display(){
			cout<<"Name : "+name<<endl;
			cout<<"Age : "<<age<<endl;
		}
		int sum (){
		return  no1+no2+no3;
	}
};
int main(){
	Person p1;
	p1.name = "Areeba";
	Employee e1;
	e1.age = 18;
	e1.name = "Ahmed";
	p1.display();
	e1.display();
	
	p1.no1 = 10;
	p1.no2 = 20;
	p1.no3 = 30;
	cout<<"Sum : "<<p1.sum()<<endl;
	e1.no1 = 10;
	e1.no2 = 20;
	e1.no3 = 30;
	cout<<"Sum : "<<e1.sum()<<endl;
	return 0;
}
