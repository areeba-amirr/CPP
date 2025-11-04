#include<iostream>
//Destructor is use to deallocate memory or to destroy constructor from memory
//~ is use to call destructors
//must be of same name as class or constructor
using namespace std;
class Employee{
	private :
		string name;
		int age;
	public:
		Employee(int a,string str){
			name = str;
			age = a;
			cout<<"Constructor Called"<<endl;
		}
		void display(){
			cout<<"NAME : "<<name<<endl<<"AGE : "<<age<<endl;
		}
		~Employee(){ //it does not take any argument
			cout<<"Destructor Called!!"<<endl;
		}
};
int main(){
	Employee emp1(19,"Ali");
	Employee emp2(19,"Ahmed");
	cout<<"-----------------------"<<endl;
	emp.display();
	cout<<"-----------------------"<<endl;
	emp1.display();
	cout<<"-----------------------"<<endl;
	emp2.display();
	cout<<"-----------------------"<<endl;
	return 0;
}
//Destructor tab call hota ha jab object ka scope khatam hota ha na k uska use
