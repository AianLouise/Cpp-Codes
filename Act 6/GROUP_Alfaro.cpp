#include<iostream>
#include<fstream>   
#include<cstring>
using namespace std;

int main(){
    system("CLS");
    int input;
    int employee_Num, employee_BP;
    char employee_FN[50], employee_LN[50], employee_Pos[50];  

    ofstream myFILE;

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
		myFILE.open("GROUP_Alfaro.txt");
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
                strcpy(employee_Pos, "Assitant Lvl 2");
                employee_BP = 30000;
            }
            else if (input == 3)
            {
                strcpy(employee_Pos, "Assitant Lvl 1");
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
        cout << "DEDUCTIONS:" << endl;
        cout << "                                   Phil.Health:               " << (1.2 / 100 )* employee_BP << endl;
        cout << "                                          HDMF:" << endl;
        cout << "                                     Insurance:" << endl;
        cout << "                                           TAX:" << endl;
        cout << "                                 Coop. Savings:" << endl;
        cout << "                              INPUT Coop. Loan:" << endl;
            
            
            

        myFILE << employee_Num << endl;
        myFILE << employee_FN << endl;
        myFILE << employee_LN << endl;
        myFILE << employee_Pos << endl;
	    break;
	    
	case 2:
	    
	    break;
	    
	case 3:
	    
	    break;
	    
	default:
		cout << "";
	    break;
	}
    
    
    return 0;
}
