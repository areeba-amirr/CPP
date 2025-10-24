#include<iostream>
using namespace std;
class ISBN{
	private :
		string isbnNum;
	public : 
	void setISBN(string isbn){
		isbnNum = isbn;
	}
	string getiSBN(){
		return isbnNum;
	}	
};
class Book : public ISBN{
	private :
		string tittle,author,city;
		int price;
	public :	
	void setAttributes(string t, string a,string c){
		tittle = t;
		author = a;
		city = c;
	}
	void setPrice(int p){
		price = p;
	}
	string	getTittle(){ return tittle;
	}
	string	getAuthor(){ return author;
	}
	string	getCity(){ return city;
	}
	int getPrice(){
		return price;
	}
		ISBN IsbnNum;
	void setISBNnum(string num){
	
		string num1 = num;
		IsbnNum.setISBN(num1);
	}
	string getISBN(){
		return IsbnNum.getiSBN();
	};
	
	void display(){
		cout<<"Tittle : "<<tittle<<endl;
		cout<<"Author : "<<author<<endl;
		cout<<"City : "<<city<<endl;
		cout<<"ISBN Number : "<<getISBN()<<endl;
	}
};
int main(){
Book b1;
b1.setAttributes("abch","xyz","karachi");
b1.setISBNnum("123456");
b1.display();
	return 0;
}
