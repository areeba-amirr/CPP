/*7.	In this scenario, a class hierarchy begins with BaseStage, which has print methods to indicate that the first stage of a system or structure 
has been initialized. The next class, MidStage, inherits from BaseStage and adds more print statements, showing that it is expanding on the 
behavior of its parent by adding middle-level initialization messages like "MidStage extending BaseStage functionality." Then comes TopStage, 
which inherits from MidStage and completes the entire sequence with detailed print messages such as "TopStage reached final extension point." 
The moment an object of TopStage is created, the print sequence unfolds like a staircase - beginning from the base and moving upward through 
every stage - showing which constructors are called automatically and how each inherited method is accessible at every level. The output flow 
would visually represent the journey from the base to top layer in a clear order, making it easy to trace how multiple classes are linked in one
 long chain of inheritance, where each new class builds directly on the previous one.*/
 /*#include<iostream>
 using namespace std;
 class BaseStage{
 	public:
 		void print(){
 			cout<<"First stage of a system"<<endl;
		 }
 };
 class MiddleStage : public BaseStage{
 	public:
 		void print(){
 			cout<<"Middle stage of a system"<<endl;
		 }
 };
  class FinalStage : public MiddleStage{
 	public:
 		void print(){
 			cout<<"Final stage of a system"<<endl;
		 }
 }; 
 int main(){
 FinalStage f1;
 	f1.BaseStage::print();
 	f1.MiddleStage::print();
 	f1.FinalStage::print();
 	return 0;
 }*/
 
/* 4.	A base class Root gives basic print functions for identity and start messages. Two classes DerivedA and DerivedB both inherit from Root,
printing their own initialization statements along with the parent's. Then a new class FinalDerived inherits from both DerivedA and DerivedB, 
 combining two inheritance paths that both trace back to Root. This causes the diamond inheritance effect, where FinalDerived must handle the 
ambiguity of which Root constructor or print function to use. The scenario focuses only on showing how hybrid inheritance merges both multiple
and multilevel relationships - where one class indirectly inherits the same base through multiple paths - making it the most complex and
/*lengthy inheritance pattern.*/
/*#include<iostream>
using namespace std;
class Root{
	public:
		void print(){
			cout<<"Root Class"<<endl;
		}
};
class DerivedA : public Root{
	public : 
	void print1(){
		cout<<"Derivred A Class"<<endl;
	}
};
class DerivedB : public Root{
	public : 
	void print2(){
		cout<<"Derivred B Class"<<endl;
	}
};
class Final : public DerivedA , public DerivedB{
	public : 
	void print3(){
		cout<<"Final Class"<<endl;
		cout<<"Calling Print via  Derived A Class"<<endl;
		DerivedA::print(); //resolving diamond problem by uisng scope resolution 
		cout<<"Calling Print via  Derived B Class"<<endl;
		DerivedB::print();
		cout<<"Calling Print1 via  Derived A Class"<<endl;
		DerivedA::print1();
		cout<<"Calling Print2 via  Derived B Class"<<endl;
		DerivedB::print2();
	
	}
};
int main(){
	Final f1;
	f1.print3();
	return 0;
}
*/
/*#include<iostream>
using namespace std;
class BaseCore{
	public:
		void printStart(){
			cout<<"Starting"<<endl;
		}
		void printProcess(){
			cout<<"Processing"<<endl;
		}
		void printEnd(){
			cout<<"Ending"<<endl;
		}
};
class Alpha : public BaseCore{
	public:
		void printStart(){
			cout<<"ALpha Starting"<<endl;
		}
		void printProcess(){
			cout<<"Alpha Processing"<<endl;
		}
		void printEnd(){
			cout<<"Alpha Ending"<<endl;
		}
};
class Beta : public BaseCore{
	public:
		void printStart(){
			cout<<"Beta Starting"<<endl;
		}
		void printProcess(){
			cout<<"Beta Processing"<<endl;
		}
		void printEnd(){
			cout<<"Beta Ending"<<endl;
		}
};
int main(){
	Alpha A;
	Beta B;
	A.BaseCore::printStart();
	A.Alpha::printStart();
	A.BaseCore::printProcess();
	A.Alpha::printProcess();
	A.BaseCore::printEnd();
	A.Alpha::printEnd();
	
	B.BaseCore::printStart();
	B.Beta::printStart();
	B.BaseCore::printProcess();
	B.Beta::printProcess();
	B.BaseCore::printEnd();
	B.Beta::printEnd();
	return 0;
}*/

