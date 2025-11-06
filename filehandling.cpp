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
	ofstream myFile ("example.txt");
	myFile<<"MY FIRST FILE!!";
	myFile.close();
	//Overwrite previous line
	ofstream File("example.txt");
	File<<"Hello world";
	File.close();
	
	ofstream file1 ("data.txt");
	string name;
	cout<<"Enter Your Name";
	getline(cin,name);
	file1<<"Name : "<<name;
	file1.close();
	
//	ofstream file2 ("myData.txt");
//	string name;
//	int age;
//	string year;
//	cout<<"Enter Your Name :";
//	getline(cin,name);
//	cout<<"Enter Your Age :";
//	cin>>age;
//	cin.ignore();
//	cout<<"Enter Your Birth Year :";
//	getline(cin,year);
//	file2<<"Name : "<<name<<endl;
//	file2<<"Age : "<<age<<endl;
//	file2<<"Birth Year : "<<year<<endl;
//	file2.close();
//	
//	Write numbers from 1 to 10
ofstream file3("numbers.txt");
for(int i = 0 ; i <= 10; i++){
	file3<<i<<endl;
}
file3.close();

//1.	Write a program to create a file named student.txt and store 3 students' names and ages.
//ofstream file4 ("students.txt");
//string name[5];
//int age[5];
//for(int i = 0; i<= 4;i++){
//	cout<<"Enter Student "<<i+1<<" name : ";
//	getline(cin,name[i]);
//	cout<<"Enter Student "<<i+1<<" age : ";
//	cin>>age[i];
//	cin.ignore();
//}
//for(int i = 0; i<= 4;i++){
//	file4<<"Name at ["<<i+1<<"] : "<<name[i]<<" and age at ["<<i+1<<"] : "<<age[i]<<endl;
//}
//file4.close();

//Reading Files
//ifstream first ("numbers.txt");
//string line;
//while(getline(first,line)){
//	cout<<line<<endl;
//}
//first.close();

//ifstream second("students.txt");
//string gline;
//while(getline(second,gline)){
//	cout<<gline<<endl;
//}
//second.close();

//Read numbers and calculate sum
ifstream first ("numbers.txt");
int num,sum = 0;
while(first>>num){
	sum += num;
}
cout<<sum<<endl;
first.close();

//count lines in file
ifstream fileLines ("numbers.txt");
string myLines; int count = 0;
while(getline(fileLines,myLines)){
	count++;
}
cout<<"Total lines : "<<count<<endl;
fileLines.close();

//Append Data 
ofstream app ("data.txt",ios :: app);
app<<"New Line Added"<<endl;
app<<"Another Line"<<endl;
app<<"Another"<<endl;
app.close();


ofstream app1 ("numbers.txt",ios :: app);
app1<<"New Line Added"<<endl;
app1.close();
	return 0;
}
