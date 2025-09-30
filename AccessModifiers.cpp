#include<iostream>
using namespace std;
class Bank{
		    
	public :	int accNo;
	private : int password = 292002;
	protected :	int balance = 800000;
	public:
	 void addPass(){
		cout<<"Your Pass key is "<<password<<endl;
	}
	void AccountNo(){
		cout<<"Accout Number : "<<accNo<<endl;
	}
};
class Operator : public Bank{
	public :
	void showBalance(){
		cout<<"Total Balance : "<<balance<<endl;
	}
};

//Protected
class Student{
	protected:
	int id = 101;
	string name = "Tahreem";
};
class Child : public Student{
	public :
	void info(){
		cout<<"Id : "<<id<<endl;
		cout<<"Name : "+name<<endl;
	}
};

//Private
class Security{
	private :
	int pass = 212211;
	
	public : 
	void display (){
		cout<<"Password: "<<pass<<endl;
	}
};
int main(){
//	Operator op1;
//	op1.accNo = 10102;
//	op1.AccountNo();
//	op1.addPass();
//	op1.showBalance();

//protectd 
//Child c1;
//c1.info();

//Private
Security s1;
s1.display();
	return 0;
}
/*Public -> access every where
Private -> access is restricted (only in same class)
Protected -> access is restricted (only in derived class)*/


