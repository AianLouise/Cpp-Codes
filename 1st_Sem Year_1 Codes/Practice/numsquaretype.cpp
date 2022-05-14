#include<iostream>
using namespace std;

int main(){
	int column = 1;
	int row = 1;

	do //column
	{
		cout << column << " ";
		column++;
		
	} while (column <= 10);
		cout << endl;

	do
	{
		row++;
		column--;
		cout << row << "                  " << column - 1 << endl;
		
	} while (row < 9);
		
	column = 10;
	do
	{
		cout << column << " ";
		column--;
	} while (column >= 1);
	
		
	
}
