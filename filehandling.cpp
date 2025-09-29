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
	string me;
	cin.ignore();
	cout<<"Enter line: ";
	getline(cin,me);
	
	
	ofstream myFile("firstfile.txt");
	myFile<<name<<endl;
	myFile<<me<<endl;
	myFile.close();
	//store data
	
	ifstream file("firstfile.txt");
	file>>name;
	file.ignore();
	getline(file,me);
	file.close();
	
	cout<<"Data stored"<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<me<<endl;
	
	return 0;
}
