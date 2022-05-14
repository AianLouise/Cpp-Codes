#include <iostream>
using namespace std;

int main(){
    int row;   
    int col1, col2;
    
    cout << "Enter number of rows: ";
    cin >> row;
    for (col1 = 1; col1 <= row ; col1++)//upper part of diamond.
    {
        for (col2 = row; col2 > col1; col2--)
        {
            cout << " ";
        }
            cout << "*";
        
        for(col2 = 1; col2 < (col1 - 1) * 2; col2++)
        {
            cout<<" ";
        }
            if(col1 == 1)
            {
            cout<<"\n";
            }
            else
            {
            cout<<"*\n";
            }
    }//end
    
    for (col1 = row - 1; col1 >= 1 ; col1--)//lower part of diamond.
    {
        for (col2 = row; col2 > col1; col2--)
        {
            cout << " ";
        }
            cout << "*";
        
        for(col2 = 1; col2 < (col1 - 1) * 2; col2++)
        {
            cout<<" ";
        }
            if(col1 == 1)
            {
            cout<<"\n";
            }
            else
            {
            cout<<"*\n";
            }
    }//end

}