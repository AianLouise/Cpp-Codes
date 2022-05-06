#include<iostream>
#include<cstring>
using namespace std;

#define MAX 50 

int main(){
    start:
    
    string input;
    int a = 0;

    cout << "Input Code: " ;
    getline(cin, input);
    

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == 'c' || input[i] == 'C')
        {
            input[i] = '1';
        }
        else if (input[i] == 'o' || input[i] == 'O')
        {
            input[i] = '2';
        }
        else if (input[i] == 'm' || input[i] == 'M')
        {
            input[i] = '3';
        }
        else if (input[i] == 'p' || input[i] == 'P')
        {
            input[i] = '4';
        }
        else if (input[i] == 'u' || input[i] == 'U')
        {
            input[i] = '5';
        }
        else if (input[i] == 't' || input[i] == 'T')
        {
            input[i] = '6';
        }
        else if (input[i] == 'e' || input[i] == 'E')
        {
            input[i] = '7';
        }
        else if (input[i] == 'r' || input[i] == 'R')
        {
            input[i] = '8';
        }
        else if (input[i] == 's' || input[i] == 'S')
        {
            input[i] = '9';
        }
        else if (input[i] == '.' )
        {
            input[i] = '.';
        }
        else if (input[i] == 'x' || input[i] == 'X')
        {
            input[i] = '0';
        }
        else{
            cout << "UNABLE TO CONVERT YOUR INPUT" << endl;
            a++;
        }
    }
    
    if (a == 0)
    {
        cout << "Value: " << input << endl;
    }
    cout << "================================" << endl;

    string inputAgain;
    cout << "\nINPUT AGAIN? Type YES to input again, type NO to end program: " ;
    cin >> inputAgain;
		if(inputAgain == "YES" || inputAgain == "yes"){
            cin.ignore();
			goto start;
		}
        else
        {
            cout << "PROGRAM WILL BE TERMINATED";
            return 0;
        }
        
    
}   