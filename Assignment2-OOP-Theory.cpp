/*Q1. School Attendance System A school wants to record daily attendance of students. Create a class Attendance that stores studentName, rollNo, and status (Present/Absent).
 Use a constructor to initialize data and a member function to display attendance details. Demonstrate creating multiple student objects and showing attendance.*/
/*#include<iostream>
using namespace std;
class Attendance{
	public :
		int  rollNo;
			string name;
			string status;
		Attendance(int a,string b,string c){
			rollNo = a;
			name = b;
			status = c;
			display();	
		}
			void display(){
				cout<<"Roll No : "<<rollNo<<endl;
				cout<<"Name : "<<name<<endl;
				cout<<"Status : "<<status<<endl;
			}
};
int main(){
	Attendance std1(101,"Areeba","Present");
	Attendance std2(102,"Haris","Present");
	Attendance std3(103,"Hania","Absent");
	Attendance std4(104,"Hasnain","Present");
	return 0;
} */

/*Q2. Online Shopping Cart Design a class Product with attributes name, price, and quantity. Add a function calculateBill() that returns total cost for the product.
 Then make a derived class DiscountedProduct that applies a discount percentage on total bill. Display bills for both normal and discounted products.*/
/*#include<iostream>
using namespace std;
class Product{
	public:
		int qty;
		string name;
		int price;
		
		int calculateBills(){
			return price*qty;
		}
};
class DiscountProduct : public Product{
	public :
		float discount(){
			int disc = calculateBills()- price/10;
			return disc;
		}
};
int main(){
	DiscountProduct p1;
	p1.name = "Watch";
	p1.price = 2000;
	p1.qty = 10;
	cout<<"Bill (without 10% off) : "<<p1.calculateBills()<<endl;
	cout<<"Bill (with 10% off) : "<<p1.discount()<<endl;
	return 0;
}*/

//Q3. Hospital Patient Record Create a base class Patient with attributes name, age, and disease. Derive two classes: - InPatient (admitted in hospital) - OutPatient (consultation only)
//Both should have a displayInfo() function, but with different details (like ward number or consultation fee). Use polymorphism to display data of different patient types using base class.
/*#include<iostream>
using namespace std;
class Patient{
	public :
		int age;string name ,disease;
};
class Inpatient : public Patient{
	public :
		void displayInfo(int wardNo, int fee){
			cout<<"Admitted in hospital"<<endl;
			cout<<"Ward Number : "<<wardNo<<endl;
			cout<<"Fee: "<<fee<<endl;
		}
};
class Outpatient : public Inpatient{
	public :
		void displayInfo(int conNo, int fee){
			cout<<"Consultation only"<<endl;
			cout<<"Consultation Number : "<<conNo<<endl;
			cout<<"Fee: "<<fee<<endl;
		}
};
int main(){
	Inpatient ip1;
	ip1.name = "Kainat Aslam";
	ip1.age = 23;
	ip1.disease = "High Fever";
	ip1.displayInfo(102,2000);
	
	Outpatient op1;
	op1.name = "Laiba Faiz";
	op1.age = 25;
	op1.disease = "Food Poisoning";
	op1.displayInfo(3,3000);
	return 0;
}*/

/*Q4. Flight Reservation System Create a class Flight with private members flightNumber, destination, and availableSeats. Use setter and getter functions to update and show details. 
Add a function bookSeat() that decreases available seats by 1 when a ticket is booked. Display updated information after booking.*/
/*#include<iostream>
using namespace std;
class Flight{
	private :
		int flightNumber;
		string destination;
		int availableSeats;
	public :
	void setFNum(int num){
		flightNumber = num;
	}
	void setseats(int seats){
		availableSeats= seats;
	}
	void setDestination(string des){
		destination = des;
	}
	int getfNum(){
		return flightNumber;
	}
	int getseats(){
		return availableSeats;
	}
	string getDestination(){
		return destination;
	}
	int bookedSeats(){
		if(availableSeats){
			cout<<"Seat Booked!!!!"<<endl;
	return	availableSeats -= 1;
}
		else cout<<"Sorry ,no seat available...."<<endl;
	}
	void display(){
	cout<<"Destination : "+destination<<endl;
			cout<<"Flight Number : "<<flightNumber<<endl;
			cout<<"Available Seats : "<<availableSeats<<endl;	
	}	
};
int main(){
	Flight f1;
	f1.setDestination("France");
	f1.setseats(30);
	f1.setFNum(3654);
	f1.bookedSeats();
	f1.bookedSeats();
	f1.bookedSeats();
	f1.bookedSeats();
	f1.display();
	return 0;
}
*/

/*Q5. Smart Device Control An IoT company wants a program that can control different devices. Create a base class Device with a function turnOn() and turnOff(). 
Derive classes Fan, Light, and AC that override these functions with their own messages.Use runtime polymorphism to call functions for each device.*/
#include<iostream>
using namespace std;
class Device{
	public :
		void turnOn(){
			cout<<"Turning On..."<<endl;
		}
		void turnOff(){
			cout<<"Turning Off..."<<endl;
		}
};
class Light : public Device{
	public :
		void turnOn(){
			cout<<"Light Turning On..."<<endl;
		}
		void turnOff(){
			cout<<"Light Turning Off..."<<endl;
		}
};
class Fan : public Device{
	public :
		void turnOn(){
			cout<<"Fan Turning On..."<<endl;
		}
		void turnOff(){
			cout<<"Fan Turning Off..."<<endl;
		}
};
class Ac : public Device{
	public :
		void turnOn(){
			cout<<"AC Turning On..."<<endl;
		}
		void turnOff(){
			cout<<"AC Turning Off..."<<endl;
		}
};
int main(){
	Light l1;
	Ac a1;
	Fan f1;
	l1.turnOff();
	l1.turnOn();
	f1.turnOff();
	f1.turnOn();
	a1.turnOff();
	a1.turnOn();
	return 0;
}



