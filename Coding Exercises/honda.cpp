#include<iostream>

using namespace std;
int main()
{
	char opt, mop;
	float interest, select, atpNum;
	int totalInt, totalAmnt, ATP,  bal;
	int cash, change, amountToPay, year;
	
	cout<<"\n				*************HONDA MOTORS PHILIPPINES BIGBIKES*************";
	cout<<"\n\n				UNIT				PRICE			KEY";
	cout<<"\n\n				AFRICAN TWIN_1083cc		950,000			[A]";
	cout<<"\n				AFRICAN X-ADV_74cc		843,000			[B]";
	cout<<"\n				CB500X_471cc			384,000			[C]";
	cout<<"\n				CBR FIREBLAZE1000cc		1,500,000		[D]";
	cout<<"\n				GOLDWING_1833cc			2,000,000		[E]";
	
	again:
	cout<<"\n\n				OPTION:	";
	cin>> opt;
	
	if (opt == 'A' || opt == 'a')
	{
		cout << "				Unit: AFRICAN TWIN_1083cc" << endl;
		cout << "				Unit Price: 950,000" << endl;
		amountToPay = 950000;
	}
	else if (opt == 'B' || opt == 'b')
	{
		cout << "				Unit: AFRICAN X-ADV_74cc" << endl;
		cout << "				Unit Price: 843,000" << endl;
		amountToPay = 843000;
	}
	else if (opt == 'C' || opt == 'c')
	{
		cout << "				Unit: CB500X_471cc" << endl;
		cout << "				Unit Price: 384,000" << endl;
		amountToPay = 384000;
	}
	else if (opt == 'D' || opt == 'd')
	{
		cout << "				Unit: CBR FIREBLAZE1000cc" << endl;
		cout << "				Unit Price: 1,500,000" << endl;
		amountToPay= 1500000;
	}
	else if (opt == 'E' || opt == 'e')
	{
		cout << "				UNIT: GOLDWING_1833cc" << endl;
		cout << "				UNIT PRICE: 2,000,000" << endl;
		amountToPay = 2000000;
	}
	else
	{
		cout << "				INVALID INPUT!" ;
		goto again;
	}
	
	again2:
	cout << "\n\n				[C] CASH || [I] INSTALLMENT" << endl;
	cout <<	"				MODE OF PAYMENT: ";
	cin >> mop;

	if (mop == 'C' || mop == 'c')
	{
		again3:
		cout << "\n				AMOUNT TO PAY: " << amountToPay << endl;
		cout << "				CASH: ";
		cin >> cash;
		cash = cash - amountToPay;

		if (cash < 0)
		{
			cout << "\n				INSUFFICIENT FUNDS!" << endl;
			goto again3;
		}
		if (cash > 0)
		{
			cout << "				Change: " << cash;
		}
		
	}
	else if (mop == 'I' || mop == 'i')
	{
		cout << "\n				[1] 5% interest || [2] 10% interest || [3] 15% interest"  << endl;
		again4:
		cout << "\n				SELECT: ";
		cin >> select;
		if (select == 1)
		{
			interest = 0.05;
			atpNum = 12;
			year = 1;
		}
		else if (select == 2)
		{
			interest = 0.10;
			atpNum = 24;
			year = 2;
		}
		else if (select == 3)
		{
			interest = 0.15;
			atpNum = 36;
			year = 3;
		}
		else
		{
			cout << "INVALID INPUT!";
			goto again4;
		}

		totalInt = (amountToPay * interest) * 1;
		totalAmnt = amountToPay + totalInt;
		ATP = totalAmnt / atpNum;
		bal = totalAmnt - ATP;
		cout << "\n				Total Interest in "<< year <<" year: " << totalInt << endl;
		cout << "				Total Amount: " << totalAmnt << endl;
		cout << "				Amount to Pay: " << ATP << endl;
		cout << "				Balance: " << bal << endl;
		cout << "				Remaining Months: 11" << endl;
		again5:
		cout << "				Money: ";
		cin >> cash;
		cash = cash - amountToPay;

		if (cash < 0)
		{
			cout << "\n				INSUFFICIENT FUNDS!" << endl;
			goto again5;
		}
		if (cash > 0)
		{
			cout << "				Change: " << cash;
		}
	}
	else
	{
		cout << "				INVALID INPUT!" ;
		goto again2;
	}

}