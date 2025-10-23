/*Question3,
Suppose you have a class Notification that sends alerts via SMS. You now want to also send alerts via Email, but without modifying the main
program that sends notifications.Implement this scenario using polymorphism.*/
/*#include<iostream>
using namespace std;
class Notification{
	public :
		virtual void alert(){ //using virtual keyword so both base and derived class function can be called
			cout<<"Alert Via SMS..."<<endl;
		}
};
class Email : public Notification{
	public :
		void alert() override { //using override notation so compiler will let me know when override is not occuring
			cout<<"Alert Via Mail..."<<endl;
		}
		//Not define in base class
		void print(){
			cout<<"Helloo..."<<endl;
		}
};
int main(){
	//*n is a pinter variable that makes base class pointer
	Notification *n;  //Base Class Pointer
	Notification sms;
	Email mail;
	
	n = &sms; 
	n->alert(); 	//Actual Runtime Polymorphism...
	
	n = &mail;
	n->alert();
//	n->print() error beacuse base class pointer only call those functions who are defined in base class then override later on
//jiska address store hoga n me vo function call hoga 
	return 0;
}*/

//Withou Virtual keyword
/*#include<iostream>
using namespace std;
class Notification{
	public :
	 void alert(){ 
			cout<<"Alert Via SMS..."<<endl;
		}
};
class Email : public Notification{
	public :
		void alert() { 
			cout<<"Alert Via Mail..."<<endl;
		}
		//Not define in base class
		void print(){
			cout<<"Helloo..."<<endl;
		}
};
int main(){
	Notification *n;  //Base Class Pointer
	Notification sms;
	Email mail;
	
	n = &sms; 
	n->alert(); 	//Actual Runtime Polymorphism...
	
	n = &mail;
	n->alert();*/
//calls both time the base function "Alert Via SMS"
/*	return 0;
}*/

//imp point : override ka matlab hota ha kisi virtual function ko override krna toh agr function virtual hoag hee nhi toh override notation error dyga
//Virtual keyword ka matlab k ye runtime pr decide krya k function ka konsa version chalan ha base wala ya derived class wala



/*#include<iostream>
using namespace std;
class Account{
	private :
		string accNo;
		int balance;
		
	public :
			void setAccNo(string acc){
				accNo =acc;
			}
			void setBal(int bal){
				balance = bal;
			}
			int getBal(){
				return balance;
			}
			string getAcc(){
				return accNo;
			}
			void deposite(int amt){
				balance += amt;
				cout<<"Deposite Succeed!"<<endl;
			}
			void withdraw(int amt){
				if(amt < balance){
				balance -= amt;
				cout<<"Withdraw Succeed!"<<endl;}
				else{
					cout<<"Not Enough Money.."<<endl;
				}
			}
			void checkBalance(){
				string acc;
				cout<<"Enter Account Number";
				cin>>acc;
				if(accNo == acc){
					cout<<"Total Balance : "<<balance<<endl;
				}
				else {
					cout<<"Invalid Account Number"<<endl;
				}
			}	
};
class SavingAccount : public Account{
	public :
		 void calculateInterest(){
			int interest ;
			if(getBal() > 50000){
			interest = getBal()/10;
			cout<<"Total interest Per Month : "<<interest<<endl;}
			 else if(getBal() > 80000){
			interest = getBal()/15;
			cout<<"Total interest Per Month : "<<interest<<endl;}
			else if(getBal() > 100000){
			interest = getBal()/20;
			cout<<"Total interest Per Month : "<<interest<<endl;}
			else if(getBal() < 50000){
			cout<<"No interest Applied"<<endl;}
		}
}; 
class CurrentAccount : public SavingAccount{
	public :
	void calculateInterest(){
		cout<<"No Interest Applied on Current account.."<<endl;
	}	
}; 
int main(){
//	SavingAccount *SA;
	CurrentAccount CA;
	SavingAccount SA;
	int choice ;
	do{
		cout<<"1. Current Account "<<endl<<"2. Saving Account "<<endl<<"3. Check Balance"<<endl<<"0. Exit"<<endl;
		cin>>choice;
		switch(choice){
			case 1:{
				string acc;
				int choose,bal;
				cout<<"Enter Account Number:";
				cin>>acc;
				CA.setAccNo(acc);
				cout<<"Enter Balance";
				cin>>bal;
				CA.setBal(bal);
				cout<<"1. Withdraw "<<endl<<"2. Deposite "<<endl;
				cin>>choose;
				if(choose == 1){
					int amt;
					cout<<"Enter Amount To Withdraw..";
					cin>>amt;
					CA.withdraw(amt);
				}
				else{
					int amt;
					cout<<"Enter Amount To Deposite..";
					cin>>amt;
					CA.deposite(amt);
				}
				cout<<"Check For Interest.."<<endl;
				CA.calculateInterest();
				break;
			}
			case 2:{
				string acc;
				int choose,bal;
				cout<<"Enter Account Number:";
				cin>>acc;
				SA.setAccNo(acc);
				cout<<"Enter Balance";
				cin>>bal;
				SA.setBal(bal);
				cout<<"1. Withdraw "<<endl<<"2. Deposite "<<endl;
				cin>>choose;
				if(choose == 1){
					int amt;
					cout<<"Enter Amount To Withdraw..";
					cin>>amt;
					SA.withdraw(amt);
				}
				else{
					int amt;
					cout<<"Enter Amount To Deposite..";
					cin>>amt;
					SA.deposite(amt);
				}
				cout<<"Check For Interest.."<<endl;
				SA.calculateInterest();
				break;
			}
			case 3:{
				bool type;
				cout<<"Enter 1 current account else 0";
				cin>>type;
				if(type)
				CA.checkBalance();
				else  	SA.checkBalance();
				break;
			}
			case 0: {
				cout<<"exit"<<endl;
				break;
			}
			default :{
				cout<<"Invalid Choice"<<endl;
				break;
			}
		}
	}while(choice != 0);	
	return 0;
}*/

