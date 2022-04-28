//3. Input a word (or words) and then count and display the number of vowels.
#include<iostream>
#include<string>
using namespace std;

#define MAX 50 

int main(){
    string name;
    cout << "Input name: " ;
    getline(cin, name);

    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == 'a' || name[i] == 'A')
        {
            name[i] = '@';
        }
        else if (name[i] == 'e' || name[i] == 'E')
        {
            name[i] = '^';
        }
        else if (name[i] == 'i' || name[i] == 'I')
        {
            name[i] = '!';
        }
        else if (name[i] == 'o' || name[i] == 'O')
        {
            name[i] = '*';
        }
        else if (name[i] == 'u' || name[i] == 'U')
        {
            name[i] = '$';
        }
        
    }
    cout << "Encrypted name: " << name ;
}   