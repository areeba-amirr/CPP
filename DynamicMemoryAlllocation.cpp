#include<iostream>
using namespace std;
int main(){
	int size;
	int *ptr;
	cout<<"Enter size of an array";
	cin>>size;
	cout<<"********MEMORY ALLOCATION***********"<<endl;
	ptr = new int[size];  //ptr aik array bn jayg jis ka size dynamically alocate hua ha 
	for(int i = 0; i <= size -1 ; i ++){
		cout<<"["<<i<<"] : ";
		cin>>ptr[i];
	}
	for(int i = 0; i <= size -1 ; i ++){
		cout<<"["<<i<<"] : "<<ptr[i]<<endl;
	}
	int limit;
	string *arr;
	cout<<"Enter limit of an array";
	cin>>limit;
	arr = new string[limit];
	for(int i = 0; i <= limit-1 ; i ++){
		cout<<"["<<i<<"] : ";
		cin>>arr[i];
	}	
		for(int i = 0; i <= limit -1 ; i ++){
		cout<<"["<<i<<"] : "<<arr[i]<<endl;
	}
	cout<<"**********MEMEORY DEALLOCATION***********"<<endl;
	delete []ptr;  //delete memory from RAM
	cout<<"Values in arrya after memory deallocation"<<endl;
	for(int i = 0; i <= size -1 ; i ++){ //garage values wil come
		cout<<"["<<i<<"] : "<<ptr[i]<<endl;
	}
	
	delete []arr;
		for(int i = 0; i <= size -1 ; i ++){
		cout<<"["<<i<<"] : "<<ptr[i]<<endl;
	}
	return 0;
}
//New operator/keyword --> allocates memory to a variable
//Delete operator/keyword --> deallocates memory to a variable
