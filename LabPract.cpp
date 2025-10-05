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

/*#include<iostream>
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
}*/





/*Scenario 1: Single Inheritance
You're designing a system to manage employee information. The base class Employee stores basic details such as the employee's name and ID. The class includes a method displayEmployee() that prints the employee's name and ID.
Next, create a class called Manager that inherits from Employee. In addition to the name and ID, each Manager has a department (e.g., "Sales"). Add a method displayDepartment() that shows the manager's department.
In the main() function, create a Manager object. Set the name to your own full name, the employee ID to a sample ID, and the department to "Sales". Then call both displayEmployee() and displayDepartment().
Inheritance type: Single Inheritance
*/
#include<iostream>
using namespace std;
class Employee{
	public :
		int id;
		string name;
		void displayEmployee(){
			cout<<"ID : "<<id<<endl<<"Name : "<<name<<endl;
		}
};
class Manager : public Employee{
	public :
		string dep;
		void displayDepartment(){
			cout<<"Department : "<<dep<<endl;
		}
};
int main(){
	Manager obj;
	obj.id = 101;
	obj.name = "Areeba Aamir";
	obj.dep = "Sales";
	obj.displayEmployee();
	obj.displayDepartment();
	return 0;
}

/*Scenario 2: Multiple Inheritance
You're designing a multimedia system. There are two base classes:
"	Audio stores the audio device name and has a method playSound() that prints "<device> is playing sound."
"	Video stores the video device name and has a method playVideo() that prints "<device> is playing video."
Next, create a class MediaPlayer that inherits from both Audio and Video. It has a method play() that calls both playSound() and playVideo().
In the main() function, create a MediaPlayer object. Set the device names to your choice (e.g., "Sony"), then call the play() method.
Inheritance type: Multiple Inheritance*/
/*#include<iostream>
using namespace std;
class Audio{
	public :
		string device;
		void playSound(){
			cout<<device<<" is playing sound..."<<endl;
		}
};
class Video{
	public :
		string device1;
		void playVideo(){
			cout<<device1<<" is plsaying video..."<<endl;
		}
};
class MediaPlayer : public Audio,public Video{
	public:
		void play(){
			playSound();
			playVideo();
		}
};
int main(){
	MediaPlayer obj;
	obj.device = "Piano";
	obj.device1 = "TV";
	obj.play();
	return 0;
}*/

/*Scenario 3: Multilevel Inheritance
You're building a vehicle management system. The base class Vehicle stores basic information such as speed and has a method displaySpeed().
Create a derived class Car that inherits from Vehicle and adds a fuelType attribute (e.g., "Petrol") and a method displayFuelType().
Next, create a further derived class SportsCar that inherits from Car. This class adds a maxSpeed attribute and a method displayMaxSpeed().
In the main() function, create a SportsCar object. Set the speed, fuel type, and max speed attributes, then call all the display methods: displaySpeed(), displayFuelType(), and displayMaxSpeed().
Inheritance type: Multilevel Inheritance
*/
/*#include<iostream>
using namespace std;
class Vehicle{
	public : 
	int speed;
	void displaySpeed(){
		cout<<"Speed : "<<speed<<"km/h"<<endl;
	}
};
class Car : public Vehicle{ 
public:
string fuelType;
	void displayFuelType(){
		cout<<"Fuel Type : "<<fuelType<<endl;
	}	
};
class SportsCar : public Vehicle{
	public :
int maxSpeed;
	void displayMaxSpeed(){
		cout<<"Max Speed : "<<maxSpeed<<endl;
	}	
};
int main(){
	Car obj1;
	SportsCar obj2;
	obj1.speed= 100;
	obj1.fuelType = "Petrol";
	obj2.speed = 150;
	obj2.maxSpeed = 300;
	obj1.displaySpeed();
	obj1.displayFuelType();
	obj2.displayMaxSpeed();
	obj2.displaySpeed();
	return 0;
}*/

/*Scenario 4: Hierarchical Inheritance
You're designing a shape system. The base class Shape has a method displayShape() that prints "This is a shape."
Create two classes Circle and Rectangle that both inherit from Shape.
"	Circle has a method displayCircle() that prints "This is a circle."
"	Rectangle has a method displayRectangle() that prints "This is a rectangle."
In the main() function, create an object of Circle and an object of Rectangle. For each object, call displayShape() and the specific shape display method.
Inheritance type: Hierarchical Inheritance
*/
/*#include<iostream>
using namespace std;
class Shape{
	public :
		void displayShape(){
			cout<<"This is a Shape"<<endl;
		}
};
class Circle : public Shape{
	public :
		void displayCircle(){
			cout<<"This is a Circle"<<endl;
		}
};
class Rectangle : public Shape{
	public :
		void displayRectangle(){
			cout<<"This is a Rectangle"<<endl;
		}
};
int main(){
	Circle c1;
	c1.displayCircle();
	c1.displayShape();
	Rectangle r1;
	r1.displayRectangle();
	r1.displayShape();
	return 0;
}*/

/*Scenario 5: Hybrid Inheritance 
You're designing an educational platform system.
The base class Person stores the name and age, with a method displayPerson().
Create a derived class Student inheriting from Person, adding studentID and a method displayStudent().
Create another base class Employee that stores an employeeID and has a method displayEmployee().
Create a class TeachingAssistant that inherits from both Student and Employee. It has a method displayTA() that calls displayStudent() and displayEmployee().
In the main() function, create a TeachingAssistant object. Set all the attributes appropriately, then call displayPerson() and displayTA().
Inheritance type: Hybrid Inheritance*/
/*#include<iostream>
using namespace std;
class Person{
	public :
		string name; 
		int age;
		void displayPerson(){
			cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl;
		}
};
class Student : public Person{
	public :
		int stdID;
		void displayStudent(){
			cout<<"Student ID : "<<stdID<<endl;
		}
};
class Employee{
	public :
		int empID;
		void displayEmployee(){
			cout<<"Employee ID : "<<empID<<endl;
		}
};
class TeachingAssistant : public Student , public Employee{
	public :
	void displayTA(){
		Person::displayPerson();
		Student::displayStudent();
		Employee::displayEmployee();
	}
};
int main(){
	TeachingAssistant TA;
	TA.age= 19;
	TA.empID = 101;
	TA.stdID = 88;
	TA.name = "Zara Ahmed";
	TA.displayTA();
	return 0;
}*/

