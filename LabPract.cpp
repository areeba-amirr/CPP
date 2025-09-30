//#include<iostream>
//using namespace std;
//class Vehicle{
//	public: 
//	string speed;
//	
//	public: void move(){
//		cout<<"Vehicles can move"<<endl;
//	}
//};
//class Car : public Vehicle{
//	public : 
//	string fuelType;
//};
//int main(){
//	Car civic;
//	civic.speed = "100km/h";
//	civic.fuelType = "Petrol";
//	civic.move();
//	cout<<"Speed : "+civic.speed<<endl;
//	cout<<"Fuel Type : "+civic.fuelType<<endl;
//return 0;
//}


//#include<iostream>
//using namespace std;
//class Employee{
//	public:
//	int id;
//	int salary;
//	void dispaly(){
//		cout<<"ID : "<<id<<endl;
//		cout<<"Salary : "<<salary<<endl;
//	}
//};
//class Manager : public Employee{
//	public:
//		void assign(){
//			cout<<"Manager assigns task"<<endl;
//		}
//};
//int main(){
//	Manager m1;
//	m1.id = 101;
//	m1.salary = 100000;
//	m1.dispaly();
//	m1.assign();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Person{
//	public:
//	string name;
//	int age;
//	void introduce(){
//		cout<<"Name : "+name<<endl;
//		cout<<"Age : "<<age<<endl;
//	}
//};
//class Student : public Person{
//	public:
//		int rollNo;
//		void study(){
//			cout<<rollNo<<" student is studying"<<endl;
//		}
//};
//int main(){
//	Student std1;
//	std1.age = 19;
//	std1.name = "Areeba Aamir";
//	std1.rollNo = 101;
//	std1.introduce();
//	std1.study();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Animal{
//	public:
//	void eat(){
//		cout<<"Animal is eating"<<endl;
//	}
//};
//class Dog : public Animal{
//	public:
//		void bark(){
//			cout<<"Dog is barking"<<endl;
//		}
//};
//int main(){
//	Dog pet;
//	pet.eat();
//	pet.bark();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Device{
//	public:
//		string brand;
//	void powerOn(){
//		cout<<brand+" device is powering On...."<<endl;
//	}
//};
//class MobilePhone : public Device{
//	public:
//		void makeCall(){
//			cout<<brand+" device is making call.."<<endl;
//		}
//};
//int main(){
//	MobilePhone phone;
//	phone.brand = "Samsung";
//	phone.makeCall();
//	phone.powerOn();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Study{
//	public:
//	void read(){
//		cout<<"Student is reading book..."<<endl;
//	}	
//};
//class Sport{
//	public:
//	void play(){
//		cout<<"Student is playing football..."<<endl;
//	}	
//};
//class Student : public Study,public Sport{
//	public:
//	void show(){
//		cout<<"Student can do both sports and study.."<<endl;
//	}	
//};
//int main(){
//	Student std1;
//	std1.play();
//	std1.read();
//	std1.show();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Engine{
//	public:
//	void start(){
//		cout<<"Engine Started!!"<<endl;
//	}	
//};
//class Wheel{
//	public:
//	void rotate(){
//		cout<<"Wheels are rotating..."<<endl;
//	}	
//};
//class Car : public Engine,public Wheel{
//	public:
//	void drive(){
//		cout<<"Car is driving smoothly"<<endl;
//	}	
//};
//int main(){
//	Car c1;
//	c1.rotate();
//	c1.start();
//	c1.drive();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Person{
//	public:
//	int age;
//	string name;
//	void introduce(){
//		cout<<"Name : "+ name<<endl;
//		cout<<"Age : "<<age<<endl;
//	}	
//};
//class Student : public Person{
//	public:
//	int rollNo;
//	void study(){
//		cout<<rollNo<<" Student is studying "<<endl;
//	}	
//};
//class GraduateStudent : public Student{
//	public:
//		string thesisTopic;
//	void displayThesis(){
//		cout<<"My Thesis topic is "+thesisTopic<<endl;
//	}	
//};
//int main(){
//	GraduateStudent std1;
//	std1.name = "Sara";
//	std1.age = 23;
//	std1.rollNo = 102;
//	std1.thesisTopic = "Artificial Intelligence";
//	std1.introduce();
//	std1.study();
//	std1.displayThesis();
//	return 0;
//}

#include<iostream>
using namespace std;
class LivingBeing{
	public:
	void breathe(){
		cout<<"Living being is breathing..."<<endl;
	}	
};
class Human : public LivingBeing{
	public:
	void think(){
		cout<<"Human is thinking..."<<endl;
	}
};
class Programmer : public Human{
	public:
		void code()
{
	cout<<"Programmer is writting a code.."<<endl;
}};
int main(){
	Programmer p1;
	p1.breathe();
	p1.think();
	p1.code();
	return 0;
}

