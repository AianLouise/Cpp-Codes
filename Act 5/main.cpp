#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
struct EMPLOYEE{
    int ID, loan;
    char LN[50], FN[50], MN[50], rank[50];
};
    
int main(){ 
    int max = 0;
    static int record = 0;
    static int pos = 0;
    static int size = 0;
    int searchId, found;

    int min_num;
    int max_num;

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
                cout << e[i].rank;
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
            int rank;
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
            }
            else if (rank == 2)
            {
                strcpy(e[i].rank, "Assistant Professor");
                cout << "Assistant Professor" << endl;
            }
            else if (rank == 3)
            {
                strcpy(e[i].rank, "Associate Professor");
                cout << "Associate Professor" << endl;
            }
            else
            {
                strcpy(e[i].rank, "Professor");
                cout << "Professor" << endl;
            }
            cout << "\nINPUT EMPLOYEE LOAN: " ; cin >> e[i].loan    ;
        
        }
        cout << "============================================================================" << endl;
        cout << setw(22) << max_num << " RECORD(S) SUCCESSFULLY ADDED\n" << endl;
        system("pause");
        cin.ignore();
        goto main_menu;
        break;
    case 3: 
        /* code */
        break;
    case 4:
        system("cls");
        //found = 0;
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
        if (found == 0)
            {
                cout << "============================================================================" << endl;
                cout << setw(15) << searchId <<" does not exist in the record" << endl;
                cout << setw(15) << "NO RECORD HAS BEEN DELETED" << endl;
                break;  
            }

        system("pause");
        goto main_menu;
        break;
    case 5:
        /* code */
        break;
    case 6:
        cout<<"==========================================================\n";

        cout<<"Program has been terminated.\n";
        cout<<"Press any key to exit...";
        return 0;
        break;
    default:
        break;
    }
}

    
