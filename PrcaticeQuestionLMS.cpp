//If cost price and selling price of four items are input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit
//he made or loss he incurred (item-wise and overall)
/*
#include<iostream>
using namespace std;
class Cost {
	public :
		float p1,p2,p3,p4;
	float total1(){
		return p1+p2+p3+p4;
	};
};
class Sell {
	public :
		float s1,s2,s3,s4;
	float total2(){
		return s1+s2+s3+s4;
	}	
};
class Calculate : public Cost ,public Sell{
	public:
		void calculating(){
		float  totalC = total1();
		float totalS = total2();			
			if(totalS > totalC){
				cout<<"Profit Achieved of "<<totalS-totalC<<"/-"<<endl;
			}
			else if(totalC > totalS){
				cout<<"Loss Achieved of "<<totalC-totalS<<"/-"<<endl;
			}
			else{
				cout<<"Neither Profit Nor Loss"<<endl;
			}
		}
		void eachP1(){
			if(s1>p1){
				cout<<"Profit of "<<s1-p1<<"/-"<<endl;
			}
			else {
			cout<<"Loss of "<<p1-s1<<"/-"<<endl;	
			}
		}void eachP2(){
			if(s2>p2){
				cout<<"Profit of "<<s2-p2<<"/-"<<endl;
			}
			else {
			cout<<"Loss of "<<p2-s2<<"/-"<<endl;	
			}
		}
		void eachP3(){
			if(s3>p3){
				cout<<"Profit of "<<s3-p3<<"/-"<<endl;
			}
			else {
			cout<<"Loss of "<<p3-s3<<"/-"<<endl;	
			}
		}
		void eachP4(){
			if(s4>p4){
				cout<<"Profit of "<<s4-p4<<"/-"<<endl;
			}
			else {
			cout<<"Loss of "<<p4-s4<<"/-"<<endl;	
			}
		}
		
};
int main(){
	Calculate obj;
	cout<<"Enter Cost Prices of 4 product:"<<endl;
	cin>>obj.p1;
	cin>>obj.p2;
	cin>>obj.p3;
	cin>>obj.p4;
	cout<<"Enter Selling Prices of 4 product:"<<endl;
	cin>>obj.s1;
	cin>>obj.s2;
	cin>>obj.s3;
	cin>>obj.s4;
	int choice;
	do {
	cout<<"Select 1.For Product1 ,2. For Product2 ,3. For Product3 , 4.For Product4 ,5.For OverAll,0.To exit"<<endl;
	cin>>choice;
	switch(choice){
		case 1 : obj.eachP1(); break;
		case 2 : obj.eachP2(); break;
		case 3 : obj.eachP3(); break;
		case 4 : obj.eachP4(); break;
		case 5 : obj.calculating(); break;
		case 0 : cout<<"exiting..."; break;
		default : cout<<"Invalid!!!"<<endl;
	}}	while(choice != 0);
	return 0;
} */

//Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number.
//#include<iostream>
//using namespace std;
//class Number{
//	public :
//		int no;
//		void checker(){
//		if(no % 2 == 0){
//			cout<<"Even Number"<<endl;
//		}
//		else{
//			cout<<"Odd Number"<<endl;
//		} 		}
//};
//int main(){
//	Number obj;
//	cout<<"Enter any Number : ";
//	cin>>obj.no;
//	obj.checker();
//	return 0;
//}

//Any character is entered through the keyboard; write a program to determine whether the character entered is a capital letter. A small case letter, a digit or a special symbol. (hint: use
//char and int data types)
//#include<iostream>
//using namespace std;
//class Letters{
//	public :
//	char ch;
//	void check(){
//		if(ch >= 'A' && ch <= 'Z'){
//			cout<<"Captital Letter.."<<endl;
//		}
//		else if(ch >= 'a' && ch <= 'z'){
//			cout<<"Small Letter.."<<endl;
//		}
//		else{
//			 cout<<"Special Character..."<<endl;
//		}
//	}
//};
//int main(){
//	Letters obj;
//	cout<<"enter any character :";
//	cin>>obj.ch;
//	obj.check();
//	return 0;
//}

//Write a program to print all the ASCII values and their equivalent characters using a while loop. The ASCII values vary from 0 to 255. (hint: use char and int data types)
//#include<iostream>
//using namespace std;
//class ASCII{
//	public :
//	void ASCIIvalues(){
//		int i = 0;
//		while(i <= 255){
//			char ch = i;
//		cout<<"Character : "<<ch<<"    ASCII : "<<i<<endl;
//		i++;
//		}
//	}	
//};
//int main(){
//	ASCII obj;
//	obj.ASCIIvalues();
//	return 0;
//}

