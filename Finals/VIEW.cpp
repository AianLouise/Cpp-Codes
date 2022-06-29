#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<conio.h>
#include<cstring>
#include<ctime>
#include<iomanip>
using namespace std;

int main(){
	
    fstream myFILE;
    char DATA[100];
    system("CLS");
    myFILE.open("Order.txt", ios::in); 
    if (myFILE == NULL)
    {	
        cout << "No saved record  for orders" << endl;
        cout << "Press any key..." << endl;
    	getch();
    	system("CLS");
    	system("MAIN.exe");
    }
    else
    {
    	myFILE.getline (DATA, 100); 
    	while (!myFILE.eof())
	    {
	    	myFILE.getline (DATA, 100); 
	    	cout << DATA << endl;
		}
		myFILE.close();
		cout << "ALL RECORDS HAS BEEN DISPLAYED" << endl;
    	cout << "Press any key..." << endl;
    	getch();
	    system("CLS");
		system("MAIN.exe");
    }
    
    
  return 0;
}












