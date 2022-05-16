#include <iostream>
using namespace std;

int main(){
    float numP, d, q, ds, n, p;

    cout << "Enter amount of penny: ";
    cin >> numP;

    d = numP/100;
    q = numP/25;
    ds = numP/10;
    n = numP/5;
    p = numP/1;

    cout <<"\n=================================================" << endl;
    cout << "|| " << numP << " pennies is equal to " << d << " dollar." << "\t       || " << endl;
    cout << "|| " << numP << " pennies is equal to " << q << " quarter." << "\t       || " << endl;
    cout << "|| " << numP << " pennies is equal to " << ds << " dimes." << "\t       || " << endl;
    cout << "|| " << numP << " pennies is equal to " << n << " nickel." << "\t       || " << endl;
    cout << "|| " << numP << " pennies is equal to " << p << " penny." << "\t       || " << endl;
    cout <<"=================================================" << endl;
}