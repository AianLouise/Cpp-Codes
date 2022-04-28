#include<iostream>// Sort numbers in DESCENDING Order
using namespace std;

int main(){

    int num_input, i, j, temp;
    int numArray[100];


    cout << "How many number do you want to input? " ;
    cin >> num_input;
    cout << "=========================================================" << endl;

    for (int i = 0; i < num_input; i++)
    {
        cin >> numArray[i];
    }

    cout << "\n=========================================================" << endl;
    cout << "|                 DESCENDING ORDER                      |" << endl;
    cout << "=========================================================" << endl;

    for( i = 0 ; i < num_input ; i++)//Process for arranging the number in Descending order.
	{		
		for( j = i+1; j < num_input ; j++)
		{
			if(numArray[i] < numArray[j])
			{
				    temp  = numArray[i];
				numArray[i] = numArray[j];
				numArray[j] = temp;
			}
		}
	}
    
      for ( i = 0; i < num_input; i++)
    {
        cout << numArray[i] << endl;
    }
     
    return 0;
}   