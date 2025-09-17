#include<iostream>
using namespace std;
int main(){
	int size ,count = 0;
	cout<<"Enter size of any array";
	cin>>size;
	int marks[size];
	for(int i = 0;i <= size-1 ;i++){
		cout<<"["<<i<<"] : ";
		cin>>marks[i];
		count++;
	}
	cout<<"Length of an Array:"<<count;
	return 0;
}
