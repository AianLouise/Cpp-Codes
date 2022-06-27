#include<iostream>
#include<fstream>   
#include<cstring>
using namespace std;

int main(){
	
	//To create use "ofstream"
	ofstream WRITE; //STEP 1: Create an OBJECT (variable) for creating/writing
	char FName [50];
	cout<<"Input File Name: "; cin>>FName;
	strcat (FName, ".txt");
	WRITE.open (FName); //STEP 2: Open the file cout<<FName <<<" has been created\n";
	WRITE.close();
	
	
    ifstream myfile;
    myfile.open("file.txt");
    if (myfile == NULL)
    {
        cout << "Error";
    }
    else
    {
        cout << "File Exist";
    }
    
    return 0;
}