/*#include<iostream>
using namespace std;
class Attendance{
	public :
		int  rollNo;
		string name;
		bool status;

			void display(){
				cout<<"Roll No : "<<rollNo<<endl;
				cout<<"Name : "<<name<<endl;
				if(status) cout<<name+" is Present"<<endl;
				else cout<<name+" is Absent"<<endl;
			}
};
int main(){
	Attendance a1,a2,a3,a4;
	cout<<"--Stusent 1--"<<endl;
	cout<<"Enter Name :";
	getline(cin,a1.name);
	cout<<"Wnter RollNo :";
	cin>>a1.rollNo;
	cout<<"Enter 1 if Present else 0";
	cin>>a1.status;
	a1.display();
	
		cout<<"--Stusent 2--"<<endl;
			cin.ignore();
	cout<<"Enter Name :";
	getline(cin,a2.name);
	cout<<"Wnter RollNo :";
	cin>>a2.rollNo;
	cout<<"Enter 1 if Present else 0";
	cin>>a2.status;
	a2.display();
	
		cout<<"--Stusent 3--"<<endl;
			cin.ignore();
	cout<<"Enter Name :";
	getline(cin,a3.name);
	cout<<"Wnter RollNo :";
	cin>>a3.rollNo;
	cout<<"Enter 1 if Present else 0";
	cin>>a3.status;
	a3.display();
	
		cout<<"--Stusent 4--"<<endl;
			cin.ignore();
	cout<<"Enter Name :";
	getline(cin,a4.name);
	cout<<"Wnter RollNo :";
	cin>>a4.rollNo;
	cout<<"Enter 1 if Present else 0";
	cin>>a4.status;
	a4.display();
}*/

/*#include<iostream>
using namespace std;
class Product{
	public:
		int qty;
		string name;
	float price;
		
	float calculateBills(){
			return price*qty;
		}
};
class DiscountProduct : public Product{
	public :
		float calculateBills(){
			float bill =  Product::calculateBills();
			if(bill >= 10000) {
			bill -= bill/10;
			return bill;
			}
			else if(bill >= 20000) {
			bill -= bill/15;
			return bill;
			}
			else if(bill >= 30000) {
			bill -= bill/20;
			return bill;
			}
			else if(bill < 10000) {
			bill -= bill/5;
			return bill;
			}
		}
};*/

/*#include<iostream>
using namespace std;
class Bank{
	private :
		int pin;
		string accNo;
		double balance;
	public :
	void setAttribute(int p, string acc, double bal){
		pin = p;
		accNo = acc;
		balance = bal;
	}
	int getPass(){ return pin; }	
	string getAcc(){ return accNo; }	
	double getbal(){ return balance; }	
	
	void deposite(int pass, string acc){
		float dep;
		if(acc == getAcc() && pass == getPass()){
			cout<<"Enter Amount :";
			cin>>dep;
			balance += dep;
			cout<<"Deposited Succeed"<<endl;
		}
		else cout<<"Invalid Credential"<<endl;
	}
	void withdraw(int pass , string acc){
		float with;
		if(acc == getAcc() && pass == getPass()){
			cout<<"Enter Amount :";
			cin>>with;
		if(with < getbal()){
			balance -= with;
			cout<<"Withdraw Succeed"<<endl;
		}
		else cout<<"Limit Exceed"<<endl;
		}
		else cout<<"Invalid Credential"<<endl;	
	}
	void details(){
		cout<<"Account Number : "<<getAcc()<<endl;
		cout<<"Total Balance : "<<getbal()<<endl;
	}
};
class Premium : public Bank{
	public :
		int interestPercent ;
	void details(){
	float bal = getbal();
		cout<<"Account Number : "<<getAcc()<<endl;
	 bal += (bal/interestPercent)*100;
		cout<<"Total Balance : "<<bal<<endl;
	}
};
int main(){
	Bank b1;
	b1.setAttribute(123456,"PAN2234",900000.899);
	cout<<"Deposite---"<<endl;
	b1.deposite(123456,"PAN2234");
	cout<<"Withdraw---"<<endl;
	b1.withdraw(123456,"PAN2234");
	b1.details();
	
	Premium p1;
	p1.setAttribute(123490,"PAN223904",9090);
	p1.interestPercent = 10;
	cout<<"Deposite---"<<endl;
	p1.deposite(123490,"PAN223904");
	cout<<"Withdraw---"<<endl;
	p1.withdraw(123490,"PAN223904");
	p1.Premium::details();
	return 0;
}*/

