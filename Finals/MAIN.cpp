#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main(){
    int select;
    cout << "-=* Welcome to MAMA MIA RESTAURANT *=-\n" << endl;
    cout << "-------------------------------------------------------------------------------------" << endl;
    cout << "1 - Input Order" << endl;
    cout << "2 - View Sales" << endl;
    cout << "3 - Close the Program" << endl;
    cout << "-------------------------------------------------------------------------------------" << endl;
    input:
    cout << "Input 1, 2 or 3: " ; cin >> select;
    switch (select){
    	case 1:
    		system("cls");
    		system("ADD.exe");
    		break;
    	case 2:
    		system("cls");
    		system("VIEW.exe");
    		break;
    	case 3:
    		system("cls");
    		cout << "Program will be terminated." << endl;		
    		cout << "Press any key..." << endl;
    		getch();
    		return 0;
    		break;
    	default:
    		cout << "Invalid input" << endl;
    		goto input;
    		break;
	}
}
