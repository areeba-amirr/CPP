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

/*#include<iostream>
using namespace std;
class Animal{
	public:
		void eat(){
			cout<<"Animal is Eating...."<<endl;
		}
		void sleep(){
			cout<<"Animal is Sleeping...."<<endl;
		}
};
class Horse : public Animal{
	public:
		void gallop(){
			cout<<"Horse casn gallop.."<<endl;
		}
		
};
class Dog : public Animal{
	public:
		void bark(){
			cout<<"Dog can bark.."<<endl;
		}
		
};
class Cat : public Animal{
	public:
	void meow(){
			cout<<"Cat can meow.."<<endl;
		}	
};
int main(){
	Horse h1;
	Dog d1;
	Cat c1;
	h1.eat();	h1.sleep();	 h1.gallop();
	d1.bark();	d1.sleep(); d1.eat();
	c1.eat(); c1.sleep(); c1.meow();
	return 0;
}*/

/*#include<iostream>
using namespace std;
class Employee {
	public :
		void work(){
			cout<<"Employee is working...."<<endl;
		}
		void takeBreak(){
			cout<<"Employee is taking break...."<<endl;
		}
};
class Manager : public Employee{
	public:
		void meeting(){
			cout<<"Manager can conduct meetings..."<<endl;
		}
		
};
class Developer : public Employee{
	public:
		void code(){
			cout<<"Developer can wite code..."<<endl;
		}
		
};
class Intern : public Employee{
	public:
		void train(){
			cout<<"Intern can atten training sessions..."<<endl;
		}
};
int main(){
	Manager m1;
	Developer d1;
	Intern i1;
	m1.meeting(); m1.takeBreak(); m1.work();
	d1.work(); d1.takeBreak(); d1.code();
	i1.takeBreak(); i1.train(); i1.work();
	return 0;
}*/

/*#include<iostream>
using namespace std;
class Device {
	public :
		void powerON(){
			cout<<"Device Powered ON...."<<endl;
		}
		void powerOff(){
			cout<<"Device Powered OFF...."<<endl;
		}
};
class Phone : public Device{
	public:
		void call(){
			cout<<"Making a Phone call.."<<endl;
		}
		
};
class Camera : public Device{
	public:
		void click(){
			cout<<"Photo Clicked!!"<<endl;
		}
		
};

int main(){
	Phone p1;
	Camera c1;
	p1.powerON(); p1.powerOff(); p1.call();
	c1.click(); c1.powerOff(); c1.powerON();
	return 0;
}*/

/*#include<iostream>
using namespace std;
class Instrument{
	public:
		void tune(){
			cout<<"Instrument is being tuned"<<endl;
		}
		void play(){
			cout<<"Instrument is playing"<<endl;
		}
};
class StringInstrument : public Instrument {
	public :
		void pluck(){
			cout<<"Plucking the string.."<<endl;
		}
};
class PercussionInstrument : public Instrument  {
	public :
		void beat(){
			cout<<"Beating the percussion.."<<endl;
		}
};
class HybridInstrument : public StringInstrument , public PercussionInstrument {
	public :
		void useAllFeatures(){
		StringInstrument::play();	
		StringInstrument::tune();	
		pluck();
		beat();
		PercussionInstrument::beat();
		}
};
int main(){
	HybridInstrument h1;
	h1.useAllFeatures();
	return 0;
}*/

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
class WorkingStudent : public Student , public Employee{
	public :
	void displayAll(){
		Person::displayPerson();
		Student::displayStudent();
		Employee::displayEmployee();
	}
};
int main(){
	WorkingStudent ws1;
	ws1.age= 19;
	ws1.empID = 101;
	ws1.stdID = 88;
	ws1.name = "Zara Ahmed";
	ws1.displayAll();
	return 0;
}*/
/*Scenario 1: Single Inheritance
You're designing a system to manage employee information. The base class Employee stores basic details such as the employee's name and ID. The class includes a method displayEmployee() that prints the employee's name and ID.
Next, create a class called Manager that inherits from Employee. In addition to the name and ID, each Manager has a department (e.g., "Sales"). Add a method displayDepartment() that shows the manager's department.
In the main() function, create a Manager object. Set the name to your own full name, the employee ID to a sample ID, and the department to "Sales". Then call both displayEmployee() and displayDepartment().
Inheritance type: Single Inheritance
*/
/*#include<iostream>
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
*/
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

