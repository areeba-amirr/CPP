#include<iostream>
using namespace std;
int main(){
//	if-Else
	int age = 19;
	if(age >= 18){
		cout<<"You can Vote"<<endl;
	}
	else {
		cout<<"You can't Vote"<<endl;
	}
//  if-Else Ladder Structure
    float marks;
    cout<<"Enter Your Masrks:";
    cin>>marks;
    if(marks >= 90) cout<<"A+ Grade";
    else if(marks >= 80 &&marks < 90) cout<<"A Grade";
    else if(marks >= 70 && marks < 80) cout<<"B Grade";
    else if(marks >= 60 && marks < 70)cout<<"C Grade";
    else if(marks >= 50 && marks < 60)cout<<"D Grade";
    else cout<<"Fail";
//	Nested if
    int no1 = 30,no2 = 23 ,no3 = 67,no4 =2;
    if(no1 > no2){
    	if(no1 > no3){
    		if(no1 > no4) cout<<no1<<" is greatest";
    		else cout<<"Not greatest";
		} 
		else cout<<"Not greatest";
	}
	else cout<<"not Greatest";
	return 0;
}

