#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream file ("StudentInfo.txt");
	int arr[5][3];
	string name[5];
	for(int i = 0; i <= 4;i++){
		cout<<"Enter Student Name ["<<i<<"] : ";
		getline(cin,name[i]);
	}
	for(int i = 0; i <= 4;i++){
		for(int j = 0; j <= 2;j++){
		cout<<"Enter Marks of "<<name[i]<<endl;
		cout<<"[ "<<j<<" ] : ";
		cin>>arr[i][j];
	}
	}
		for(int i = 0; i <= 4;i++){
			file<<name[i]<<endl;
		for(int j = 0; j <= 2;j++){
		file<<"Subject ["<<j+1<<"]: "<<arr[i][j]<<endl;
	}
	}
	file.close();
	return 0;
}