/*#include<iostream>
using namespace std;
class Character{
	public :
		string name;
		int power = 100;
		
	virtual void attack(){
		if(power > 0){
		cout<<name+" Character Attaks"<<endl;
		power -= 10;
		}
		else cout<<name+" Character Defeated"<<endl;
	}	
};
class Warrior : public Character{
	public :
		void attack()override{
		if(power > 0){
		cout<<name+" Character Attaks"<<endl;
		power -= 15;
		}
		else cout<<name+" Character Defeated"<<endl;
	}		
		
};
class Mage : public Character{
	public :
		void attack () override{
		if(power > 0){
		cout<<name+" Character Attaks"<<endl;
		power -= 20;
		}
		else cout<<name+" Character Defeated"<<endl;
	}		
};
class Archer : public Character{
	public :
		void attack ()override{
		if(power > 0){
		cout<<name+" Character Attaks"<<endl;
		power -= 25;
		}
		else cout<<name+" Character Defeated"<<endl;	
		}
};
int main(){
	Character *ch;
	Warrior  w1;
	w1.name = "abc";
	Mage m1;
	m1.name = "xyz";
	Archer a1;
	a1.name = "def";
	int choice;
	do{
		cout<<"1. Warrier"<<endl<<"2. Mage "<<endl<<"3. Archer"<<endl<<"0. Exit"<<endl;
		cin>>choice;
		switch(choice){
			case 1: {
				ch = &w1;
				ch->attack();
				break;
			}
			case 2:{
				ch = &m1;
				ch->attack();
				break;
			}
			case 3:{
				ch = &a1;
				ch->attack();
				break;
			}
			case 0:{
				cout<<"Exit"<<endl;
				break;
			}
			default : cout<<"Invalid Choice"<<endl;
		}
	}while(choice != 0);
	return 0;
}*/

#include<iostream>
using namespace std;
class Book{
	private :
		string author;
		string tittle;
	public :
		void setAttributes(string a,string t){
			author = a;
			tittle = t;
		}
		virtual void calculatePrice(){
			int qty;
			cout<<"Enter Quantity:";
			cin>>qty;
			cout<<"Total Price : "<<100*qty<<endl;
			cout<<"Total Qty : "<<qty<<endl;
		}
		void display(){
			cin.ignore();
			cout<<"Author : "+author<<endl;
			cout<<"Book Tittle : "+tittle<<endl;
		}
		
};
class EBook : public Book{
	public :
	void calculatePrice() override{
			int qty;
			cout<<"Enter Quantity:";
			cin>>qty;
			cout<<"Total Price : "<<400*qty<<endl;
			cout<<"Total Qty : "<<qty<<endl;
	}
};
class PrintedBook : public Book{
	public :
	void calculatePrice() override{
			int qty;
			cout<<"Enter Quantity:";
			cin>>qty;
			cout<<"Total Price : "<<600*qty<<endl;
			cout<<"Total Qty : "<<qty<<endl;
	}		
};

int main(){
	Book *b;
	EBook eb;
	PrintedBook pb;
	int choice;
	string name,tittle;
	do{
		cout<<"1. EBooks"<<endl<<"2. Peinted Books "<<endl<<"0. Exit"<<endl;
		cin>>choice;
		switch(choice){
			case 1: {
				cout<<"Enter Author Name :";
				cin>>name;
				cout<<"Enter Tittle :";
				cin>>tittle;
				eb.setAttributes(name,tittle);
				b = &eb;
				b->display();
				b->calculatePrice(); //Run time Polymorphism
				break;
			}
	case 2: {
				cout<<"Enter Author Name :";
				cin>>name;
				cout<<"Enter Tittle :";
				cin>>tittle;
				pb.setAttributes(name,tittle);
				b = &pb;
				b->display();
				b->calculatePrice(); //Run time Polymorphism
				break;
			}
			
			case 0:{
				cout<<"Exit"<<endl;
				break;
			}
			default : cout<<"Invalid Choice"<<endl;
		}
	}while(choice != 0);
	return 0;
}