/*Scenario 1: Library User System
You're designing a simple system for managing library users. At the core, there's a class called User that stores basic information such as the user's name and ID. The class includes a method displayInfo() that prints the user's name and ID.
Next, you'll create a class called Member that inherits from User. In addition to the name and ID, each Member has a membershipType (e.g., "Regular", "Premium"). You'll add a method displayMembership() that shows the type of membership.
In the main() function, create a Member object. Set the name to your own full name, the ID to your student ID, and the membership type to "Premium". Then call both displayInfo() and displayMembership().*/
/*#include<iostream>
using namespace std;
class User{
	public :
		int id;
		string name;
		void displayInfo(){
			cout<<"Id : "<<id<<endl<<"Name : "<<name<<endl;
		}
};
class Member : public User{
	public :
		string membership;
		void displayMembership(){
			cout<<"MemberShip :"<<membership<<endl;
		}	
};
int main(){
	Member m1;
	m1.name = "Areeba Muhammad Aamir";
	m1.id = 101;
	m1.membership = "Premium";
	m1.displayInfo();
	m1.displayMembership();
	return 0;
}*/

/*Scenario 2: Online Course Enrollment
You're building a system to manage course enrollments. Start by creating a class called Person which stores a name and email address. The class should include a method showDetails() to print this information.
Then, create a class called Learner that inherits from Person. This class adds a courseName property and a method enroll() that prints a message saying the person has enrolled in the course.
In main(), create a Learner object. Set the name to your full name, the email to your university email, and the course to "C++ Programming". Call both methods to show the learner's details and the enrollment message*/
/*#include<iostream>
using namespace std;
class Person{
	public :
		string name;
		string mail;
		void showDetails(){
			cout<<"Name : "<<name<<endl<<"Mail : "<<mail<<endl;
		}
};
class Learner : public Person{
	public :
		string courseProperty;
		void enroll(){
			cout<<"Person has enrolled in this "<<courseProperty<<endl;
		}	
};
int main(){
	Learner l1;
	l1.name = "Areeba Muhammad Aamir";
	l1.mail = "areeba@gmail.com";
	l1.courseProperty = "Science";
	l1.showDetails();
	l1.enroll();
	return 0;
}*/

/*Scenario 3: Student Exam Record
You're creating a program to keep track of student exam results. First, define a class called Student with attributes like studentName and rollNo. It should have a method displayStudent() that prints the student's name and roll number.
Next, create a class called Exam that inherits from Student. This class adds marks for three subjects (e.g., Math, Science, English) and a method displayMarks() that prints all the marks.
In main(), create an Exam object. Set your full name, your real roll number, and enter your own chosen marks for each subject. Then call both methods to display the student's data and marks.*/
/*#include<iostream>
using namespace std;
class Student{
	public:
		int rollNo;
		string name;
		void displayStudent(){
			cout<<"RollNO : "<<rollNo<<endl<<"Name : "<<name<<endl;
		}
};
class Exam : public Student{
	public :
		int maths,english,science;
		void displayMarks(){
			cout<<"Maths: "<<maths<<endl<<"English : "<<english<<endl<<"Science : "<<science<<endl;	
		}	
};
int main(){
	Exam std1;
	std1.name = "Haris Aamir";
	std1.rollNo = 122;
	std1.english = 89;
	std1.maths = 99;
	std1.science = 78;
	std1.displayStudent();
	std1.displayMarks();
	return 0;
}*/

