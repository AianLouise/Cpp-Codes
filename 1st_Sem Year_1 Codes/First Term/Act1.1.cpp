#include<iostream>
using namespace std;

int main(){
	int BirthYear, Age;
	
	cout << "Enter your birth year -> ";
	cin >> BirthYear;
	Age = 2021 - BirthYear;
	
	cout << "Your age is " << Age;
	return 0;
}
