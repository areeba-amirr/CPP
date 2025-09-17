#include<iostream>
using namespace std;
int main(){
	string subjects[5]; //declare then initialize
     subjects[0] = "MV";
     subjects[1] = "OOP";
     subjects[2] = "DLD";
     subjects[3] = "ITM";
     subjects[4] = "DS";
     //declare + initialize
 //    string subjects [5] = {"MV","OOP","DLD","ITM","DS"};    
	cout<<subjects[0]<<endl;
	cout<<subjects[1]<<endl;
	cout<<subjects[2]<<endl;
	cout<<subjects[3]<<endl;
	cout<<subjects[4]<<endl;
	//Triversing Array
	for(int i = 0; i <= 4 ;i++)
	{
		cout<<"["<<i<<"] : "<<subjects[i]<<endl;
	}
	//User Input
	int numbers[10];
	for(int i = 0; i <= 9 ;i++)
	{
		cout<<"["<<i<<"] : ";
		cin>>numbers[i];
	}
	for(int i = 0; i <= 9 ;i++)
	{
		cout<<"["<<i<<"] : "<<numbers[i]<<endl;
	}
	
	int size ;	
	cout<<"Enter size of any array";
	cin>>size;
	string colors [size];
	for(int i = 0; i <= size-1 ;i++)
	{
		cout<<"["<<i<<"] : ";
		cin>>colors[i];
	}
	for(int i = 0; i <= size-1 ;i++)
	{
		cout<<"["<<i<<"] : "<<colors[i]<<endl;
	}
	return 0;
}
