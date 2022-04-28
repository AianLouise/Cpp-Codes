//1. Program that determines if a word is a palindrome or not.
#include<iostream>
#include<cstring>
using namespace std;

#define MAX 50 

int main(){
    char a[MAX], b[MAX];
    int c;

    cout << "ENTER A WORD: ";
    cin >> a;
    strcpy(b,a);
    strrev(b);
    cout << "REVERSED: " << b;
    c = strcmpi(a,b);
    if (c == 0)
    {
        cout << "\nTHE WORD IS PALINDROME.";
    }
    else{
        cout << "\nTHE WORD IS NOT A PALINDROME";
    }
    
}   