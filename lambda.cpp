#include<iostream>
#include<string>
using namespace std;
int main(){
//Lambda function is like a anonymous function which is declared and initialize inside the code
//we dont know the type of lambda so we use "auto" keyword so that compiler can find its type by itself
  auto display = [](){  
  	cout<<"WELCOME"<<endl;
  };
  display();
  //Parameters
  auto add = [](int a ,int b){
  	return a+b;
  };
  cout<<add(6,3)<<endl;
  int no = 10;
  //Capture clause [] is (use to access variable declared outside without adding their data type)
  auto square = [no](){
  	return no*no;
  };
  cout<<square()<<endl;
  //Lambda function inside loop
  for(int i = 0 ; i <= 10 ; i++){
  	auto cube = [i](){
  		cout<<i*i*i<<endl;
	  };
	  cube();
  }
  int i = 0;
  while(i <= 20){
  	auto even = [i](){
  		if( i % 2 == 0){
  			cout<<i<<" is EVEN"<<endl;
		  }
	  };
	  even();
	  i++;
  }
  return 0;	
}
