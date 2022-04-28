#include<iostream>//Input numbers the seperate EVEN and ODD. Determine the largest and smallest number entered.
using namespace std;

int main(){
    
    int num_input, even, odd;
    int temp, a = 1;
    int numArray[50];

    cout << "How many number do you want to enter? " ;
    cin >> num_input;

    cout << "\nInput " << num_input << " numbers. " << endl;
    for (int i = 0; i < num_input; i++)
    {
        cout << i + 1 << " : ";
        cin >> numArray[i];
    }

    for(int i = 0; i < num_input; i++)
    {
        if(numArray[i] % 2 == 0)
        {
            even++;
        }
        if(numArray[i] % 2 == 1)
        {
            odd++;
        }
    }

    cout << "=============================================" << endl;
    cout << "       You have entered " << even << " EVEN numbers.\n";
    cout << "=============================================" << endl;

      for(int i = 0; i < num_input; i++)
        {
            if(numArray[i] % 2 == 0)
            {
                cout << a++ << " : ";
                cout << numArray[i] << endl;
            }
        }

    a = 1;
    cout << "=============================================" << endl;
    cout << "       You have entered " << odd << " ODD numbers." << endl;
    cout << "=============================================" << endl;

        for(int i = 0; i < num_input; i++)
        {
            if(numArray[i] % 2 == 1)
            {
                cout << a++ << " : ";
                cout << numArray[i] << endl;
            }
        }

    for(int i = 0 ; i < num_input ; i++)
	{		
		for( int j = i+1; j < num_input ; j++)
		{
			if(numArray[i] < numArray[j])
			{
				    temp  = numArray[i];
				numArray[i] = numArray[j];
				numArray[j] = temp;
			}
		}
	}
    cout << "=============================================" << endl;
    cout << "   The LARGEST number you entered is: " << numArray[0] << endl;
    
    for(int i = 0 ; i < num_input ; i++)
	{		
		for(int j = i+1; j < num_input ; j++)
		{
			if(numArray[i] > numArray[j])
			{
				    temp  = numArray[i];
				numArray[i] = numArray[j];
				numArray[j] = temp;
			}
		}
	}
    cout << "   The SMALLEST number you entered is: " << numArray[0] << endl;
    cout << "=============================================" << endl;
}