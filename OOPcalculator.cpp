#include<iostream>
#include<string>
using namespace std;
class Calculator{
	public:
	int no1,no2;
	int sum(){
		return no1+no2;
	}
	int sub(){
		return no1-no2;
	}
	int product(){
		return no1*no2;
	}
	int div(){
		return no1/no2;
	}
	int mod(){
		return no1%no2;
	}
};
int main(){
	Calculator cal;
	cal.no1 = 20;
	cal.no2 = 50;
	cout<<"ADDITION : "<<cal.sum()<<endl;
	cout<<"SUBSTRACTION : "<<cal.sub()<<endl;
	cout<<"DIVISION : "<<cal.div()<<endl;
	cout<<"MULTIPLICATION : "<<cal.product()<<endl;
	cout<<"MODULUS : "<<cal.mod()<<endl;
		return 0;
}
