// Aian louise A. Alfaro
// BSCS 1A
// Activity 2
#include<iostream>
using namespace std;

int main () {
	int grade;
	
	cout<<"Enter Final Grade: ";
	cin>>grade;
	
	if(grade >= 90 && grade <= 99){
		cout<<grade<<" is equivalent to A.";
	}
	else if(grade >= 80 && grade <= 89){
		cout<<grade<<" is equivalent to B.";
	}
	else if(grade >= 70 && grade <= 79){
		cout<<grade<<" is equivalent to C.";
	}
	else if(grade >= 60 && grade <= 69){
		cout<<grade<<" is equivalent to D.";
	}
	else{
		cout<<"Failed";
	}
		
}
