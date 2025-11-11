//#include<iostream>
//#include<fstream>
//using namespace std;
//class Animal {
//	//Can not created directly inside class without member function or constructor
//	public :
//		string name = "cat";
//		char gender = 'F';
//		int age = 2;
//		//Benfit of creating file within constructor : Jesy hee object bnay ga file create hojaygi 
//		Animal(){
//		ofstream file ("MyFile.txt");
//		file<<name<<endl;
//		file<<gender<<endl;
//		file<<age<<endl;
//		file.close();
//		}
//		//File can also be created with member funaction 
////		void creatFile(){
////		ofstream file ("MyFile.txt");
////		file<<name<<endl;
////		file<<gender<<endl;
////		file<<age<<endl;
////		file.close();	
////		}
//};
//int main(){
//	Animal a1;
//	cout<<"Name : "<<a1.name<<endl;
//	cout<<"Gender : "<<a1.gender<<endl;
//	cout<<"Age : "<<a1.age<<endl;
////	a1.creatFile();
//	return 0;
//}

#include<iostream>
#include<fstream>
using namespace std;
class Student{
	public :
		string name[5];
		int age [5];
		void initilaize(){
			for(int i = 0; i <= 4 ; i++){
			getline(cin,name[i]);	
			}
			for(int i = 0; i <= 4 ; i++){
			cin>>age[i];	
			}	
		}
		void file(){
			ofstream file ("Record.txt");
			for(int i = 0 ; i <= 4; i++){
				file<<"Name : "<<name[i]<<", Age : "<<age[i]<<endl;
			}
			file.close();
		}			
};
using namespace std;
int main(){
	Student st1;
	st1.initilaize();
	st1.file();
	return 0;
}
