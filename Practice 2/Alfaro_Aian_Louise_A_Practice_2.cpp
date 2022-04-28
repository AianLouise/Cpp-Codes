#include <iostream>
using namespace std;

int main(){
     int rows, columns, num = 0;
    int table[50][50];

    cout << "How many rows? " ;
    cin >> rows;
    cout << "How many columns? " ;
    cin >> columns;
    cout << "==================================================" << endl ;
    cout << "Input " << rows * columns << " numbers: " << endl; 

    for (int i = 0; i < rows; i++)//Input for Multi Array
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> table[i][j];
        }
    }

    int transpose[rows * columns];//Trasnfer the value on multiarray to single array
	for (int i = 0; i < rows; ++i) {
	  for (int j = 0; j < columns; ++j) {
	    transpose[i * columns + j] = table[i][j];
	  }
	}

    cout << "==================================================" << endl ;
    
    cout << rows << " x " << columns << " Matrix" << endl;//Table Output
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "==================================================" << endl;

    for (int i = 0; i < columns; i++)//Transfer multi-array value to single array 
    {
        for (int j = 0; j < rows; j++)
        {
            table[i][j] = transpose[num];
            num++;
        }
    }

    cout << columns << " x " << rows << " Matrix (TRANSPOSITION)" << endl; //Transposition Output

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }   
}