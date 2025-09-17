#include<iostream>
using namespace std;
int main(){
	int arr1[5] = {1,2,3,4,5};
	int arr2[5] = {6,7,8,9,10};
	int sum = 0;
	for(int i = 0; i <= 4 ; i++){
		sum += arr1[i];
	}
	for(int i = 0; i <= 4 ; i++){
		sum += arr2[i];
	}
	cout<<"Total Sum : "<<sum;
	return 0;
}
