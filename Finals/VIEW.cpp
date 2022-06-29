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
    	system("MAIN.exe");
    }
    else
    {
        cout << "COMPANY PAYROLL" << endl;
        cout << "=========================================================================================================\n" << endl;
            
            while (!myFILE.eof())
            {
                myFILE.getline (DATA, 100); 
                if (strcmp (DATA, "!")==0)
                {
                    cout << endl;
                }
                else
                {
                    cout << DATA << "\t";
                }
            }
            
            cout << endl;
       }
        myFILE.close();
}
