//3. Input a word (or words) and then count and display the number of vowels.
#include<iostream>
#include<cstring>
using namespace std;

#define MAX 50 

int main(){
    char word[MAX];
    int length = 0, vowCount = 0 ;

    cout << "Input a word or a phrase: " ;
    cin.getline (word, MAX);
    strlwr(word);
    length = strlen(word);

    for (int i = 0; word[i] != '\0' ; i++)
    {   
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            vowCount++;
        }
    }

    cout << "# of vowels: " << vowCount ; 
}   