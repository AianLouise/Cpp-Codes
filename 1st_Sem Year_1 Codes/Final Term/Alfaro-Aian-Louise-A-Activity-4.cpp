#include<iostream>
#include<string>
using namespace std;

int main(){
    system("CLS");

    string name = "Aian Louise Alfaro";
    string yearNsection = "BSCS 1A";
    int numRange, numInput ;
    int pos = 0, neg = 0, zero = 0;

    cout << name << endl;
    cout << yearNsection << endl << endl;

    cout << "Enter range of number: "  ;
    cin >> numRange;
    
    for (int i = 1; i <= numRange; i++)
    {
        cout << "Enter number "<<i<<" : " ;
        cin >> numInput;
         
        if (numInput > 0)
            {
            pos++;
        }
        else if (numInput < 0)
            {
            neg++;
        }
        else{
            zero++;
        }
    }

    cout << endl;
    cout << "---------------------------------------" << endl; 
    cout << "| Positive number:       " << pos << "            |" << endl;
    cout << "| Negative number:       " << neg << "            |" << endl;
    cout << "| Zero number:           " << zero<< "            |" << endl;
    cout << "---------------------------------------" << endl;

}