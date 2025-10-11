/*#include<iostream>
using namespace std;
class Shape{
	public :
		float radius;
		void area(){
		cout<<"Area : "<<3.142*radius*radius<<endl;	
		}
};
class Circle : public Shape{
	public :
		void radiusInfo(){
			cout<<"Radius : "<<radius<<endl;
		}
		
};
int main(){
	Circle c1;
	c1.radius = 4.5;
	c1.area();
	c1.radiusInfo();
	return 0;
}*/

/*#include<iostream>
using namespace std;
class Employee{
	public :
		int salary;
		string name;
};
class Manager : public Employee{
	public :
		void bonus(){
			cout<<"Bonus Granted to "<<name<<endl;
		}
		
};
int main(){
	Manager m1;
	m1.salary = 800000;
	m1.name = "Areeba Aamir";
	m1.bonus();
	return 0;
}*/

/*#include<iostream>
using namespace std;
class Device{
	public :
		void deviceInfo(){
			cout<<"This is an electronic device"<<endl;
		}
};
class Laptop : public Device{
	public :
		string brand;
		void LaptopBrand(){
			cout<<"Brand : "<<brand<<endl;
		}
		
};
class GamingLaptop : public Laptop{
	public :
		void graphics(){
		cout<<"high-end-graphics enabled!!"<<endl;
		}
		
};
int main(){
	Laptop l1;
	l1.brand = "Dell";
	l1.deviceInfo();
	l1.LaptopBrand();
	return 0;
}*/

/*#include<iostream>
using namespace std;
class Vehicle{
	public :
		void start(){
			cout<<"Vehicle started!!!"<<endl;
		}
};
class Car : public Vehicle{
	public :
		string brand;
		void displayInfo(){
			cout<<"Brand : "<<brand<<endl;
		}
		
};
class Battery: public Car{
	public :
		void batteryStatus(){
		cout<<"Battery Fully Cahrged!!!!"<<endl;
		}
		
};
int main(){
	Battery b1;
	b1.brand = "Honda Civic";
	b1.displayInfo();
	b1.start();
	b1.batteryStatus();
	return 0;
}*/

/*#include<iostream>
using namespace std;
class Printable{
	public :
		void print(){
			cout<<"Printing.."<<endl;
		}
};
class Scannable{
	public :
		void Scan(){
			cout<<"Sacnning.."<<endl;
		}
		
};
class PrinterScanner: public Printable , public Scannable{
		
};
int main(){
	PrinterScanner ps1;
	ps1.print();
	ps1.Scan();
	return 0;
}*/

#include<iostream>
using namespace std;
class Flyable{
	public :
		void fly(){
			cout<<"Drone is flying.."<<endl;
		}
};
class Rechargeable{
	public :
		void Charge(){
			cout<<"Drone is Charging.."<<endl;
		}
		
};
class Drone: public Flyable , public Rechargeable{	
};
int main(){
	Drone d1;
	d1.fly();
	d1.Charge();
	return 0;
}
