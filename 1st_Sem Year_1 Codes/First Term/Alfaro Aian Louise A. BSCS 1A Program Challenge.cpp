// Aian louise A. Alfaro
// BSCS 1A
// Programming Challenge
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<stdlib.h>
using namespace std;

int main (){
	start:
	int numOfTries = 5, randomNum , guessNum;
	char tryAgain;
	
	srand(time(0));
	randomNum = (rand()%100)+1;
	
	cout<<"Enter guess number: ";
	again:
	cin>>guessNum;
	if(guessNum >= 1 && guessNum <= 100){
		if(guessNum > randomNum && numOfTries != 0){
			cout<<"					Lower!!"<<endl;
			cout<<numOfTries<<" Try. Enter guess number again: ";
			numOfTries--;
			goto again;
		}
		else if(guessNum < randomNum  && numOfTries != 0){
			cout<<"					Higher!!"<<endl;
			cout<<numOfTries<<" Try. Enter guess number again: ";
			numOfTries--;
			goto again;
		}
		else if(guessNum == randomNum){
			cout<<"\nYou win."<< endl;
			cout<<"Try Again Y/N? ";
			cin>>tryAgain;
			if(tryAgain =='y' || tryAgain =='Y'){
				system("CLS");
				goto start;
			}
		}
		else{
			cout<<"\nTry Again."<<endl;
			cout<<"The correct number is "<< randomNum << endl;
			cout<<"Try Again Y/N? ";
			cin>>tryAgain;
			if(tryAgain =='y' || tryAgain =='Y'){
				system("CLS");
				goto start;
				}
		}	
	}
	else{
		cout<<"Invalid"<<endl;
		cout<<"Try Again Y/N? ";
		cin>>tryAgain;
		if(tryAgain =='y' || tryAgain =='Y'){
			system("CLS");
			goto start;
			}
	}
		
}
