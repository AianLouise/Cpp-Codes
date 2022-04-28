#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    string lname, fname;
    float yearLvl, math, sci, eng, fil, com, ave ;    
    int counter = 1;

    cout << "Last Name: ";
    getline(cin, lname);//Allow to enter name with space
    cout << "First Name: ";
    getline(cin, fname);
    cout << "Year Level: ";
    cin >> yearLvl;

    while (counter != 3){ // Year Level input checker

        if (yearLvl >= 1 && yearLvl <=4){ 
            break;
        }
        else{
            cout << "\tInvalid Input. Year Level: ";
    
            cin >> yearLvl;
            if (yearLvl < 1 || yearLvl > 4){ // increment the counter variable if the input in yearLvl doest meet the condition.
                    counter++;
            }
        }
        if (counter == 3 ){ // Program Terminator if out of chances
                cout << "\n\tProgram will be terminated due to multiple invalid input.";
                return (0);
            }
    }
        //Input Subject Grade
        cout << "\nInput Grades:" << endl;
        cout << "\tMathematics: " ; //Mathematics
        cin >> math;
        counter = 1;// Reset Counter
            while (counter != 3){
                if (math >= 65 && math <= 100){
                    break;
                }
                else{
                    if (!(cin >> yearLvl)){
                        cin.clear();
                        cin.ignore();
                    }
                    cout << "\t\tInvalid Input. Mathematics: ";
                    cin >> math;
                    if (math < 65 || math > 100)
                    {
                        counter++;
                    }
                }
                if (counter == 3 ){
                        cout << "\n\tProgram will be terminated due to multiple invalid input.";
                        return (0);
                    }
            }
                
        cout << "\tScience: " ; //Science
        cin >> sci;
        counter = 1;// Reset Counter
            while (counter != 3){
                if (sci >= 65 && sci <= 100){
                    break;
                }
                else{
                    if (!(cin >> yearLvl)){
                        cin.clear();
                        cin.ignore();
                    }
                    cout << "\t\tInvalid Input. Science: ";
                    cin >> sci;
                    if (sci < 65 || sci > 100)
                    {
                        counter++;
                    }
                }
                if (counter == 3){
                        cout << "\n\tProgram will be terminated due to multiple invalid input.";
                        return (0);
                    }
            }
                
        cout << "\tEnglish: " ; // English
        cin >> eng;
        counter = 1;// Reset Counter
            while (counter != 3){
                if (eng >= 65 && eng <= 100){
                    break;
                }
                else{
                    if (!(cin >> yearLvl)){
                        cin.clear();
                        cin.ignore();
                    }
                    cout << "\t\tInvalid Input. English: ";
                    cin >> eng;
                    if (eng < 65 || eng > 100)
                    {
                        counter++;
                    }
                }
                if (counter == 3){
                        cout << "\nProgram will be terminated due to multiple invalid input.";
                        return (0);
                    }
            }
                
        cout << "\tFilipino: " ; // Filipino
        cin >> fil;
        counter = 1;// Reset Counter
            while (counter != 3){
                if (fil >= 65 && fil <= 100){
                    break;
                }
                else{
                    if (!(cin >> yearLvl)){
                        cin.clear();
                        cin.ignore();
                    }
                    cout << "\t\tInvalid Input. Filipino: ";
                    cin >> fil;
                    if (fil < 65 || fil > 100)
                    {
                        counter++;
                    }
                }
                if (counter == 3 ){
                        cout << "\nProgram will be terminated due to multiple invalid input.";
                        return (0); 
                    }
            }
                
        cout << "\tComputer Programming: " ; // Computer Programming
        cin >> com;
        counter = 1;// Reset Counter
            while (counter != 3){
                if (com >= 65 && com <= 100){
                    break;
                }
                else{
                    if (!(cin >> yearLvl)){
                        cin.clear();
                        cin.ignore();
                    }
                    cout << "\t\tInvalid Input. Computer Programming: ";
                    cin >> com;
                    if (com < 65 || com > 100)
                    {
                        counter++;
                    }
                }
                if (counter == 3 ){
                        cout << "\nProgram will be terminated due to multiple invalid input.";
                        return (0);
                    }
            }

   ave = (math + sci + eng + fil + com)/5;

   cout << "\nAverage: " <<  ave << endl;
   cout << "Remark: ";

   if (ave == 100){ //Remark Checker
       cout << "Excellent";}
   else if (ave >= 90 && ave <=99){
       cout << "Very Good";}
   else if (ave >= 80 && ave <=89){
       cout << "Good";}
   else if (ave >= 75 && ave <=79){
       cout << "Fair";}
   else{
       cout << "Poor";}
   
   return 0;
}