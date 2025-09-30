#include<iostream>
using namespace std;
class first{
	public :
		int product(int no1,int no2){
			return no1*no2;
		}
		int product(int no1,int no2,int no3){
			return no1*no2*no3;
		}
		int product(int no1,int no2,int no3,int no4){
			return no1*no2*no3*no4;
		}
};
int main()
{
	first obj;
	cout<<"Multiplying 4 Numbers :"<<obj.product(2,3,4,7)<<endl;
	cout<<"Multiplying 3 Numbers :"<<obj.product(2,3,4)<<endl;
	cout<<"Multiplying 2 Numbers :"<<obj.product(2,3)<<endl;
	return 0;
}
//Method overloading is also known as compile time polymorphism. It is the process of using same method with different parameters
