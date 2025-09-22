#include<iostream>
#include<string>
using namespace std;
//union info{
//	int id;
//	int age;
//	float salary;
//};
 
union student {
	int stdId;
	char section;
};
int main(){
//	union info i1;
//	i1.id = 101;
//	cout<<"Id : "<<i1.id<<endl;
//	i1.age = 18;
//	cout<<"Age : "<<i1.age<<endl;
//	i1.salary = 4444.44;
//	cout<<"Salary : "<<i1.salary<<endl;
union student std;
std.stdId = 333;
//std.section = 'B';
cout<<"Id : "<<std.stdId<<endl;
//cout<<"Section : "<<std.section<<endl;
	return 0;
}
//union is to store data in less memory matlab jis dat ako use krahy hongy sirf wohi memory loy anad union ki memory uski sab sy bari value ki memory hoti ha.matlab sab sy bari value ka size 4 bytes ha toh union 4 bytes ka hoga
//and union simplex data type k liya ha complex k liya nhi
//agr multiple values sath me use ki toh sirf last wali kam krygi bagi sab lost hojingi and garbage milyga
