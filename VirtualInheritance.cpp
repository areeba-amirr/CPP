#include<iostream>
using namespace std;
class Person{
	public :
		string name;
		void showName(){
			cout<<"Name : "<<name<<endl;
		}
};
class Employee : virtual public Person{ //use virtual keyword so that it wont inherit with class that inherits Employee as Employee already inherits person
	public :
		int id;
		void showId(){
			cout<<"Id : "<<id<<endl;
		}
};
class Teacher : public Employee, virtual public Person{
	public :
		void use(){
			showId();
			Person::showName(); //using virtual to remover Person class ambiguity
		}
};
int main(){
	Teacher t1;
	t1.id = 899;
	t1.name = "Areeba";
	t1.use();
	
	return 0;
}
