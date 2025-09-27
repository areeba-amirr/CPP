#include<iostream>
using namespace std;
int main(){
	int no=10 , *ptr , **doublePtr;
	ptr = &no;
	doublePtr = &ptr;
	cout<<"Address of No : "<<ptr<<endl;
	cout<<" No : "<<*ptr<<endl;
	cout<<"Address of PTR : "<<doublePtr<<endl; //address of ptr
	cout<<"Value at assigned address: "<<*doublePtr<<endl; //value store at double pointer
	cout<<"Value at Double Pointer: "<<**doublePtr<<endl; //value of double pointer  (address pr value 10 ha)
	
	
	string name= "Areeba", *pointer , **dPointer;
	pointer = &name;
	dPointer = &pointer;
	cout<<"Adress of Name : "<<pointer<<endl;
	cout<<" Name : "<<*pointer<<endl;
	cout<<"Adress of Pointer : "<<dPointer<<endl;
	cout<<"Value of Double pointer: "<<*dPointer<<endl;
	cout<<"Value stored at Double Pointer: "<<**dPointer<<endl;
	return 0;
}
