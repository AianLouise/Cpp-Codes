#include <iostream>

using namespace std;

int main()
{
    start:
    system("CLS");

    char alphabet;

    cout << "Enter an alphabet: " ;
    cin >> alphabet;

    if (isalpha(alphabet))
    {
        if (tolower(alphabet) == 'a' || tolower(alphabet) == 'e' || tolower(alphabet) =='i' || tolower(alphabet) =='o' || tolower(alphabet) =='u')
        {
            cout << alphabet << " is a vowel." << endl;
        }
        else
        {
            cout << alphabet << " is a consonant." << endl;
        }
    }
    else
    {
        cout << "Invalid input." << endl ;
    }
    
    char again;
    cout << "Do you want to enter again y/n: ";
    cin >> again;
    if (tolower(again) == 'y')
    {
        goto start;
    }else
    {
        exit (1);
    }
    
}