#include <iostream>
using namespace std;

int main(){
    int rows, columns;
    int table[50][50];

    cout << "How many rows? " ;
    cin >> rows;
    cout << "How many columns? " ;
    cin >> columns;
    cout << "==================================================" << endl ;

    cout << "Input " << rows * columns << " numbers: " << endl; 

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> table[i][j];
        }
    }

    cout << "==================================================\n" << endl ;
    
    //Table Output
    int sum;
     for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for (int j = 0; j < columns; j++)
        {
            sum = sum + table[i][j];
            cout << table[i][j] << "\t";
        }
        cout << "||  " << sum;
        cout << endl;
    }
    
    for (int i = 0; i < columns; i++)
    {
        cout << "========" ;
    }
    cout << endl;

    for (int i = 0; i < columns; i++)
    {
        sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum += table[j][i];
        }
        cout << sum << "\t";
    }
    
    return 0;
}