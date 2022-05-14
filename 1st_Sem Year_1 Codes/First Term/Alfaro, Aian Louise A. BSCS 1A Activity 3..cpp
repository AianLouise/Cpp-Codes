#include<iostream>
using namespace std;

int main(){
	int num,output;
	
	cout<<"Enter Number: ";
	cin>>num;
	
	if(num % 2 == 0 && num !=0 ){
		cout<<num<<" is divisible by 2 ( 2 multiplied by "<<num/2<<" )."<<endl;
	}
	else if(num == 0 ){
		cout<<"Unable to divide.";
	}
	else{
		cout<<num<<" is not divisible by 2."<<endl;	
	}
}
