#include<iostream>
using namespace std;
void display();
int add(); //Function protoype
int product();
string showName(string name);			
int main(){
	display(); //function call
	cout<<"Sum : "<<add()<<endl;
	product(); 
	cout<<"I am "<<showName("Areeba");
	return 0;
}
//Function that takes nothing and return nothing
void display(){ //Function definition
		cout<<"Welcome to C++"<<endl;
	}
//Function that takes nothing but return something
int add(){  
		int no1 = 4;
		int no2 = 8;
		return no1+no2;
	}
//Function that takes something but return nothing
int product(){
		int no1 = 4;
		int no2 = 8;
		cout<<"Product : "<<no1*no2<<endl;
	}
//Function that takes something but return something		
string showName(string name){
	return name;
}	