/*#include<iostream>
using namespace std;
class Device{
	private :
		int hours;
		int rate;
	public :
	void setAttributes(int h, int r){
		hours = h;
		rate = r;
	}
	int gethour(){ return hours;	}	
	int getRate(){ return rate;	}	
	
	void powerConsumed(){
		cout<<"Power Usage :"<<getRate()<<" watt"<<endl;
		float con = (gethour() * getRate())/1000;
		cout<<"Power Consumed :"<<con<<" kwh"<<endl;
	}
};
class AC : public Device{
	public :
		void powerConsumed(){
		cout<<"Power Usage :"<<getRate()<<" watt"<<endl;
		float con = (gethour() * getRate())/1000;
		cout<<"Power Consumed :"<<con*2<<" kwh"<<endl;
	}
};
class Refrigerator: public Device{
	public :
		void powerConsumed(){
		cout<<"Power Usage :"<<getRate()<<" watt"<<endl;
		float con = (gethour() * getRate())/1000;
		cout<<"Power Consumed :"<<con*8<<" kwh"<<endl;
	}
};
int main(){
	Device d1;
	AC a1; Refrigerator r1;
	a1.setAttributes(5,2000);
	a1.powerConsumed();
	r1.setAttributes(5,2000);
	r1.powerConsumed();
	return 0;
}*/

/*#include<iostream>
using namespace std;
class Telecom{
	private :
		string phone;
		int recharge;
	public :
	void setAttribute(string p, int r){
		phone = p;
		recharge = r;
	}int getRecharge(){ return recharge; }
	string getPhone(){ return phone; }	
	
	void calculateRecharge(){
		cout<<"Phone Number : "<<getPhone()<<endl;
		cout<<"Total Recharge : "<<getRecharge()<<endl;
	}
};
class PrePaid : public Telecom{
	public :
	void calculateRecharge(){
		int rec = getRecharge();
		cout<<"Phone Number (Pre-Paid Customer): "<<getPhone()<<endl;
		if(getRecharge() > 1500){
			rec += (rec*15)/100;
			cout<<"Total Recharge With Bonus : "<<rec<<endl;
		}
		else cout<<"Total Recharge Without Bonus : "<<getRecharge()<<endl;
	}	
};
class PostPaid : public Telecom{
	public :
		int delay = 0;
	void calculateRecharge(){
		cout<<"Phone Number (Post-Paid Customer): "<<getPhone()<<endl;
		cout<<"Total Recharge : "<<getRecharge()<<endl;
		if(delay){
				 cout<<"Late Fee Charges : "<<delay*10<<endl;
		}
	}	
};
int main(){
	PrePaid pp1;
	pp1.setAttribute("0315-9865433",1800);
	pp1.calculateRecharge();
	
	PostPaid pp2;
	pp2.delay= 10;
	pp2.setAttribute("098653221123",4000);
	pp2.calculateRecharge();
	return 0;
}

*/
/*#include<iostream>
using namespace std;
class Flight{
	private :
		string name;
		string destination;
		int basePrice;
		int qty;
	public :
	void setAttribute(string d,string n, int q,int p){
		basePrice = p;
		destination = d;
		qty = q;
		name = n;		
	}
	int getQty(){ return qty; }
	string getName(){ return name; }
	string getDestination(){ return destination; }	
	int getPrice(){ return basePrice; }	
	
	void calculate(){
		cout<<"Name : "<<getName()<<endl;
		cout<<"Total Qunatity  : "<<getQty()<<endl;
		cout<<"Destination : "<<getDestination()<<endl;
		cout<<"Bill : "<<getPrice()*getQty()<<endl;
	}
};
class Economy : public  Flight{
	public :
	void calculate(){
		cout<<"E C O N  O M Y    C L A S S"<<endl;
		int base = getPrice()*getQty();
		cout<<"Name : "<<getName()<<endl;
		cout<<"Total Qunatity  : "<<getQty()<<endl;
		cout<<"Destination : "<<getDestination()<<endl;
		if(getQty() > 5 && getQty() < 15)
		cout<<"Bill after 5% off : "<<base-(base/100)*5<<endl;
		else if(getQty() >= 15)
		cout<<"Bill after 10% off : "<<base-(base/100)*10<<endl;
		else cout<<"Bill (No Off): "<<base<<endl;
	}	
};

class Business: public  Flight{
	public :
	void calculate(){
		cout<<"B U S I N E S S    C L A S S"<<endl;
		int base = getPrice()*getQty();
		cout<<"Name : "<<getName()<<endl;
		cout<<"Total Qunatity  : "<<getQty()<<endl;
		cout<<"Destination : "<<getDestination()<<endl;
		if(getQty() > 5 && getQty() <15)
		cout<<"Bill after 10 % off : "<<base-(base/100)*10<<endl;
		else if(getQty() >= 15 && getQty() < 30)
		cout<<"Bill after 20% off : "<<base-(base/100)*20<<endl;
		else if(getQty() >=30)
		cout<<"Bill after 25% off : "<<base-(base/100)*25<<endl;
		else cout<<"Bill (No Off): "<<base<<endl;
	}	
};
int main(){
	Economy e1;
	Business b1;
	
	e1.setAttribute("Lahore","Ali",15,9000);
	e1.calculate();
	
	b1.setAttribute("Lahore","Ahmed",15,12000);
	b1.calculate();
	
}*/

