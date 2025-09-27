#include<iostream>
using namespace std;
int main(){
//data type that stores address of other variable
	
//& --> address of operator
int var = 20;
cout<<"Var = "<<var<<endl;
cout<<"Address of Var = "<<&var<<endl;
char ch ='H';
cout<<"ch = "<<ch<<endl;
cout<<"Address of ch = "<<&ch<<endl;

//* --> dereference operator	
int *point = &var; //declaration + initialization of pointer
cout<<"Var = "<<*point<<endl; //dereference operator prints the value that store sat ythat address
cout<<"Address of Var = "<<point<<endl;
char *ptr = &ch;
cout<<"ch = "<<*ptr<<endl;
cout<<"Address of ch = "<<ptr<<endl;
	return 0;
}
//Pointer variable must be of same type of variable ,we are storing address off

/*Common Mistakes
int var = 9, *ptr;
ptr = var; wrong pointer variable only gets address

*ptr = &var
*ptr type is number  not address , to store address dont use star
