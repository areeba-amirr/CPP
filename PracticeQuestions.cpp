#include<iostream>
using namespace std;
class Student{
	private :
		int rollNo;
		string name;
	public :	
		char grade;
		void setRollNo(int no){
			rollNo = no;
		}
		void setName(string na){
			name = na;
		}
		int getRollNo(){
			return rollNo;
		}
		string getName(){
			return name;
		}
};
class Undergraduate : public Student{
	public:
		void calculateGrade(float m1,float m2,float m3){
			float avg = (m1+m2+m3)/300 * 100;
			if(avg >= 90) {
				grade = 'A';
			}
			else if(avg >= 80) {
				grade = 'B';
			}
			else if(avg >= 70) {
				grade = 'C';
			}
			else if(avg >= 60) {
				grade = 'D';
			}
			else if(avg >= 50) {
				grade = 'E';
			}
			else grade = 'F';
			
			cout<<"Roll No : "<<getRollNo()<<endl<<"Name : "<<getName()<<endl<<"Grade : "<<grade<<endl;
		}
};
class Postgraduate : public Student{
	public:
		void calculateGrade(float m1,float m2,float m3,float m4){
			float avg = (m1+m2+m3+ m4)/400 * 100;
//			cout<<"Avg : "<<avg<<endl;
			if(avg >= 90) {
				grade = 'A';
			}
			else if(avg >= 80) {
				grade = 'B';
			}
			else if(avg >= 70) {
				grade = 'C';
			}
			else if(avg >= 60) {
				grade = 'D';
			}
			else if(avg >= 50) {
				grade = 'E';
			}
			else grade = 'F';
			
			cout<<"Roll No : "<<getRollNo()<<endl<<"Name : "<<getName()<<endl<<"Grade : "<<grade<<endl;
		}
};
int main(){
	Undergraduate u1;
	u1.setName("Areeba Aamir");
	u1.setRollNo(101);
	u1.calculateGrade(89,99,78);
	
	Postgraduate p1;
	p1.setName("Haris Aamir");
	p1.setRollNo(102);
	p1.calculateGrade(89,99,78,90);
	
	return 0;
}
