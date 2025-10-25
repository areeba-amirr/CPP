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

#include<iostream>
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
};

