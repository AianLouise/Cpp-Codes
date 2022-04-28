#include<iostream>//Search the position of a number.
using namespace std;

int main(){

    int num_input, num_Search , num_pos;
    bool counter = false;
    int numArray[100];

    cout << "How many number do you want to input? " ;
    cin >> num_input;

    for (int i = 0; i < num_input; i++)
    {
        cout << "num " << i+1 << ": " ;
        cin >> numArray[i]; 
    }
    
    cout << "Input the number you want to search: " ;
    cin >> num_Search;
    for(int i = 0; i < num_input; i++)
    {
        if(numArray[i] == num_Search)
        {
            counter = true;
            num_pos = i + 1;
            break;
         }
    }
    if(counter == false)
    {
        cout << num_Search <<" is not on the list you entered";
    }
    else
    {
        for (int i = 0; i < num_input; i++)
        {
            if (numArray[i] == num_Search)
            {
                cout << num_Search << " Found At Position " << i + 1 << endl;
            }
        }
    }
    
}