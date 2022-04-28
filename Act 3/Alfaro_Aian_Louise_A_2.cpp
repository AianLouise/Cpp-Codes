//2. Type the name of the capital (regardless of case), then display its capital.
#include<iostream>
#include<cstring>
using namespace std;

#define MAX 50 

int main(){
    char country[MAX];
    int c[MAX];

    cout << "COUNTRY NAME: " ;
    cin >> country;
    cout << "CAPITAL: ";
    
    c[0] = strcmpi(country, "Brunei");
    c[1] = strcmpi(country, "Cambodia");
    c[2] = strcmpi(country, "East Timor");
    c[3] = strcmpi(country, "Indonesia");
    c[4] = strcmpi(country, "Laos");
    c[5] = strcmpi(country, "Malaysia");
    c[6] = strcmpi(country, "Myanmar");
    c[7] = strcmpi(country, "Philippines");
    c[8] = strcmpi(country, "Singapore");
    c[9] = strcmpi(country, "Thailand");
    c[10] = strcmpi(country, "Vietnam");

    if (c[0] == 0)
    {
        cout << "Bandar Seri Begawan";
    }
    else if (c[1] == 0)
    {
        cout << "Phnom Penh";
    }
    else if (c[2] == 0)
    {
        cout << "Dili";
    }
    else if (c[3] == 0)
    {
        cout << "Jakarta";
    }
    else if (c[4] == 0)
    {
        cout << "Vientiane";
    }
    else if (c[5] == 0)
    {
        cout << "Kuala Lumpur";
    }
    else if (c[6] == 0)
    {
        cout << "Nay Pyi Daw";
    }
    else if (c[7] == 0)
    {
        cout << "Manila";
    }
    else if (c[8] == 0)
    {
        cout << "Singapore";
    }
    else if (c[9] == 0)
    {
        cout << "Bangkok";
    }
    else if (c[10] == 0)
    {
        cout << "Hanoi";
    }
    else
    {
        cout << country << " is not a South East Asian Country." ;
    }
    
}   