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
}*/


/*Q5. Smart Device Control An IoT company wants a program that can control different devices. Create a base class Device with a function turnOn() and turnOff(). 
Derive classes Fan, Light, and AC that override these functions with their own messages.Use runtime polymorphism to call functions for each device.*/
/*#include<iostream>
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
}*/

/*Question5, 
Design an Online Wallet System that demonstrates encapsulation by securely managing users' financial data.
Add a TransactionLimit rule:
"	No single withdrawal can exceed 40% of the current balance.
"	If attempted, show a warning message instead of allowing withdrawal.
________________________________________
Main Function Tasks:
"	Create one WalletAccount object.
"	Set account details.
"	Perform a series of deposits and withdrawals with both correct and incorrect PINs.
"	Display the final summary and balance.*/
/*#include<iostream>
using namespace std;
class WalletAccountSystem{
	private :
		int accNo;
		float balance;
		string password;
	public :
		WalletAccountSystem(int acc , float bal , string pass){
		accNo = acc;
		balance = bal;
		password = pass;	
		}
		void transaction(int i , string pass, float withdraw ){
			if(i == accNo && pass == password){
				if(withdraw >= (balance/40)) cout<<"Warning Limit Exceeded!!!!"<<endl;
				else {
					cout<<"withdraw Succeed!!"<<endl;
					balance -= withdraw;
				}
			}
			else cout<<"Invalid Login Credentials!!"<<endl;
		}
		void summary(){
			cout<<"Account Number : " <<accNo<<endl;
			cout<<"Balance : "<<balance<<endl;
		}
};
int main(){
	WalletAccountSystem wa1(2347,8085.89,"s25csc");
	int choice;
	do{
		cout<<"----Wallet Account System------"<<endl;
		cout<<"1. Transaction"<<endl<<"2. Details "<<endl<<"3. Exit "<<endl;
		cin>>choice;
		if(choice == 1){
			int id = 0; string pass; float draw;
			cout<<"Enter Your Account Number :";
			cin>>id;
			cout<<"Enter Your Password :";
			cin>>pass;
			cout<<"Enter Amount to Withdraw :";
			cin>>draw;
			wa1.transaction(id,pass,draw);
		}
		else if (choice == 2){
			wa1.summary();
		}
		else if(choice == 3){
			cout<<"Exiting...."<<endl;
		}
		else cout<<"Invalid Choice!!!"<<endl;
	} while(choice != 3);
	return 0;
}*/
/*Question2,
Suppose we have a class, call it Server, which has some desired functionality. Suppose further that we want to be able to replace it with another class, 
OtherServer, which performs the same task but in a different way. It must be possible to switch between Server and OtherServer without having to recompile the 
classes that call them. Write a program which solves this problem with the help of polymorphism.*/
/*#include<iostream>
using namespace std;
class Server{
	public :
		void work(){
			cout<<"Server is working..."<<endl;
		}
		void off(){
			cout<<"Server is off..."<<endl;
		}
};
class OtherServer :public Server{
	public :
		void work(){
			cout<<"Other Server is working..."<<endl;
		}
		void off(){
			cout<<" Other Server is off..."<<endl;
		}
};
int main(){
	OtherServer os1;
	cout<<"Server Class Functions"<<endl;
    os1.Server :: off();
    os1.Server :: work();
    cout<<"Other Server Class Functions"<<endl;
    os1.OtherServer :: off();
    os1.OtherServer :: work();
	return 0;
}*/

/*Question4,
Create a base class Transport that stores common data such as mode, capacity, and farePerKm.
It should have a method calculateFare(float distance) that computes the total fare based on distance and fare rate.
Now, derive three classes from Transport:
1.	Bus - has an additional attribute routeNumber and a function displaySchedule().
2.	Train - has attributes coachType (like sleeper, economy) and trainNumber.
3.	Plane - has attributes flightCode and hasMealService (boolean).
Each derived class must:
"	Override the calculateFare() method to apply different fare multipliers (e.g., Plane = 3× base fare, Train = 1.5×, Bus = normal fare).
"	Have its own displayDetails() method that shows all data (base + derived).
"	Use protected access for base attributes so derived classes can use them safely.
Finally, in main():
"	show different transport types.
"	Accept distance as input and display the total fare and details for each transport type.*/
#include<iostream>
using namespace std;
class Transport{
	public :
		int fare  = 100;
//		string mode;
		int distance;
	virtual void calculateFare(){
		cout<<"Total Fare : "<<fare*distance<<endl;
	}	
};
class Bus : public Transport{
	public :
		int routeNo;
		void displayrout() {
			cout<<"Route No : "<<routeNo<<endl; 
		}
		 void calculateFare() override{
		cout<<"Total Fare : "<<fare*distance<<endl;
	}	
};

class Plane : public Transport{
	public :
		int flightcode;
		bool meal;
		void displayflight(){
			if(meal){
				cout<<"Meal Taken"<<endl;
				cout<<"Flight Code"<<flightcode<<endl;
			}
			else{
				cout<<"Meal Not Taken"<<endl;
				cout<<"Flight Code"<<flightcode<<endl;	
			}
		}
		void calculateFare() override{
		cout<<"Total Fare : "<<(3*fare)*distance<<endl;
	}
};
class Train : public Transport{
	public :
		int trainNum;
	     string coachType;
		void displayTrain(){
			cout<<"Train Number : "<<trainNum<<endl;
			cout<<"Coach Type : "<<coachType<<endl;
		}
		void calculateFare() override{
		cout<<"Total Fare : "<<(2*fare)*distance<<endl;
	}
};
int main(){
	Transport* t;
	Bus b1;
		Plane p1;
	Train t1;
	int choice ;
	do{
		cout<<"1. Bus "<<endl<<"2. Train "<<endl<<"3. Plane"<<endl<<"4. Exit"<<endl;;
		cin>>choice;
		switch(choice){
			case 1 : {
			cout<<"************BUSES***************"<<endl;
			cout<<"Enter Distance :";
			cin>>b1.distance;
			cout<<"Enter Route No :";
			cin>>b1.routeNo;
				t = &b1;
				b1.displayrout();
			t->calculateFare(); 
				break;
			}

			case 2 : {
				cout<<"************TRAIN***************"<<endl;
			cout<<"Enter Distance :";
			cin>>t1.distance;
			cout<<"Enter Coach Type :";
			cin>>t1.coachType;
			cout<<"Enter Train Number :";
			cin>>t1.trainNum;
				t = &t1;
				t1.displayTrain();
			t->calculateFare(); 
				break;
			}
			case 3 : {
				cout<<"************PLANE***************"<<endl;
				cout<<"Enter Flight Code :";
			cin>>p1.flightcode;
			cout<<"Enter Distance :";
			cin>>p1.distance;
			cout<<"Enter 1 if you want meal else enter 0";
			cin>>p1.meal;
				t = &p1;
				p1.displayflight();
			t->calculateFare(); 
				break;
			}
			case 0 :{
				cout<<"exiting....."<<endl;
				break;
			}
			default : cout<<"invalid choice"<<endl;
		}
		
	}while(choice != 0);
	return 0;
}


