#include<iostream>
#include<string>
using namespace std;
struct employee {
int empId;
string empName;
float empSalary;	
}emp2,emp3;

struct student {
	int id;
	int age;
	string subject;
}s1,s2,s3;
int main(){
	
 employee emp1;
 emp1.empId = 101;
 emp1.empName = "Tahreem";
 emp1.empSalary = 60000.45;
  emp2.empId = 102;
 emp2.empName = "Areeba";
 emp2.empSalary = 60000.45;
  emp3.empId = 103;
 emp3.empName = "Rumaisa";
 emp3.empSalary = 60000.45;
 cout<<"Id:"<<emp1.empId<<endl;	
 cout<<"Name:"+ emp1.empName<<endl;
 cout<<"Salary:"<<emp1.empSalary<<endl;
 cout<<"Id:"<<emp2.empId<<endl;	
 cout<<"Name:"+ emp2.empName<<endl;
 cout<<"Salary:"<<emp2.empSalary<<endl;
 cout<<"Id:"<<emp3.empId<<endl;	
 cout<<"Name:"+ emp3.empName<<endl;
 cout<<"Salary:"<<emp3.empSalary;
 
 s1.id = 201;
 s2.id = 202;
 s3.id = 203;
 s1.age = 19;
 s2.age = 20;
 s3.age = 21;
 s1.subject = "Calculus";
 s2.subject = "Linear ALgebra";
 s3.subject = "Multivariate";
 cout<<"Id:"<<s1.id<<endl;
 cout<<"Age:"<<s1.age<<endl;
 cout<<"Subject:"+s1.subject<<endl;
 cout<<"Id:"<<s2.id<<endl;
 cout<<"Age:"<<s2.age<<endl;
 cout<<"Subject:"+s2.subject<<endl;
 cout<<"Id:"<<s3.id<<endl;
 cout<<"Age:"<<s3.age<<endl;
 cout<<"Subject:"+s3.subject<<endl;
	return 0;
}

