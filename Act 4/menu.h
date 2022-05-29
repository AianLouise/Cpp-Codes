#include <iostream>
using namespace std;

int MENU(){
    cout << "======================= MAIN MENU =======================" << endl;
    cout << "What function do you want to perform?"<< endl;
    cout << "1 - ADDITION"<< endl;
    cout << "2 - SUBTRACTION"<< endl;
    cout << "3 - MULTIPLICATION"<< endl;
    cout << "4 - DIVISION"<< endl;
    cout << "5 - GET AVERAGE"<< endl;
    cout << "6 - 100 MULTIPLIES OF A NUMBER"<< endl;
    cout << "7 - POWER OF A NUMBER"<< endl;
    cout << "8 - EXIT"<< endl;
    cout << "======================================================="<< endl;
    cout << "Press 1 to 8: ";
    int M;
    cin >> M;
    while (M < 1 || M > 8)
    {
        cout << "Invalid Input. Press 1 to 8 only: ";
        cin >> M;
    }
    return M;
}
