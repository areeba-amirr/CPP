#include<iostream>
#include<string>
using namespace std;
class Chair{
	public:
		int legs;
		string material;
	void display(){
			cout<<material+" chair has"<<legs<<" legs";
		}
};
int main(){
	Chair c1;
	c1.legs = 4;
	c1.material = "Plastic";
	c1.display();
	return 0;
}
