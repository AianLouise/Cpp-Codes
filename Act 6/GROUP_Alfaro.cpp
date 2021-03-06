#include<iostream>
#include<fstream>   
#include<cstring>
#include<iomanip>
using namespace std;

int main(){
    system("CLS");
    int input, w = 20;
    double employee_Num, employee_BP, hdmf, employee_Insur, employee_Tax, employee_CoopSavings, employee_CoopLoan, employee_totalDeduct, employee_netPay, phil_Health;
    char employee_FN[50], employee_LN[50], employee_Pos[50];  
    char search_FN[50], search_LN[50], search[50], name[50], search_Name[50];
    char DATA [100];

    fstream myFILE;
    main:
    cout << "=========================================================================================================" << endl;
    cout << "\nCREATE PAYSLIP?" << endl;
    cout << "1 - YES" << endl;
    cout << "2 - DISPLAY PAYROLL" << endl;
    cout << "3 - DISPLAY PAYSLIP" << endl;
    cout << "... or enter any key to END PROGRAM" << endl;
    cout << "=========================================================================================================" << endl;
    cout << "\nInput 1,2 or 3: ";
    cin >> input;
    
	switch (input)
	{
	case 1:
		system("CLS");
		myFILE.open("PAYROLL.txt", ios::app | ios::out);
	    cout << "This program is designed to create payslip" << endl;
	    cout << "\n=========================================================================================================\n" << endl;
	    cout << "INPUT EMPLOYEE NUMBER: " ; cin >> employee_Num;
        cin.ignore();
	    cout << "INPUT EMPLOYEE FIRST NAME: " ; cin.getline(employee_FN, 100);
	    cout << "INPUT EMPLOYEE LAST NAME: " ; cin.getline(employee_LN, 100);
        again:
	    cout << "SELECT EMPLOYEE POSITION" << endl;
	    cout << "		1 - Manager" << endl;
	    cout << "		2 - Assitant Lvl 2" << endl;
	    cout << "		3 - Assitant Lvl 1" << endl;
	    cout << "		4 - Clerk Lvl 2" << endl;
	    cout << "		5 - Clerk Lvl 1" << endl;
	    cout << "		6 - Receptionist" << endl;
	    cout << "		7 - Security Officer" << endl;
	    cout << "		8 - Utility Officer" << endl;
        cout << "\nINPUT (1-8): "; cin >> input;
            if (input == 1)
            {
                strcpy(employee_Pos, "Manager");
                employee_BP = 50000;
            }
            else if (input == 2)
            {
                strcpy(employee_Pos, "Assistant Lvl 2");
                employee_BP = 30000;
            }
            else if (input == 3)
            {
                strcpy(employee_Pos, "Assistant Lvl 1");
                employee_BP = 25000;
            }
            else if (input == 4)
            {
                strcpy(employee_Pos, "Clerk Lvl 2");
                employee_BP = 20000;
            }
            else if (input == 5)
            {
                strcpy(employee_Pos, "Clerk Lvl 1");
                employee_BP = 18000;
            }
            else if (input == 6)
            {
                strcpy(employee_Pos, "Receptionist");
                employee_BP = 15000;
            }
            else if (input == 7)
            {
                strcpy(employee_Pos, "Security Officer");
                employee_BP = 12500;
            }
            else if(input == 8)
            {
                strcpy(employee_Pos, "Utility Officer");
                employee_BP = 10000;
            }
            else
            {
                cout << "Invalid Input. " ;
                goto again;
            }
        
        cout << "\n=========================================================================================================\n" << endl;
        phil_Health = (1.2 / 100) * employee_BP;
        hdmf = 100;
        employee_Insur = (2.0 / 100) * employee_BP;
        if (employee_BP < 25000)
        {
            employee_Tax = 0;
        }
        else
        {
            employee_Tax = (2.5 / 100) * employee_BP;
        }
        employee_CoopSavings = (employee_BP - (phil_Health + hdmf + employee_Insur + employee_Tax)) * (5.0 / 100);
        cout << "DEDUCTIONS:" << endl;
        cout << "                                   Phil.Health:" << setw(w) << phil_Health << endl;
        cout << "                                          HDMF:" << setw(w) << hdmf << endl;
        cout << "                                     Insurance:" << setw(w) << employee_Insur << endl;
        cout << "                                           TAX:" << setw(w) << employee_Tax << endl;
        cout << "                                 Coop. Savings:" << setw(w) << employee_CoopSavings << endl;
        cout << "                              INPUT Coop. Loan: "; cin >> employee_CoopLoan;
        cout << "\n=========================================================================================================\n" << endl;
        employee_totalDeduct = phil_Health + hdmf + employee_Insur + employee_Tax + employee_CoopSavings + employee_CoopLoan;
        employee_netPay = employee_BP - employee_totalDeduct;
        cout << "SUMMARY:" << endl;
        cout << "                                     Basic Pay:" << setw(w) << employee_BP << endl;
        cout << "                               Total Deduction:" << setw(w) << employee_totalDeduct << endl;
        cout << "\n                                       NET PAY:" << setw(w) << employee_netPay << endl;
        
            myFILE << employee_Num << endl;
            myFILE << employee_FN << endl;
            myFILE << employee_LN << endl;
            myFILE << employee_Pos << endl;
            myFILE << phil_Health << endl;
            myFILE << hdmf << endl;
            myFILE << employee_Insur << endl;
            myFILE << employee_Tax << endl;
            myFILE << employee_CoopSavings << endl;
            myFILE << employee_CoopLoan << endl;
            myFILE << employee_BP << endl;
            myFILE << employee_totalDeduct << endl;
            myFILE << employee_netPay << endl;
            myFILE << "!" << endl;
        myFILE.close();
        strcpy(name, "");
        strcat(name, employee_LN);
        strcat(name, "_");
        strcat(name, employee_FN);
        strcat(name, ".txt");
        myFILE.open(name, ios::out);
            myFILE << employee_Num << endl;
            myFILE << employee_FN << endl;
            myFILE << employee_LN << endl;
            myFILE << employee_Pos << endl;
            myFILE << phil_Health << endl;
            myFILE << hdmf << endl;
            myFILE << employee_Insur << endl;
            myFILE << employee_Tax << endl;
            myFILE << employee_CoopSavings << endl;
            myFILE << employee_CoopLoan << endl;
            myFILE << employee_BP << endl;
            myFILE << employee_totalDeduct << endl;
            myFILE << employee_netPay << endl;
        myFILE.close();
        strcpy(name, "");
        cout << "=========================================================================================================\n" << endl;
        cout << "PAYSLIP for " << employee_FN << " " << employee_LN <<" has been created." << endl;
        cout << employee_FN << " " << employee_LN <<" was included in PAYROLL file.";
        cout << "\n=========================================================================================================\n\n" << endl;
        goto main;
	    break;
	    
	case 2:
	    system("CLS");
        myFILE.open("PAYROLL.txt", ios::in); 
        if (myFILE == NULL)
        {	
        	cout << "=========================================================================================================\n\n" << endl;
            cout << "No PAYROLL file created yet.\n\n\n" ;
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
        goto main;
	    break;
	    
	case 3:
        system("CLS");
        cin.ignore();
        strcpy(search_Name, "");
	    cout << "DISPLAY PAYSLIP" << endl;
	    cout << "=========================================================================================================\n" << endl;
		cout << "Type Employee LAST NAME: "; cin.getline(search_LN, 100);
	    cout << "Type Employee FIRST NAME: "; cin.getline(search_FN, 100);
	    cout << "=========================================================================================================\n" << endl;
	    strcpy(search_Name, "");
	    strcat(search_Name, search_LN);
	    strcat(search_Name, "_");
	    strcat(search_Name, search_FN);
	    strcat(search_Name, ".txt");
			
		myFILE.open(search_Name, ios::in); 
	    if (myFILE == NULL)
	    {	
	        cout << search_Name << " does not exist.\n\n" ;
	    }
	    else
	    {
	      	while (!myFILE.eof())
	        {
	            myFILE.getline (DATA, 100); 
	            cout << "EMPLOYEE NUMBER: " << DATA << endl;
	            myFILE.getline (DATA, 100); 
	            cout << "EMPLOYEE FIRST NAME: " << DATA  << endl;
	            myFILE.getline (DATA, 100); 
	            cout << "EMPLOYEE LAST NAME: " << DATA << endl;
	            myFILE.getline (DATA, 100); 
	            cout << "EMPLOYEE POSITION: " << DATA << endl;
	            cout << "\nDEDUCTIONS" << endl;
	            myFILE.getline (DATA, 100); 
	            cout << "	PHIL.HEALTH: " << DATA << endl;
	            myFILE.getline (DATA, 100); 
	            cout << "	HDMF: " << DATA   << endl;
	            myFILE.getline (DATA, 100); 
	            cout << "	INSURANCE: " << DATA << endl;
	            myFILE.getline (DATA, 100); 
	            cout << "	TAX: " << DATA << endl;
	            myFILE.getline (DATA, 100); 
	            cout << "	COOP. SAVINGS: " << DATA << endl;
	            myFILE.getline (DATA, 100); 
	            cout << "	COOP LOAN: " << DATA << endl;
	            cout << "\nSUMMARY"  << endl;
	            myFILE.getline (DATA, 100); 
	            cout << "	BASIC PAY: " << DATA << endl;
	            myFILE.getline (DATA, 100); 
	            cout << "	TOTAL DEDUCTIONS: " << DATA << endl;
	            myFILE.getline (DATA, 100); 
	            cout << "	NET PAY: " << DATA << endl;
	            break;
	            }
    	}
        myFILE.close();
        goto main;
	    break;
	    
	default:
		cout << "PROGRAM HAS BEEN TERMINATED" << endl;
		system("Pause");
	    break;
	}
    
    
    return 0;
}
