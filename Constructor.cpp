//Constructor  is a special type of method that is automatically called when an object of class is created . It can be parameterized or can be without parameter and can be also overload (constructor overloading)
//Constructor has no return type
//When a derived class inherits from a base class, so after creating object ,it will automatically call base constructor before its own constructor
//If we dont create a constructor ,compiler generates a default constructor having no parameter and empty body
//#include<iostream>
//using namespace std;
//class Student{
//	public :
//		//Non-Parameterized Constructor/Default Constructor
//		Student(){
//			cout<<"Constructor Called!!!!"<<endl;
//		}		
//};
//class Person{
//	public :
//		//Parameterized Constructor
//		Person(string name){
//			cout<<"Name : "+name<<endl;
//		}
//};
//class Car{
//	public :
//		//Constructor Overloading
//		Car(){
//		cout<<"Car is a vehicle.."<<endl;
//		}
//		Car(string brand){
//			cout<<"Car Brand : "+brand<<endl;
//		}
//};
//class Device{
//	public : 
//	Device(){
//		cout<<"Base Class Constructor..."<<endl;
//	}
//};
//class Light : public Device{
//	public :
//		Light(){
//			cout<<"Derived Class Constructor..."<<endl;
//		}
//};
//int main(){
//	Student s1;
//	Person p1("Areeba");
////	Car c1;
//Car c1("Honda");
//Light l1; //Calls both 
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Student{
//	public :
//		Student(){
//			cout<<"Calling a Constructor.."<<endl;
//		}
//};
//class Rectangle{
//	private :
//		int width;
//		int height;
//	public :
//	Rectangle(){
//		width = 10;
//		height = 10;
//	}	
//	void print(){
//		cout<<"Height Of Recatngle : "<<height<<endl;
//		cout<<"Width Of Recatngle : "<<width<<endl;
//	}
//};
//class Number{
//	public:
//		int num;
//		Number(int n){
//			num = n;
//		}
//		~Number(){
//			cout<<"Destructor Called"<<endl;
//		}
//};
//int main(){
////	Student std1;
//Rectangle r1;
//r1.print();
//Number n1(4);
//cout<<n1.num<<endl;
//	return 0;
//}

#include<iostream>
using namespace std;
class Student{
	public :
		int m1,m2,m3,m4;
		Student(int no1,int no2,int no3){
			m1 = no1;
			m2 = no2;
			m3 = no3;
		}
			Student(int no1,int no2,int no3,int no4){
			m1 = no1;
			m2 = no2;
			m3 = no3;
			m4 = no4;
		}
		~Student(){
		}
};
int main(){
	Student s1(90,80,90);
	cout<<s1.m1+s1.m2+s1.m3<<endl;
	Student s2(90,80,90,79);
	cout<<s2.m1+s2.m2+s2.m3+s2.m4<<endl;
	return 0;
}