/*#include<iostream>
using namespace std;
class Property{
	private :
		string owner;
		double propertyValue;
		int size; //in sq feet
	public :
	void setAttribute(double p,string o, int s){
		propertyValue = p;
		owner = o;
		size = s;		
	}
	string getOwner(){ return owner; }
	int getSize(){ return size; }
	double getProperty(){ return propertyValue; }	
	
	void calculateTax(){
		cout<<"Owner : "<<getOwner()<<endl;
		cout<<"Size  : "<<getSize()<<endl;
		cout<<"Property Value : "<<getProperty()<<endl;
	}
};
class House : public  Property{
	public :
	void calculateTax(){
		float tax;
		cout<<"Owner : "<<getOwner()<<endl;
		cout<<"Size  : "<<getSize()<<endl;
		cout<<"Property Value : "<<getProperty()<<endl;
		if(getSize() < 1500)
		tax = (getProperty()/100)*5;
		else if(getSize() >= 1500 && getSize() < 2500)
		tax = (getProperty()/100)*10;
		else if(getSize() >= 2500 && getSize() < 3500)
		tax = (getProperty()/100)*15;
		else	tax = (getProperty()/100)*20;
		
		cout<<"Yearly Tax : "<<tax*12<<endl;
	}	
};

class Shop : public  Property{
	public :
	void calculateTax(){
		float tax;
		cout<<"Owner : "<<getOwner()<<endl;
		cout<<"Size  : "<<getSize()<<endl;
		cout<<"Property Value : "<<getProperty()<<endl;
		if(getSize() < 800)
		tax = (getProperty()/100)*5;
		else if(getSize() >= 800 && getSize() < 1500)
		tax = (getProperty()/100)*10;
		else if(getSize() >= 1500 && getSize() < 2500)
		tax = (getProperty()/100)*15;
		else	tax = (getProperty()/100)*20;
		
		cout<<"Yearly Tax : "<<tax*12<<endl;
	}	
};
int main(){
	House h1;
	h1.setAttribute(2000000,"Ali Ahmed",3500);
	h1.calculateTax();
	Shop s1;
	s1.setAttribute(5000000,"Fahad Ali",2000);
	s1.calculateTax();	
}*/

