#include <iostream>
using namespace std;

double multiple(){

    int numValue[100];
    int table[100][100];
    int a = 0, num = 0;

    cout << "\n================================= MULTIPLES OF A NUMBER ==================================" << endl;
    cout << "Input a number: ";
    cin >> num;
    cout << "                           These are the first 100 multiples of " << num << endl;

    for (int i = 0; i < 100; i++)
    {
        numValue[i] = num * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[i][j] = numValue[a];
            a++;
        }
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
        cout << "\t" << table[i][j];
        }
    cout << "\n";
   }
   return 0;
}