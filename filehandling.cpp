//Files are used to store dat parmenantly
//stream -> Represents operation performed
//<istream> -> only take input
//<ostream> -> only display output
//<iostream> -> Do both
//<ofstram> -> To creat files and write inside file
//<ifstream> -> To read file
//<fstream> -> do both
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char name[50];
	cout<<"Enter you name: ";
	cin>>name;
	
	ofstream myFile("firstfile.txt");
	myFile<<"Name : "<<name<<endl;
	myFile.close();
	
	cout<<"Data stored"<<endl;
	
	ifstream file("firstfile.txt");
	file>>name;
	file.close();
	
	cout<<name<<endl;
	return 0;
}
