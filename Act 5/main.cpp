#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;    
struct EMPLOYEE{
    int ID, grossPay, netPay;
    int philhealth, hdmf, tax, loan; 
    char LN[50], FN[50], MN[50], rank[50];
};
    
int main(){ 
    int max = 0;
    static int record = 0;
    static int pos = 0;
    static int size = 0;
    int searchId, found;
    char searchName[50];
    int rank;

    int min_num;
    int max_num;

    int a = 0, b = 0, id[50];

    EMPLOYEE e[50];
    main_menu:
    system("cls");
    cout << "============================================================================" << endl;
    cout << "                                   MAIN MENU" << endl;
    cout << "============================================================================" << endl;
    cout << "       1 - DISPLAY RECORDS" << endl;
    cout << "       2 - ADD RECORDS" << endl;
    cout << "       3 - UPDATE RECORDS" << endl;
    cout << "       4 - DELETE RECORDS" << endl;
    cout << "       5 - SEARCH RECORDS" << endl;
    cout << "       6 - CLOSE PROGRAM" << endl;
    cout << "============================================================================" << endl;
    cout << "Press 1 to 6: ";
    int select;
    cin >> select;
    while (select < 1 || select > 6)
    {
        cout << "Invalid Input. Press 1 to 6 only: ";
        cin >> select;
    }
    int w = 25;
        
    switch (select)
    {
    case 1:
        system("cls");
        cout << "============================================================================================================================================================================" << endl;
        cout << "                                                                           DISPLAY RECORDS" << endl;
        cout << "============================================================================================================================================================================" << endl;
        
        if (record == 0)//No Record
        {
            cout << "       No record to display.\n\n";
            cout << "       Do you want to add records now?" << endl;
            cout << "               PRESS 1 - YES" << endl;
            cout << "               PRESS 2 - GO BACK TO MAIN MENU" << endl;
            cout << "               PRESS 3 - CLOSE PROGRAM" << endl;
            cout << "                       INPUT (1-3): "; cin >> select;
            while (select < 1 || select > 4)
            {
                cout << "        INVALID INPUT. INPUT (1-3): "; cin >> select;  
            }
            if (select == 1)
            {
                goto add_records;
            }
            else if (select == 2)
            {
                goto main_menu;
            }
            else
            {
                cout<<"==========================================================\n";
                cout<<"Program has been terminated.\n";
                cout<<"Press any key to exit...";
                return 0;
            }
        }// No Record End
        cout << "EMPLOYEE ID" << setw(w);
        cout << "LAST NAME" << setw(w);
        cout << "FIRST NAME" << setw(w);
        cout << "MIDDLE NAME" << setw(w-5);
        cout << "RANK" << setw(w+3);
        cout << "GROSS SALARY" << setw(w);
        cout << "NET SALARY" << endl;
        
        for (int i = 0; i < max; i++)
        {
            if (e[i].ID != 0)
            { 
                cout << e[i].ID << setw(w+5);
                cout << e[i].LN << setw(w);
                cout << e[i].FN << setw(w);
                cout << e[i].MN << setw(w);
                cout << e[i].rank << setw(w-3);
                cout << e[i].grossPay << setw(w);
                cout << e[i].netPay;
                cout << endl;
            }
        }
        cout << "============================================================================================================================================================================" << endl;
        cout << "                                                                                                                                            TOTAL NUMBER OF RECORDS: " << record << endl;
        system("pause");
        goto main_menu;
        break;
    case 2:
        add_records:
        system("cls");
        cout << "============================================================================" << endl;
        cout << "                                ADD RECORDS" << endl;
        cout << "============================================================================" << endl;
        cout << "How many records do you want to add? ";
        cin >> max;
        min_num = 1;
        max_num = max;
        max += record;
        cin.ignore();
        for (int i = pos; i < max; i++)
        {
            system("cls");
            record++;
            pos++;
            cout << "============================================================================" << endl;
            cout << "                                ADD RECORDS" << endl;
            cout << "============================================================================" << endl;
            cout << "                           Adding record " << min_num << " of " <<  max_num << endl; min_num++;
            cout << "\nINPUT EMPLOYEE ID: " ; cin >> e[i].ID;
            cin.ignore();
            cout << "INPUT LAST NAME: " ; cin.getline(e[i].LN, 50);
            cout << "INPUT FIRST NAME: " ; cin.getline(e[i].FN, 50);
            cout << "INPUT MIDDLE NAME: " ; cin.getline(e[i].MN, 50);
            cout << "EMPLOYEE RANK " << endl;
            cout << "        1 - Instructor" << endl;
            cout << "        2 - Assistant Professor" << endl;
            cout << "        3 - Associate Professor" << endl;
            cout << "        4 - Professor" << endl;
            
            cout << "        INPUT EMPLOYEE RANK(1-4): " ; cin >> rank;
            
            while (rank < 1 || rank > 4)
            {
                cout << "        INVALID INPUT. INPUT EMPLOYEE RANK(1-4): "; cin >> rank;  
            }
            cout << "EMPLOYEE RANK: " ;
            if (rank == 1)
            {
                strcpy(e[i].rank, "Instructor");
                cout << "Instructor" << endl;
                e[i].grossPay = 30000;
                
            }
            else if (rank == 2)
            {
                strcpy(e[i].rank, "Assistant Professor");
                cout << "Assistant Professor" << endl;
                e[i].grossPay = 50000;
                
            }
            else if (rank == 3)
            {
                strcpy(e[i].rank, "Associate Professor");
                cout << "Associate Professor" << endl;
                e[i].grossPay = 100000;
                
            }
            else
            {
                strcpy(e[i].rank, "Professor");
                cout << "Professor" << endl;
                e[i].grossPay = 200000;
                
            }
            cout << "\nINPUT EMPLOYEE LOAN: " ; cin >> e[i].loan;
            e[i].philhealth = e[i].grossPay * 0.04;
            e[i].tax = e[i].grossPay * 0.25;
            e[i].hdmf = 100;
            e[i].netPay = e[i].grossPay - (e[i].philhealth + e[i].tax + e[i].hdmf + e[i].loan);
        
        }
        cout << "============================================================================" << endl;
        cout << setw(22) << max_num << " RECORD(S) SUCCESSFULLY ADDED\n" << endl;
        system("pause");
        cin.ignore();
        goto main_menu;
        break;
    case 3: 
        system("cls");
        cout << "============================================================================" << endl;
        cout << "                              UPDATE RECORDS" << endl;
        cout << "============================================================================" << endl;
        cout << "Input EMPLOYEE ID to UPDATE: " ;
        cin >> searchId;
        cout << "============================================================================" << endl;
        for (int i = 0; i < max; i++)
        {
           if (searchId == e[i].ID)
            {
                cout << "Do you want to UPDATE record of " << e[i].LN << ", " << e[i].FN << " " << e[i].MN << "?" << endl;
                cout << "       Input 1 - YES" << endl;
                cout << "       Input 2 - GO TO MAIN MENU" << endl;
                cout << "Press 1 or 2: ";
                cin >> select;
                while (select < 1 || select > 2)
                {
                    cout << "        INVALID INPUT. INPUT (1-2): "; cin >> select;  
                } 
                if (select == 1)
                {
                    cout << "Choose what you want to update" << endl;
                    cout << "1 - LAST NAME" << endl;
                    cout << "2 - FIRST NAME" << endl;
                    cout << "3 - MIDDLE NAME" << endl;
                    cout << "4 - EMPLOYEE RANK" << endl;
                    cout << "5 - LOAN" << endl;
                    cout << "       Input 1 to 5: ";
                    cin >> select;
                    cin.ignore();
                    if (select == 1)
                    {  
                        cout << "UPDATE LAST NAME: " ;
                        cin.getline(e[i].LN, 50);
                    }
                    else if (select == 2)
                    {
                        cout << "UPDATE FIRST NAME: " ;
                        cin.getline(e[i].LN, 50);
                    }
                    else if (select == 3)
                    {
                        cout << "UPDATE MIDDLE NAME: " ;
                        cin.getline(e[i].LN, 50);
                    }
                    else if (select == 4)
                    {
                        cout << "UPDATE EMPLOYEE RANK: " ;
                        cin.getline(e[i].LN, 50);
                    }
                    else
                    {
                        cout << "UPDATE LOAN: " ;
                        cin.getline(e[i].LN, 50); 
                    }
                    cout << "============================================================================" << endl;
                    cout << "Record of " << e[i].LN << ", " << e[i].FN << " " << e[i].MN << " has been UPDATED successfully." << endl;
                    cout << "============================================================================\n" << endl;
                }
                else if (select == 2)
                {
                    goto main_menu;
                }
            }
            
        }
        system("pause");
        goto main_menu;
        break;
    case 4:
        system("cls");
        found = 0;
        cout << "============================================================================" << endl;
        cout << "                              DELETE RECORDS" << endl;
        cout << "============================================================================" << endl;
        cout << "Input Employee ID to delete: ";
        cin >> searchId;
        for (int i = 0; i < max; i++)
        {
            if (searchId == e[i].ID)
            {
                cout << "Do you want to DELETE record of " << e[i].LN << ", " << e[i].FN << " " << e[i].MN << "?" << endl;
                cout << "       Input 1 - YES" << endl;
                cout << "       Input 2 - GO TO MAIN MENU" << endl;
                cout << "Press 1 or 2: ";
                cin >> select;
                while (select < 1 || select > 2)
                {
                    cout << "        INVALID INPUT. INPUT (1-2): "; cin >> select;  
                }
                if (select == 1)
                {
                    cout << "Record of \"" << e[i].LN << ", " << e[i].FN << " " << e[i].MN <<"\" has been DELETED successfully." << endl;
                    cout << "============================================================================" << endl;
                    e[i].ID = 0;
                    strcpy(e[i].LN,"");
                    strcpy(e[i].FN,"");
                    strcpy(e[i].MN,"");
                    strcpy(e[i].rank,"");
                    found = 1;
                    record--;
                }
                else if (select == 2)
                {
                    goto main_menu;
                }
            }
            
        }
        
        if (found == 0 && a != 1)
            {
                cout << "============================================================================" << endl;
                cout << "       " << searchId <<" does not exist in the record" << endl;
                cout << "       NO RECORD HAS BEEN DELETED" << endl;
                a = 1;
            }

        system("pause");
        goto main_menu;
        break;
    case 5:
        system("cls");
        cout << "============================================================================" << endl;
        cout << "                              SEARCH RECORDS" << endl;
        cout << "============================================================================" << endl;
        cout << "SEARCH USING" << endl;
        cout << "       1 - Employee ID" << endl;
        cout << "       2 - Last Name" << endl;
        cout << "       3 - First Name" << endl;
        cout << "       4 - Middle Name" << endl;
        cout << "       5 - Employee Rank" << endl;
        cout << "       INPUT 1-5: ";
        cin >> select;
        while (select < 1 || select > 5)
        {
            cout << "        INVALID INPUT. INPUT 1-5: "; cin >> select;  
        }
        if (select == 1)
        {
            cout << "Input EMPLOYEE ID to SEARCH: ";
            cin >> searchId;
        }
        else if (select == 2)
        {
            cout << "Input Last Name to SEARCH: ";
            cin >> searchName;
        }
        else if (select == 3)
        {
            cout << "Input First Name to SEARCH: ";
            cin >> searchName;
        }
        else if (select == 4)
        {
            cout << "Input Middle Name to SEARCH: ";
            cin >> searchName;
        }
        else
        {
            cout << "Input Employee Rank to SEARCH: ";
            cout << "Select from 1 to 4" << endl;
            cout << "        1 - Instructor" << endl;
            cout << "        2 - Assistant Professor" << endl;
            cout << "        3 - Associate Professor" << endl;
            cout << "        4 - Professor" << endl;
            cout << "INPUT 1-4: " ; cin >> rank;
            while (rank < 1 || rank > 4)
            {
                cout << "        INVALID INPUT. INPUT EMPLOYEE RANK(1-4): "; cin >> rank;  
            }
            if (rank == 1)
            {
                strcpy(searchName, "Instructor");
                
            }
            else if (rank == 2)
            {
                strcpy(searchName, "Assistant Professor");
                
            }
            else if (rank == 3)
            {
                strcpy(searchName, "Associate Professor");
                
            }
            else
            {
                strcpy(searchName, "Professor");
                
            }
        }
        
        cout << "============================================================================================================================================================================" << endl;
        cout << "                                                                           DISPLAY RECORDS" << endl;
        cout << "============================================================================================================================================================================" << endl;

        cout << "EMPLOYEE ID" << setw(w);
        cout << "LAST NAME" << setw(w);
        cout << "FIRST NAME" << setw(w);
        cout << "MIDDLE NAME" << setw(w-5);
        cout << "RANK" << setw(w+3);
        cout << "GROSS SALARY" << setw(w);
        cout << "NET SALARY" << endl;

        found = 0;
        a = 0;
        for (int i = 0; i < max; i++)
        {
           if (searchId == e[i].ID || strcmpi(searchName, e[i].LN)==0 || strcmpi(searchName, e[i].FN)==0 || strcmpi(searchName, e[i].MN)==0 || strcmpi(searchName, e[i].rank)==0)
            {
                cout << e[i].ID << setw(w+5);
                cout << e[i].LN << setw(w);
                cout << e[i].FN << setw(w);
                cout << e[i].MN << setw(w);
                cout << e[i].rank << setw(w-3);
                cout << e[i].grossPay << setw(w);
                cout << e[i].netPay;
                cout << endl;
                found++;
                id[a] = e[i].ID;
                a++;
            }
        }
        cout << "============================================================================================================================================================================" << endl;
        cout << "                                                                                                                                            TOTAL NUMBER OF RECORDS: " << found << endl;
        cout << "============================================================================================================================================================================" << endl;
        
        cout << "VIEW DETAILS?" << endl;
        cout << "       Input 1 - YES" << endl;
        cout << "       Input 2 - GO TO MAIN MENU" << endl;
        cout << "       INPUT 1 or 2: ";
            cin >> select;
            while (select < 1 || select > 2)
            {
                cout << "        INVALID INPUT. INPUT (1-2): "; cin >> select;  
            }
        b = 0;
        if (select == 1)
        {
            cout << "INPUT EMPLOYEE ID FROM THE LIST TO DISPLAY DETAILS: ";
            cin >> searchId;
            
            for (int i = 0; i < a; i++)
            {
                if (searchId == id[i])
                {
                    cout << "\nEMPLOYEE DETAILS" << endl;
                    cout << "-------------------------------------------------------------" << endl;
                    for (int i = 0; i < max; i++)
                    {
                        if (searchId == e[i].ID && b != 1)
                        {
                            cout << "EMPLOYEE ID: " << e[i].ID << endl;
                            cout << "EMPLOYEE NAME: " << e[i].LN << ", " << e[i].FN << " " << e[i].MN << endl;
                            cout << "EMPLOYEE RANK: " << e[i].rank << endl; 
                            cout << "SALARY" << endl;
                            cout << "           GROSS PAY: " << e[i].grossPay << endl;
                            cout << "           DEDUCTIONS: " << endl;
                            cout << "                   Phil.Health: " << e[i].philhealth << endl;
                            cout << "                   HDMF: " << e[i].hdmf << endl;
                            cout << "                   TAX: " << e[i].tax << endl;
                            cout << "                   Loan: " << e[i].loan << endl;
                            cout << "           NET PAY: " << e[i].netPay << endl;
                            b = 1;
                        }
                        
                    }

                }
                if (searchId != id[i])
                {
                    cout << "   INCORRECT INPUT. INPUT EMPLOYEE ID FROM THE LIST TO DISPLAY DETAILS: "; 
                    cin >> searchId;
                }
            }
        }
        if (select == 2)
        {
            system("pause");
            goto main_menu;
        }
        
        
        break;
    case 6:
        cout<<"==========================================================\n";

        cout<<"Program has been terminated.\n";
        cout<<"Press any key to exit...";
        system("pause");
        return 0;
        break;
    default:
        break;
    }
}

    
