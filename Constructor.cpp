//Constructor  is a special type of method that is automatically called when an object of class is created . It can be parameterized or can be without parameter and can be also overload (constructor overloading)
//Constructor has no return type
//When a derived class inherits from a base class, so after creating object ,it will automatically call base constructor before its own constructor
#include<iostream>
using namespace std;
class Student{
	public :
		//Non-Parameterized Constructor/Default Constructor
		Student(){
			cout<<"Constructor Called!!!!"<<endl;
		}		
};
class Person{
	public :
		//Parameterized Constructor
		Person(string name){
			cout<<"Name : "+name<<endl;
		}
};
class Car{
	public :
		//Constructor Overloading
		Car(){
		cout<<"Car is a vehicle.."<<endl;
		}
		Car(string brand){
			cout<<"Car Brand : "+brand<<endl;
		}
};
class Device{
	public : 
	Device(){
		cout<<"Base Class Constructor..."<<endl;
	}
};
class Light : public Device{
	public :
		Light(){
			cout<<"Derived Class Constructor..."<<endl;
		}
};
int main(){
	Student s1;
	Person p1("Areeba");
//	Car c1;
Car c1("Honda");
Light l1; //Calls both 
	return 0;
}
