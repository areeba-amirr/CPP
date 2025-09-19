#include<iostream>
#include<string>
using namespace std;
class Pen{
	public:
	string color,brand;
	void display(){
		cout<<brand+"Pen is off "+color+" color";
	}
};
int main(){
	Pen p1;
	p1.color = "Red";
	p1.brand = "Dollar";
	p1.display();
	return 0;
}
