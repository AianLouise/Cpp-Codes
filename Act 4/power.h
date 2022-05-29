#include <iostream>
#include <cmath>
using namespace std;

double powerXY(){
    float base, power;
    cout << "\n======================= POWER OF A NUMBER =======================" << endl;
    cout << "Input BASE: ";
    cin >> base;
    cout << "Input POWER: ";
    cin >> power;

    cout << base << " raised to the power of " << power << " is " << pow(base, power);

    return 0;
}