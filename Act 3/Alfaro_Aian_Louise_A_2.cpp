//2. Type the name of the capital (regardless of case), then display its capital.
#include<iostream>
#include<cstring>
using namespace std;

#define MAX 50 

int main(){
    char country[MAX];
    char countryTable[MAX][MAX] = {"Brunei", "Cambodia", "East Timor", "Indonesia", "Laos", "Malaysia", "Myanmar", "Philippines", "Singapore", "Thailand", "Vietnam" };
    char capitalTable[MAX][MAX] = {"Bandar Seri Begawan", "Phnom Penh", "Dili", "Jakarta", "Vientiane", "Kuala Lumpur", "Nay Pyi Daw", "Manila", "Singapore", "Bangkok", "Hanoi" };
    int c[MAX];

    cout << "COUNTRY NAME: " ;
    cin >> country;
    cout << "CAPITAL: ";

    for (int i = 0; i < 11; i++)
    {
        c[i] = strcmpi(country, countryTable[i]);
    }
    for (int i = 0; i < 11; i++)
    {
        if (c[i] == 0)
        {
            cout << capitalTable[i];
        }
        else
        {
            cout << country << " is not South East Asian Country." ;
            break;
        }
        
    }
    
}   