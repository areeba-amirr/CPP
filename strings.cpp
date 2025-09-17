#include<iostream>
#include<string>
using namespace std;
int main(){
	string me = "AREEBA MUHAMMAD AAMIR";
	string greet = "Welcome";
	//length
	cout<<"Length of String :"<<me.length()<<endl;
	//Conactenation
	cout<<greet+me<<endl;
	//Triversing string
	for(int i = 0; i <= me.length()-1 ; i++){
		cout<<"me["<<i<<"]"<<me[i]<<endl;
	}
	//Reverse string
	for(int i = me.length()-1 ; i >= 0 ; i--){
		cout<<"me["<<i<<"]"<<me[i]<<endl;
	}
	//count words
	int count = 1;
	for(int i = 0; i <= me.length();i++){
		if(me[i] == ' '){
			count++;
		}
	}
	cout<<"Total Words : "<<count<<endl;
	//use of double quotes inside string
//	string str = "Hello , I am \'Areeba Aamir\'";
	string str = "Hello , I am \"Areeba Aamir\"";
	cout<<str;
	return 0;
}
