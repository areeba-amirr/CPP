#include<iostream>
#include<string>
using namespace std;
//Single level
class Specifications{
	public:
   string memory;
   string display;
   void show(){
   	cout<<"Memory : "+memory<<endl;
   	cout<<"Display Size : "+display<<endl;
   }	
};
class info : public Specifications{
	public:
	string brand;
	string color;
	float price;
void	dispaly(){
		cout<<"Brand Name : "+brand<<endl<<"Color : "+color<<"Price : "<<price<<endl;
	}
};
//multiple
class cat{
	public:
	void walk(){
		cout<<"Can Walk"<<endl;	
	}
	};
class dog{
	public:
	void sleep(){
		cout<<"Can Sleep"<<endl;	
	}
	void eat(){
		cout<<"Can Eat"<<endl;	
	}
	};
class monkey : public dog, public cat{
	public:
	void jump(){
		cout<<"Can Jump"<<endl;	
	}
	};	
//multilevel
class Employee{
	public:
	int id;
	string name;
	void info(){
		cout<<"ID : "<<id<<endl<<"Name : "+name<<endl;
	}
};	
class Contact : public Employee{
	public:
	int phone;
	string mail;
	void showInfo(){
		cout<<"Phone Number : "<<phone<<endl<<"Gmail : "+mail<<endl;
	}
};
class About : public Contact{
	public:
	float salary;
	string position;
	void showMe(){
		cout<<"Salary : "<<salary<<endl<<"Position : "+position<<endl;
	}
};
//Hierachical	
class student{
	public :
	int id;
	string name;
	int age;
	void printInfo(){
		cout<<"ID : "<<id<<endl<<"Name : "+name<<endl<<"Age : "<<age<<endl;
	}
};
class academics : public student{ 
public :
	int marks;
	string grade;
	void stdAcademics(){
	cout<<"Marks : "<<marks<<endl<<"Grade : "+grade<<endl ;
	}	
};	
class subject : public student{ 
public :
	string subName;
	void stdSub(){
	cout<<"Learning "+subName<<endl;	}
};
//Hybrid
class base{
	public:
	void showB(){
			cout<<"Base Class"<<endl;
	}
};
class child : public base {   //single
	public:
    void showC(){
			cout<<"Child Class"<<endl;
	}
};
class base1{
	public:
	void showB1(){
			cout<<"Base 1 Class"<<endl;
	}
};
class grandChild: public child,public base1{
	public:
	void showGC(){
		cout<<"Grand Child"<<endl;
	}
};
int main(){
	Specifications laptop;
	info phone;
	info pC;
	laptop.memory = "512GB";
	laptop.display = "16 inches";
	laptop.show();
	//Single Inheritance
	phone.brand = "Samsung";
	phone.color = "White";
	phone.display = "7 inches";
	phone.memory = "256 GB";
	phone.price = 50000;
	phone.show();
	phone.dispaly();
	
	pC.memory = "256 GB";
	pC.display = "18 inches";
	pC.show();
	
	//MultiLevel Inheritance
	monkey m1;
	m1.jump();
	m1.eat();
	m1.sleep();
	m1.walk();
	
	//Multilevel Inheritance
	About emp1;
	emp1.id = 101;
	emp1.name = "Areeba Aamir";
	emp1.phone = 123345788;
	emp1.mail = "areeba@gmail.com";
	emp1.position = "Manager";
	emp1.salary = 80000;
	emp1.info();
	emp1.showInfo();
	emp1.showMe();
	
	//Hierarchical Inheritance
	academics std1;
	std1.id = 10;
	std1.name = "Tahreem";
	std1.age = 19;
	std1.printInfo();
	std1.marks = 89;
	std1.grade = "A";
	std1.stdAcademics();
	
	subject std2;
	std2.id = 12;
	std2.age = 20;
	std2.name = "Rumaisa";
	std2.subName = "Computer";
	std2.stdSub();
	std2.printInfo();
	
	//Hybrid Inheritance
	grandChild g1;
	g1.showGC();
	g1.showC();
	g1.showB();
	g1.showB1();
	
	return 0;
}
