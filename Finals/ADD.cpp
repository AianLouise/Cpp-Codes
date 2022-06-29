#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<conio.h>
#include<cstring>
#include<ctime>
#include<iomanip>
using namespace std;

struct ULAMCODES
{
	char code[50], ulam[50], codeInput[50], orderName[50];
	int price, orderQuantity;
};

int main(){
	system("CLS");
	ULAMCODES a[50];
	char name[50], address[100], contactNum[50];
	int numInput, b = 0, amountDue = 0, w = 5;
	fstream myFILE;
	cout << "-=* Welcome to MAMA MIA RESTAURANT *=-" << endl;
    cout << "________________________________________________________________________________________________" << endl;
    cout << "ULAM MENU" << endl;
    cout << "________________________________________________________________________________________________" << endl;
    cout << "	SILOG MEALS" << endl;
    cout << "		  S1		   Tocilog	    80.00" << endl;	strcpy(a[0].code, "S1"); strcpy(a[0].ulam, "Tocilog"); a[0].price = 80;
    cout << "		  S2		  Tapsilog	    80.00" << endl;	strcpy(a[1].code, "S2"); strcpy(a[1].ulam, "Tapsilog"); a[1].price = 80;
    cout << "		  S3		 Porksilog	    80.00" << endl;	strcpy(a[2].code, "S3"); strcpy(a[2].ulam, "Porksilog"); a[2].price = 80;
    cout << "		  S4		Chicksilog	    80.00" << endl;	strcpy(a[3].code, "S4"); strcpy(a[3].ulam, "Chicksilog"); a[3].price = 80;
    cout << "\n	PORK" << endl;
	cout << "		  P1	     Lechon Kawali	    60.00" << endl;	strcpy(a[4].code, "P1"); strcpy(a[4].ulam, "Lechon Kawali"); a[4].price = 60;
	cout << "		  P2	    Sisig with Egg	    60.00" << endl;	strcpy(a[5].code, "P2"); strcpy(a[5].ulam, "Sisig with Egg"); a[5].price = 60;
	cout << "		  P3	     Tokwa't Baboy	    60.00" << endl;	strcpy(a[6].code, "P3"); strcpy(a[6].ulam, "Tokwa't Baboy"); a[6].price = 60;
	cout << "		  P4	      Fried Liempo	    75.00" << endl;	strcpy(a[7].code, "P4"); strcpy(a[7].ulam, "Fried Liempo"); a[7].price = 75;
	cout << "		  P5	        Dinakdakan	    100.00"<< endl; strcpy(a[8].code, "P5"); strcpy(a[8].ulam, "Dinakdakan"); a[8].price = 100;
	cout << "		  P6	               BBQ	    100.00"<< endl;	strcpy(a[9].code, "P6"); strcpy(a[9].ulam, "BBQ"); a[9].price = 100;
	cout << "		  P7	            Bistek	    150.00"<< endl;	strcpy(a[10].code, "P7"); strcpy(a[10].ulam, "Bistek"); a[10].price = 150;
	cout << "		  P8   Sweet and Sour Pork	    150.00"<< endl;	strcpy(a[11].code, "P8"); strcpy(a[11].ulam, "Sweet and Sour Pork"); a[11].price = 150;
	cout << "\n	CHICKEN" << endl;
	cout << "		  C1	     Fried Chicken	    80.00" << endl;	strcpy(a[12].code, "C1"); strcpy(a[12].ulam, "Fried Chicken"); a[12].price = 80;
	cout << "		  C2		    Fillet	    80.00"     << endl;	strcpy(a[13].code, "C2"); strcpy(a[13].ulam, "Fillet"); a[13].price = 80;
	cout << "		  C3		    Bistek	    100.00"    << endl;	strcpy(a[14].code, "C3"); strcpy(a[14].ulam, "Bistek"); a[14].price = 100;
	cout << "		  C4	       Cordon Bleu	    120.00"<< endl; strcpy(a[15].code, "C4"); strcpy(a[15].ulam, "Cordon Bleu"); a[15].price = 120;
	cout << "		  C5	      Honey Glazed	    120.00"<< endl; strcpy(a[16].code, "C5"); strcpy(a[16].ulam, "Honey Glazed"); a[16].price = 120;
	cout << "		  C6	     Buffalo Wings	    150.00"<< endl; strcpy(a[17].code, "C6"); strcpy(a[17].ulam, "Buffalo Wings"); a[17].price = 150;
	cout << "\n	VEGETABLES" << endl;
	cout << "		  V1	      Fresh Lumpia	    80.00" << endl;	strcpy(a[18].code, "V1"); strcpy(a[18].ulam, "Fresh Lumpia"); a[18].price = 80;
	cout << "		  V2	      Fried Lumpia	    80.00" << endl;	strcpy(a[19].code, "V2"); strcpy(a[19].ulam, "Fried Lumpia"); a[19].price = 80;
	cout << "		  V3	          Chopsuey	    100.00"<< endl;	strcpy(a[20].code, "V3"); strcpy(a[20].ulam, "Chopsuey"); a[20].price = 100;
	cout << "		  V4	          Ensalada	    120.00"<< endl;	strcpy(a[21].code, "V4"); strcpy(a[21].ulam, "Ensalada"); a[21].price = 120;
	cout << "\n	DRINKS" << endl;
	cout << "		  D1	           Gulaman	    50.00" << endl;	strcpy(a[22].code, "D1"); strcpy(a[22].ulam, "Gulaman"); a[22].price = 50;
	cout << "		  D2	          Lemonade	    50.00" << endl;	strcpy(a[23].code, "D2"); strcpy(a[23].ulam, "Lemonade"); a[23].price = 50;
	cout << "		  D3	        Buko Juice	    50.00" << endl;	strcpy(a[24].code, "D3"); strcpy(a[24].ulam, "Buko Juice"); a[24].price = 50;
	cout << "		  D4	         Coke 1.5L	    70.00" << endl;	strcpy(a[25].code, "D4"); strcpy(a[25].ulam, "Coke 1.5L"); a[25].price = 70;
	cout << "		  D5	       Sprite 1.5L	    70.00" << endl;	strcpy(a[26].code, "D5"); strcpy(a[26].ulam, "Sprite 1.5L"); a[26].price = 70;

	cout << "\nCustomer Name: "; cin.getline(name, 100);
	cout << "Customer Address: "; cin.getline(address, 100);
	cout << "Customer Contact Number: "; cin.getline(contactNum, 100);
	cout << "CUSTOMER ORDER" << endl;
	orderAgain:
	amountDue = 0;	
	cout << "	How many ULAM CODES do you need to input?: "; cin >> numInput;
	cin.ignore();
	for (int i = 0; i < numInput; i++)
	{
		again:	
		b = 0;
		cout << "ULAM CODE: "; cin.getline(a[i].codeInput, 100);
		for (int j = 0; j < 27; j++)
		{
			if (strcmpi(a[i].codeInput, a[j].code)==0)
			{
				b = 1;
				a[i].orderQuantity++;
			}
		}
		if (b == 0)
		{
			cout << "INVALID INPUT. ";
			goto again;
		}
	}
	
	cout << "===============================================" << endl;
	cout << "CUSTOMER NAME: " << name << endl;
	cout << "CUSTOMER ADDRESS: " << address << endl;
	cout << "CUSTOMER CONTACT NUMBER: " << contactNum << endl;
	cout << "SUMMARY OF ORDER" << endl;
	for (int i = 0; i < 27; i++)
	{
		a[i].orderQuantity = 0;
	}
	for (int i = 0; i < numInput; i++)
	{
		for (int j = 0; j < 27; j++)
		{
			if (strcmpi(a[i].codeInput, a[j].code)==0)
			{
				a[j].orderQuantity++;
				amountDue += a[j].price;
			}
		}
	}
	for (int i = 0; i < 27; i++)
	{
		if (a[i].orderQuantity > 0)
		{
			cout << a[i].orderQuantity << " * " << a[i].price << "\t" << a[i].ulam << endl;	
		}
	}
	int select;
	cout << "	IS THE ORDER CORRECT?" << endl;
	cout << "		1 - YES" << endl;
	cout << "		2 - NO, Input Again" << endl;
	cout << "		3 - CANCEL Order" << endl;
	input:
	cout << "		Input 1,2 or 3: " ; cin >> select;
	time_t curr_time; curr_time = time(NULL);
	char *tm = ctime(&curr_time);
	switch (select){
    	case 1:
    		cout << "===============================================" << endl;
			cout << "TOTAL AMOUNT DUE: " << amountDue << endl;
			cout << "DATE and TIME of ORDER: " << tm;
			myFILE.open("Order.txt", ios::app | ios::out);
			myFILE << "===========================================================================\n" << endl;
			myFILE << "CUSTOMER NAME: " << name << endl;
			myFILE << "CUSTOMER ADDRESS: " << address << endl;
			myFILE << "CUSTOMER CONTACT NUMBER: " << contactNum << endl;
			myFILE << "-------------------------------------------------" << endl;
			for (int i = 0; i < 27; i++)
			{
				if (a[i].orderQuantity > 0)
				{
					myFILE << "\t" << a[i].orderQuantity << " * " << a[i].price << "\t" << a[i].ulam << endl;
				}
			}
			myFILE << "TOTAL AMOUNT DUE: " << amountDue << endl;
			myFILE << tm ;
			myFILE.close();
			cout << "Press any key..." << endl;
			getch();
			system("CLS");
			system("MAIN.exe");
    		break;
    	case 2:
    		goto orderAgain;
    		break;
    	case 3:
    		cout << "ORDER HAS BEEN CANCELLED" << endl;		
    		cout << "Press any key..." << endl;
    		getch();
    		system("CLS");
			system("MAIN.exe");	
    		break;
    	default:
    		cout << "Invalid input" << endl;
    		goto input;
    		break;
	}
		return	0;
}
