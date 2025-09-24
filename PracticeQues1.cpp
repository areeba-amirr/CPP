#include<iostream>
#include<string>
using namespace std;
class Hospital{
	public : 
	string name;
	int age;
	int contact;

};
class Doctor : public Hospital{
	public : string docType;
	public : void duty(){
		cout<<"I am "+name+" and I am "+docType+"!"<<endl;
	}
};
class Patient : public Hospital{
	public : string diseas;
	public : void illness(){
		cout<<"I am "+name+" and My illness : "+diseas+"!"<<endl;
	}
};
int main(){
	bool choice;
	cout<<"Enter '1' if you are a doctor,'0' if patient:";
	cin>>choice;
	if(choice){
		Doctor d1;
		cin.ignore(); //to clear buffer
		cout<<"Enter your name : ";
		getline(cin,d1.name);
		cout<<"Enter your age : ";
		cin>>d1.age;
		cout<<"Enter your contact : ";
		cin>>d1.contact;
		cin.ignore();
		cout<<"Enter your Specilazation : ";
		getline(cin,d1.docType);
		d1.duty();
	}
	else{
		Patient p1;
		cin.ignore();
		cout<<"Enter your name : ";
		getline(cin,p1.name);
		cout<<"Enter your age : ";
		cin>>p1.age;
		cout<<"Enter your contact : ";
		cin>>p1.contact;
		cin.ignore();
		cout<<"Enter your Illness : ";
		getline(cin,p1.diseas);
		p1.illness();	
	}
	return 0;
} 