//Twenty five numbers are entered from the keyboard into an array. Write a program to find out how many of them are positive, how many are negative, how many are even and how many
//are odd.
//#include<iostream>
//using namespace std;
//class Number{
//public:	
//int arr[25];
//void checker(){
//	int countP = 0,countN = 0,countE = 0, countO = 0;
//	for(int i = 0 ; i <= 24 ; i++){
//		if(arr[i] >= 0 ) countP++;
//		if(arr[i] < 0 ) countN++;
//		if(arr[i] % 2 == 0 ) countE++;
//		if(arr[i] % 2 != 0 ) countO++;
//	}
//	cout<<"Positive : "<<countP<<endl;
//	cout<<"Negative : "<<countN<<endl;
//	cout<<"Even : "<<countE<<endl;
//	cout<<"Odd : "<<countO<<endl;
//}
//};
//int main(){
//	Number obj;
//	for(int i = 0;i <= 24 ; i++){
//		cout<<"Enter ["<<i<<"]";
//		cin>>obj.arr[i];
//	}
//	obj.checker();
//	return 0;
//}

//Write a program that prints the sum, difference, product, quotient, and remainder of two integers. Initialize the integer with the values 60 and 7. (use user defined functions)
//#include<iostream>
//using namespace std;
//class Calculate{
//	public : 
//	
//	int no1,no2;
//	void add(){
//		cout<<"Sum of "<<no1<<" & "<<no2<<" is "<<no1+no2<<endl;
//	}
//	void difference(){
//		cout<<"Difference of "<<no1<<" & "<<no2<<" is "<<no1-no2<<endl;
//	}
//	void product(){
//		cout<<"Product of "<<no1<<" & "<<no2<<" is "<<no1*no2<<endl;
//	}
//	void quotient(){
//		cout<<"Quotient of "<<no1<<" & "<<no2<<" is "<<no1/no2<<endl;
//	}
//	void mod(){
//		cout<<"Modulus of "<<no1<<" & "<<no2<<" is "<<no1%no2<<endl;
//	}
//};
//int main(){
//	Calculate c;
//	cout<<"Enter No1 : ";
//	cin>>c.no1;
//	cout<<"Enter No2 : ";
//	cin>>c.no2;
//	c.add();
//	c.difference();
//	c.product();
//	c.quotient();
//	c.mod();
//	return 0;
//}

//Consider the problem of converting miles to kilometers. To find the equivalent kilometers, the number of miles is divided by 0.62. Write the steps involved in calculating the mileage
//conversion when the number of miles is 12.
//#include<iostream>
//using namespace std;
//class Unit{
//	public :
//		int num;
//		void convert(){
//			float km = num/0.62;
//			cout<<num<<" miles = "<<km<<" km"<<endl;
//		}
//};
//int main(){
//	Unit u1;
//	cout<<"Enter Number in Miles : ";
//	cin>>u1.num;
//	u1.convert();
//	return 0;
//}

/*Design a program for a shoe distribution company that has five salespersons. Each salesperson has an ID number of one to five. An array is used to accumulate total sales for
each salesperson. Sales can be entered multiple times for multiple sales by each salesperson. The user enters -1 to complete the input step. After all the input has been entered, a table is
printed with each salesperson’s ID in the first row and the total sales in the second row.
*/
#include<iostream>
using namespace std;
class Data{
		public :
		int arr[5][11] ;
		void CalculateSales(){
			int s1,s2,s3,s4,s5,sum1 =0 ,sum2 = 0 , sum3 = 0,sum4 = 0,sum5 = 0;
			for(int i = 2 ; i <= 9 ; i++){
				sum1 += arr[0][i];
			}
			for(int i = 2 ; i <= 9 ; i++){
				sum2 += arr[1][i];
			}
			for(int i = 2 ; i <= 9 ; i++){
				sum3 += arr[2][i];
			}
			for(int i = 2 ; i <= 9 ; i++){
				sum4 += arr[3][i];
			}
			for(int i = 2 ; i <= 9 ; i++){
				sum5 += arr[4][i];
			}
			arr[0][10] = sum1;
			arr[1][10] = sum2;
			arr[2][10] = sum3;
			arr[3][10] = sum4;
			arr[4][10] = sum5;
		}
};
	void add(int arr[][]){
		for(int i = 0;i <= 4 ; i++){
		for(int j = 0;i <= 9; j++){
			cout<<"Enter value at ["<<i<<"]["<<j<<"]";
			cin>>arr[i][j]; 
			if(arr[i][j] == -1){
				break;
			}
		
		}	
		}
	}
	void disp(){
		cout<<"--------------------------"<<endl;
		cout<<"    Id       |     Total "<<endl;
		cout<<"  "<<arr[0][0]<<"|"<<sum1<<endl;
		cout<<"  "<<arr[1][0]<<"|"<<sum2<<endl;
		cout<<"  "<<arr[2][0]<<"|"<<sum3<<endl;
		cout<<"  "<<arr[3][0]<<"|"<<sum4<<endl;
		cout<<"  "<<arr[4][0]<<"|"<<sum5<<endl;
	}
};
int main(){
	Data obj;
	obj.add();
	obj.CalculateSales();
	obj.disp();
	return 0;
}






