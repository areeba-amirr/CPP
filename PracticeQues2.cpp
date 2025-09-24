#include<iostream>
#include<string>
using namespace std;
class Library{
	public : 
	string name,author;
	private: int price;
	
	public : void showPrice(){
		cout<<"Enter Book Price : ";
		cin>>price;
		cout<<name+"is off "<<price<<endl;
	}
};
class EBook : public Library{
public:	string date;
	public : void show(){
		cout<<"Issued on "+date<<endl;
	}
};
class Book :public EBook{
public:	string weight;
public : void display(){
		cout<<"Issued on "+date<<endl;
		cout<<"Weight : "+weight<<endl;
	}	
};
int main(){
	char type;
	cout<<"Enter 'E' for EBOOK and 'B' for normalBOOK :";
	cin>>type;
	switch(type){
		case 'E' : {
		EBook e1;
		cin.ignore();
		cout<<"Enter Book Name : ";
		getline(cin,e1.name);
		cout<<"Enter Author Name : ";
		getline(cin,e1.author);
		cin.ignore();
		cout<<"Enter Date : ";
		getline(cin,e1.date);
		e1.showPrice();
		e1.show();
		break;}
		case 'B' :  {
		Book b1;
		cout<<"Enter Book Name : ";
		getline(cin, b1.name);
				cin.ignore();
		cout<<"Enter Author Name : ";
		getline(cin,b1.author);
		cout<<"Enter Date : ";
		getline(cin,b1.date);
		cout<<"Enter Weight : ";
		getline(cin,b1.weight);
		b1.showPrice();
		b1.show();
		b1.display();
		break; }
		default : cout<<"Wrong choice!!"<<endl;
	}
	return 0;
}
