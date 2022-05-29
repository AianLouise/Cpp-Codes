#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float num;
    cout << "Input a number with decimal point: ";
    cin >> num;
    cout << "Rounding it off to whole number: " << round(num);
}