#include<iostream>
using namespace std;

float Round(float num);

int main(){
    float num;
    cout << "Input a number with decimal point: ";
    cin >> num;
    num = Round(num);
    cout << "Rounding it off to whole number: " << int(num);
}

float Round(float num){
    if ( (num + 0.5) >= (int (num) + 1 ) )
    {
        num++;
        int(num);
    }
    return num;
}