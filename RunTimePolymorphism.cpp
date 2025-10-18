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
#include<iostream>
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
	n->alert();
//calls both time the base function "Alert Via SMS"
	return 0;
}

//imp point : override ka matlab hota ha kisi virtual function ko override krna toh agr function virtual hoag hee nhi toh override notation error dyga
//Virtual keyword ka matlab k ye runtime pr decide krya k function ka konsa version chalan ha base wala ya derived class wala
