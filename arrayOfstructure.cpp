#include<iostream>
#include<string>
using namespace std;
struct car{
	string brand;
	string color;
	bool isElectric;
}carInfo[3]; //declare

struct coffee{
	string company;
	bool isBlack;
	string type;
};
int main(){
	//assigning value
	carInfo[0] = {"BMW","Black",true};
	carInfo[1] = {"LandCruiser","White",false};
	carInfo[2] = {"Corolla","Blue",false};
	
	for(int i = 0; i <= 2 ; i++){
		cout<<carInfo[i].brand+" "+carInfo[i].color<<" "<<carInfo[i].isElectric<<endl;
	}
	
	coffee cArr[3] = {
	{"Nescafe",true,"cold"},
	{"Davidoff",false,"hot"},
	{"Nescafe",false,"cold"}
	};
	for(int i = 0; i <= 2 ; i++){
		cout<<cArr[i].company<<endl;
		if(cArr[i].isBlack){
			cout<<"Black Coffee"<<endl;
		}
		else{
			cout<<"White Coffee"<<endl;
		}
		cout<<cArr[i].type<<endl;
		}
	return 0;
}
