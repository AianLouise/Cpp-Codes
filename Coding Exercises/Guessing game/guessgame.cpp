// Aian louise A. Alfaro
// BSCS 1A
// Programming Challenge 
// Guessing Game with Difficulties
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<stdlib.h>
using namespace std;

int main (){
	start:
	system("CLS");
	int numOfTries = 5, randomNum, guessNum, numLimit, score;
	char tryAgain;
	srand(time(0));

	cout<<"========================================================================" << endl;
	cout<<"|                        Welcome to Guessing Game.                     |" << endl;
	cout<<"========================================================================" << endl;

	//Input Difficulty
	gameMode:
	int gameMode;
	cout<<"Choose Difficulty: " << endl;
	cout<<"=========================" << endl;
	cout<<"|      1 - Easy         |" << endl;
	cout<<"|      2- Normal        |" << endl;
	cout<<"|      3 - Hard         |" << endl;
	cout<<"=========================" << endl;
	cout<<"-> ";
	cin >> gameMode;

	switch (gameMode){

	case 1://Easy
		randomNum = (rand()%10)+1;
		numLimit = 10;
		system("CLS");
		cout<<"============================" << endl;
		cout<<"| Guessing Game: Easy Mode |" << endl;
		cout<<"============================" << endl;
		cout<<"Enter guess number (Between 1 - 10): ";
	
		break;//EasyMode End Case

	case 2://Normal
		randomNum = (rand()%50)+1;
		numLimit = 50;
		system("CLS");
		cout<<"==============================" << endl;
		cout<<"| Guessing Game: Normal Mode |" << endl;
		cout<<"==============================" << endl;
		cout<<"Enter guess number (Between 1 - 50): ";
	
		break;// NormalMode End Case

	case 3://Hard
		randomNum = (rand()%100)+1;
		numLimit = 100;
		system("CLS");
		cout<<"============================" << endl;
		cout<<"| Guessing Game: Hard Mode |" << endl;
		cout<<"============================" << endl;
		cout<<"Enter guess number: (Between 1 - 100): ";

		break;//HardMode End Case

	default:
		cout << "Invalid Keyword! Try Again!" << endl;
		goto gameMode;
		break;
	}
	
	again:
	cin >> guessNum;//Input Guess
	//Process and Output
	if(guessNum >= 1 && guessNum <= numLimit){
		if(guessNum > randomNum && numOfTries != 0){
			cout<<"					Lower!!"<<endl;
			cout<<numOfTries<<" Try. Enter guess number again: ";
			numOfTries--;
			goto again;
		} else if(guessNum < randomNum  && numOfTries != 0){
			cout<<"					Higher!!"<<endl;
			cout<<numOfTries<<" Try. Enter guess number again: ";
			numOfTries--;
			goto again;
		} else if(guessNum == randomNum){
			system("CLS");
			cout<<"=====================================" << endl;
			cout<<"|     Congratulations! You win.     |"<< endl;
			cout<<"=====================================" << endl;
			cout<<"The correct number is "<< randomNum << "." << endl;
			int finalTries = 6 - numOfTries;
			cout<<"You get the correct number in just "<< finalTries << " try. Good Job!" << endl;
			cout<<"Do you want to play again? Y/N? ";
			cin>>tryAgain;
			if(tryAgain =='y' || tryAgain =='Y'){
				system("CLS");
				goto start;
			}
		} else{
			system("CLS");
			cout<<"=====================================" << endl;
			cout<<"|      You Lose! Out of tries!      |"<< endl;
			cout<<"=====================================" << endl;
			cout<<"The correct number is "<< randomNum << "." << endl;
			cout<<"Try Again Y/N? ";
			cin>>tryAgain;
			if(tryAgain =='y' || tryAgain =='Y'){
				system("CLS");
				goto start;
				}
		}	
	} else{
		cout<<"Invalid"<<endl;
		cout<<"Try Again Y/N? ";
		cin>>tryAgain;
		if(tryAgain =='y' || tryAgain =='Y'){
			system("CLS");
			goto start;
			}
		else{
			exit(1);
		}
	}
	return 0;
}
