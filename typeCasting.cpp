#include<iostream>
using namespace std;
int main(){
	
	//implicit type casting (compiler automatically converts)
	float no2 = 33.44f;
	int result = no2;
	cout<<result<<endl;
	//explicit type casting
	float num1 = 33.45f, num2 = 44.34f;
	int sum = int(num1+num2);
	cout<<"SUM : "<<sum;
	
	int no = 23;
	cout<<"NO = "<<(float)no<<endl;
	float no1 = 23.44;
	cout<<"NO1 = "<<(int)no1<<endl;
	float num = 22.434f;
	int final = int(num);
	cout<<final<<endl;
	return 0;
}
