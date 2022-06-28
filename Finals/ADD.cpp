#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<conio.h>
#include<cstring>
using namespace std;

struct ULAMCODES
{
	char code[50], ulam[50];
	int price;
};

int main(){
	ULAMCODES a[50];
	char name[50], address[100], codeInput;
	int contactNum, numInput;
	fstream myFILE;
	cout << "-=* Welcome to MAMA MIA RESTAURANT *=-" << endl;
    cout << "________________________________________________________________________________________________" << endl;
    cout << "ULAM MENU" << endl;
    cout << "________________________________________________________________________________________________" << endl;
    cout << "	SILOG MEALS" << endl;
    cout << "		  S1		   Tocilog	    80.00" << endl;
    cout << "		  S2		  Tapsilog	    80.00" << endl;
    cout << "		  S3		 Porksilog	    80.00" << endl;
    cout << "		  S4		Chicksilog	    80.00" << endl;
	strcpy(a[0].code, "S1"); strcpy(a[0].ulam, "Tocilog"); a[0].price = 80;
	strcpy(a[1].code, "S2"); strcpy(a[1].ulam, "Tapsilog"); a[1].price = 80;
	strcpy(a[2].code, "S3"); strcpy(a[2].ulam, "Porksilog"); a[2].price = 80;
	strcpy(a[3].code, "S4"); strcpy(a[3].ulam, "Chicksilog"); a[3].price = 80;
    cout << "\n	PORK" << endl;
	cout << "		  P1	     Lechon Kawali	    60.00" << endl;
	cout << "		  P2	    Sisig with Egg	    60.00" << endl;
	cout << "		  P3	     Tokwa't Baboy	    60.00" << endl;
	cout << "		  P4	      Fried Liempo	    75.00" << endl;
	cout << "		  P5	        Dinakdakan	    100.00" << endl;
	cout << "		  P6	               BBQ	    100.00" << endl;
	cout << "		  P7	            Bistek	    150.00" << endl;
	strcpy(a[4].code, "P1"); strcpy(a[4].ulam, "Chicksilog"); a[4].price = 80;
	strcpy(a[5].code, "P2"); strcpy(a[5].ulam, "Chicksilog"); a[5].price = 80;
	strcpy(a[6].code, "P3"); strcpy(a[6].ulam, "Chicksilog"); a[6].price = 80;
	strcpy(a[7].code, "P4"); strcpy(a[7].ulam, "Chicksilog"); a[7].price = 80;
	strcpy(a[8].code, "P5"); strcpy(a[8].ulam, "Chicksilog"); a[8].price = 80;
	strcpy(a[9].code, "P6"); strcpy(a[9].ulam, "Chicksilog"); a[9].price = 80;
	strcpy(a[10].code, "P7"); strcpy(a[10].ulam, "Chicksilog"); a[10].price = 80;
	cout << "\n	CHICKEN" << endl;
	cout << "		  C1	     Fried Chicken	    80.00" << endl;
	cout << "		  C2		    Fillet	    80.00" << endl;
	cout << "		  C3		    Bistek	    100.00" << endl;
	cout << "		  C4	       Cordon Bleu	    120.00" << endl;
	cout << "		  C5	      Honey Glazed	    120.00" << endl;
	cout << "		  C6	     Buffalo Wings	    150.00" << endl;
	strcpy(a[11].code, "C1");
	strcpy(a[12].code, "C2");
	strcpy(a[13].code, "C3");
	strcpy(a[14].code, "C4");
	strcpy(a[15].code, "C5");
	strcpy(a[16].code, "C6");
	cout << "\n	VEGETABLES" << endl;
	cout << "		  V1	      Fresh Lumpia	    80.00" << endl;
	cout << "		  V2	      Fried Lumpia	    80.00" << endl;
	cout << "		  V3	          Chopsuey	    100.00" << endl;
	cout << "		  V4	          Ensalada	    120.00" << endl;
	strcpy(a[17].code, "V1");
	strcpy(a[18].code, "V2");
	strcpy(a[19].code, "V3");
	strcpy(a[20].code, "V4");
	cout << "\n	DRINKS" << endl;
	cout << "		  D1	           Gulaman	    50.00" << endl;
	cout << "		  D2	          Lemonade	    50.00" << endl;
	cout << "		  D3	        Buko Juice	    50.00" << endl;
	cout << "		  D4	         Coke 1.5L	    70.00" << endl;
	cout << "		  D5	       Sprite 1.5L	    70.00" << endl;
	strcpy(a[21].code, "D1");
	strcpy(a[22].code, "D2");
	strcpy(a[23].code, "D3");
	strcpy(a[24].code, "D4");
	strcpy(a[25].code, "D5");
	cout << "\nCustomer Name: "; cin >> name;
	cout << "Customer Address: "; cin >> address;
	cout << "Customer Contact Number: "; cin >> address;
	cout << "CUSTOMER ORDER" << endl;
	cout << "	How many ULAM CODES do you need to input?: "; cin >> numInput;
	for (int i = 0; i < numInput; i++)
	{
		cout << "ULAM CODE: ";
	}
}