/*#include<iostream>
using namespace std;
class Bank{
	private :
		int pin;
		string accNo;
		double balance;
	public :
	void setAttribute(int p, string acc, double bal){
		pin = p;
		accNo = acc;
		balance = bal;
	}
	void setBalance(double newB){
		balance = newB;
	}
	int getPass(){ return pin; }	
	string getAcc(){ return accNo; }	
	double getbal(){ return balance; }	
	
	void deposite(int pass, string acc){
		double dep,newB;
		if(acc == getAcc() && pass == getPass()){
			cout<<"Enter Amount :";
			cin>>dep;
			newB = getbal() + dep;
			setBalance(newB);
			cout<<"Deposited Succeed"<<endl;
		}
		else cout<<"Invalid Credential"<<endl;
	}
	void withdraw(int pass , string acc){
		double with, newB;
		if(acc == getAcc() && pass == getPass()){
			cout<<"Enter Amount :";
			cin>>with;
		if(with < getbal()){
			newB = getbal() - with;
			setBalance(newB);
			cout<<"Withdraw Succeed"<<endl;
		}
		else cout<<"Limit Exceed"<<endl;
		}
		else cout<<"Invalid Credential"<<endl;	
	}
	void details(){
		cout<<"Account Number : "<<getAcc()<<endl;
		cout<<"Total Balance : "<<getbal()<<endl;
	}
};
class Regular : public Bank{
	public :
	void withdraw(int pass , string acc){
		double with, newB;
		if(acc == getAcc() && pass == getPass()){
			cout<<"Enter Amount :";
			cin>>with;
		if(with < getbal()){
			newB = getbal() - with + (with/100)*2;
			setBalance(newB);
			cout<<"Withdraw Succeed"<<endl;
		}
		else cout<<"Limit Exceed"<<endl;
		}
		else cout<<"Invalid Credential"<<endl;	
	}
};
class Business  : public Bank{
	public :
	void withdraw(int pass , string acc){
		double with, newB;
		if(acc == getAcc() && pass == getPass()){
			cout<<"Enter Amount :";
			cin>>with;
		if(with < getbal()){
			newB = getbal() - with - (with/100)*1.5;
			setBalance(newB);
			cout<<"Withdraw Succeed"<<endl;
		}
		else cout<<"Limit Exceed"<<endl;
		}
		else cout<<"Invalid Credential"<<endl;	
	}
};
int main(){
	Regular r1;
	r1.setAttribute(123456,"PAN2234",900000.899);
	cout<<"Deposite---"<<endl;
	r1.deposite(123456,"PAN2234");
	cout<<"Withdraw---"<<endl;
	r1.withdraw(123456,"PAN2234");
	r1.details();
	
	Business p1;
	p1.setAttribute(123490,"PAN223904",9999999);
	cout<<"Deposite---"<<endl;
	p1.deposite(123490,"PAN223904");
	cout<<"Withdraw---"<<endl;
	p1.withdraw(123490,"PAN223904");
	p1.details();
	return 0;
}*/

/*
#include<iostream>
using namespace std;
class University{
	private :
		int rollNo;
		string name;
		float marks;
	public :
	void setAttribute(int r, string n, float m){
		rollNo = r;
		name = n;
		marks = m;
	}
	void setMarks(float newB){
		marks = newB;
	}
	int getRollNo(){ return rollNo; }	
	string getName(){ return name; }	
	float getMarks(){ return marks; }	
	
	void details(){
		cout<<"Name  : "<<getName()<<endl;
		cout<<"Roll No: "<<getRollNo()<<endl;
		cout<<"Marks : "<<getMarks()<<endl;
	}
};
class UnderGrad: public University{
	public :
		bool internship;
	void details(){
		float newM;
		cout<<"Name  : "<<getName()<<endl;
		cout<<"Roll No: "<<getRollNo()<<endl;
		if(internship){
			newM = getMarks() + (getMarks()/100)*5;
			setMarks(newM);
		}
		cout<<"Marks : "<<getMarks()<<endl;
	}
};
class PostGrad: public University{
	public :
			bool thesis;
	void details(){
		float newM;
		cout<<"Name  : "<<getName()<<endl;
		cout<<"Roll No: "<<getRollNo()<<endl;
		if(thesis){
			newM = getMarks() - (getMarks()/100)*10;
			setMarks(newM);
		}
		cout<<"Marks : "<<getMarks()<<endl;
	}
};
int main(){
	UnderGrad ug;
	PostGrad pg;
	cout<<"Under Graduate"<<endl;
	ug.setAttribute(101,"areeba",89.6);
	ug.internship = 1;
	ug.details();
	cout<<"Post Graduate"<<endl;
	pg.setAttribute(101,"areeba",89.6);
	pg.thesis = 1;
	pg.details();
	return 0;
}*/

#include<iostream>
using namespace std;
class University{
	private :
		int rollNo;
		string name;
		float marks;
	public :
	void setAttribute(int r, string n, float m){
		rollNo = r;
		name = n;
		marks = m;
	}
	int getRollNo(){ return rollNo; }	
	string getName(){ return name; }	
	float getMarks(){ return marks; }
	
};
class UnderGrad: public University{
	public :
		bool internship;
	void setInt(int r,string n , float m, bool i){
		internship = i;
		setAttribute(r,n,m);
	}
	bool getInt(){ return internship;
	}
};
int main(){
	UnderGrad gg;
	gg.setInt(101,"Sara",77.0,1);
	cout<<gg.getInt()<<endl<<gg.getMarks()<<endl<<gg.getName()<<endl<<gg.getRollNo()<<endl;

	return 0;
}
