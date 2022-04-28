//Alfaro, Aian Louise A.
//Activity #2
#include <iostream>
using namespace std;

int main(){
    int stud_input;

    cout << "How many students do you want to input? " ;//Input for students
    cin >> stud_input;

    float first[stud_input], second[stud_input], third[stud_input], fourth[stud_input], average[stud_input], temp;
    int ids[stud_input];

    for (int i = 0; i < stud_input; i++)//Input loop for grades
    {
        
        cout << "\nInput Average Grade of Student #" << i+1 << ":" << endl; 
        cout << "       First Grading Period: " ;
        cin >> first[i];
            while (true)//Process for re-input
            { 
                if (first[i] >= 60 && first[i] <=100)
                { 
                    break;
                }
                else
                {
                    cout << "             INVALID INPUT. Input Again: ";
                    cin >> first[i];
                }
            }
        cout << "       Second Grading Period: " ;
        cin >> second[i];
            while (true)//Process for re-input
                { 
                    if (second[i] >= 60 && second[i] <=100)
                    { 
                        break;
                    }
                    else
                    {
                        cout << "             INVALID INPUT. Input Again: ";
                        cin >> second[i];
                    }
                }
        cout << "       Third Grading Period: " ;
        cin >> third[i];
            while (true)//Process for re-input
                { 
                    if (third[i] >= 60 && third[i] <=100)
                    { 
                        break;
                    }
                    else
                    {
                        cout << "             INVALID INPUT. Input Again: ";
                        cin >> third[i];
                    }
                }
        cout << "       Fourth Grading Period: " ;
        cin >> fourth[i];
            while (true)//Process for re-input
                { 
                    if (fourth[i] >= 60 && fourth[i] <=100)
                    { 
                        break;
                    }
                    else
                    {
                        cout << "             INVALID INPUT. Input Again: ";
                        cin >> fourth[i];
                    }
                }
        cout << "==================================" << endl;
        average[i] = (first[i] + second[i] + third[i] + fourth[i])/4 ;//computation for average
        cout << "       Average of Student #" << i+1 << ": " << average[i] << "\n\n"; 
        ids[i] = i;
    }


    for(int i = 0 ; i < stud_input ; i++)//Process for ranking of grades
	{		
		for(int j = i+1; j < stud_input ; j++)
		{
			if(average[i] < average[j])
			{
				temp  = average[i];
				average[i] = average[j];
				average[j] = temp;
                temp  = ids[i];
				ids[i] = ids[j];
				ids[j] = temp;
			}
		}
	}
    
    cout << "STUDENT RANKING:" << endl;
    cout << "==============================================" << endl;
    cout << "RANK   STUDENT NO.   AVERAGE" << endl;

    for (int i = 0; i < stud_input; i++)//output
    {
        cout << i+1 << "           " << ids[i]+1 << "          " << average[i] << endl;
    }
        
}