//Alfaro, Aian Louise A.
//BSCS 1A
//Activity #2
#include <iostream>
using namespace std;

#define MAX 50 //declare constant value for keyword "MAX"

int main()
{
    int stud_num;//Initialization
    float grade[MAX][4], average[MAX], ids[MAX], temp;

    cout << "How many students do you want to input? ";//Input for how many Student
    cin >> stud_num;

    for (int i = 0; i < stud_num; i++)//Process for Input of Grades
    {
        ids[i] = i;
        cout << "\nInput Average Grade of Student #" << i + 1 << ":" << endl;
        cout << "       First Grading Period: ";
        cin >> grade[i][0];
            while (true)//Process for re entry of value
            { 
                if (grade[i][0] >= 60 && grade[i][0] <=100)
                { 
                    break;
                }
                else
                {
                    cout << "             INVALID INPUT. Input Again: ";
                    cin >> grade[i][0];
                }
            }
        cout << "       Second Grading Period: ";
        cin >> grade[i][1];
            while (true)
            { 
                if (grade[i][1] >= 60 && grade[i][1] <=100)
                { 
                    break;
                }
                else
                {
                    cout << "             INVALID INPUT. Input Again: ";
                    cin >> grade[i][1];
                }
            }
        cout << "       Third Grading Period: ";
        cin >> grade[i][2];
            while (true)
            { 
                if (grade[i][2] >= 60 && grade[i][2] <=100)
                { 
                    break;
                }
                else
                {
                    cout << "             INVALID INPUT. Input Again: ";
                    cin >> grade[i][2];
                }
            }
        cout << "       Fourth Grading Period: ";
        cin >> grade[i][3];
            while (true)
            { 
                if (grade[i][3] >= 60 && grade[i][3] <=100)
                { 
                    break;
                }
                else
                {
                    cout << "             INVALID INPUT. Input Again: ";
                    cin >> grade[i][3];
                }
            }
        cout << "==================================" << endl;
        average[i] = (grade[i][0] + grade[i][1] + grade[i][2] + grade[i][3]) / 4;//Formula for solving the average
        cout << "       Average of Student #" << i + 1 << ": " << average[i] << "\n\n";
    }

    for (int i = 0; i < stud_num; i++)// Process for Arranging value to Descending Order
    {
        for (int j = i + 1; j < stud_num; j++)
        {
            if (average[i] < average[j])
            {
                temp = average[i];//Aranging the average in Descending Order
                average[i] = average[j];
                average[j] = temp;
                temp = ids[i];//For Student No.
                ids[i] = ids[j];
                ids[j] = temp;
            }
        }
    }

    cout << "STUDENT RANKING:" << endl;
    cout << "==============================================" << endl;
    cout << "RANK   STUDENT NO.   AVERAGE" << endl;

    for (int i = 0; i < stud_num; i++)// Output
    {
        cout << i + 1 << "           " << ids[i] + 1 << "          " << average[i] << endl;
    }
}