/*Scenario 4: Vehicle Registration System
You're building a registration system for vehicles. First, create a class called Vehicle with properties registrationNumber and ownerName. Include a method showRegistration() to print both values.
Then, make a class called Car that inherits from Vehicle. It adds properties like carModel and year, and has a method showCarDetails() to display that info.
In main(), create a Car object. Set the registration number to your student roll number, the owner name to your name, and enter any car model and year (e.g., "Toyota Corolla", 2020). Call both methods to show the full vehicle info.*/
/*#include<iostream>
using namespace std;
class Vehicle{
	public :
		int regNum;
		string owner;
		void showRegistration(){
			cout<<"Registration Number : "<<regNum<<endl<<"Owner : "<<owner<<endl;	
		}	
};
class Car : public Vehicle{
	public:
		int year;
		string carModel;
		void showCarDetails(){
			cout<<"Car Model : "<<carModel<<endl<<"Year : "<<year<<endl;
		}
};

int main(){
	Car c1;
	c1.regNum = 34455;
	c1.owner = "Ahmed Ali";
	c1.year = 2022;
	c1.carModel = "Civic";
	c1.showCarDetails();
	c1.showRegistration();
	return 0;
}*/

/*Scenario 5: Employee Attendance Tracker
You're creating a simple attendance system. First, define a class called Employee that includes properties for employeeID and name. Include a method logIn() that prints a message like "<name> (ID: <employeeID>) has logged in."
Now create a class called Attendance that inherits from Employee. This class adds the current date and time (you can simulate it with a string), and a method markAttendance() that prints a message with the name and timestamp.
In main(), create an Attendance object. Use your name and student ID as the employee data. Set a date/time like "2025-09-23 09:00AM" and then call both methods to log in and mark attendance.*/

/*#include<iostream>
using namespace std;
class Employee{
	public :
		int empId;
		string name;
		void login(){
			cout<<name <<"("<<empId<<") has logged in"<<endl;	
		}	
};
class Attendance : public Employee{
	public:
		string date;
		string time;
		void markAttendance(){
			cout<<"Attendance markes at "<<date<<"("<<time<<")"<<endl;
		}
};

int main(){
	Attendance a1;
	a1.date = "09-03-2025";
	a1.time = "09:00 AM";
	a1.empId = 101;
	a1.name ="Hasnain Aamir";
	a1.login();
	a1.markAttendance();
	return 0;
}*/

/*Scenario 6: Smart Device System
You're designing a program for a smart electronics store. The base class Device stores the brand name and provides a method powerOn() that prints "<brand> device is now ON."
Then you create two classes:
"	Phone inherits from Device and includes a method makeCall() that prints "<brand> phone is making a call."
"	Camera also inherits from Device and includes a method clickPhoto() that prints "<brand> camera clicked a photo."
Now, you define a hybrid class called SmartPhone that inherits from both Phone and Camera. It has a method useFeatures() that:
"	Calls powerOn() from Phone
"	Calls both makeCall() and clickPhoto()
In main(), create a SmartPhone object. Set the brand to "Samsung" (or your favorite brand), and then call useFeatures() to demonstrate all the functionalities.*/
#include<iostream>
using namespace std;
class Device {
	public :
		string brandName;
		void powerON(){
			cout<<brandName<<" is powred onn...."<<endl;
		}
};
class Phone : public Device{
	public :
		void call(){
			cout<<brandName<<" is making call"<<endl;
		}
};
class Camera : public Device{
	public :
		void clickPhoto(){
			cout<<brandName<<" camera clicked a photo"<<endl;
		}
};
class SmartPhone : public Phone , public Camera{
	public:
		void useFeatures(){
			Phone::powerON();
              call();
			  clickPhoto();
		}
};
int main(){
	SmartPhone sp1;
	sp1.SmartPhone::brandName = "Samasung";
	sp1.useFeatures();
	return 0;
}
