#include<iostream>
using namespace std;

int main(){
    string team_1, team_2, winner[4];
    int game = 4, round = 3, j = 1;
    int team_1_points, team_2_points;
    int team_1_score = 0, team_2_score = 0;

    for (int i = 0; i < game; i++)
    {
        int team_1_points, team_2_points;
        int team_1_score = 0, team_2_score = 0;
        round = 3;

        cout << "\nGAME " << i+1 << endl;
        cout << "Input Team 1 name: ";
        getline(cin, team_1);
        cout << "Input Team 2 name: ";
        getline(cin, team_2);
        for (int j = 0; j < round; j++)//Round Loop
        {
            cout << "\nRound " << j+1 << ": " << endl;
            cout << "   Team " << team_1 << " Points: ";
            cin >> team_1_points;
            cout << "   Team " << team_2 << " Points: ";
            cin >> team_2_points;
            cout << "-------------------------------------" << endl; 

            if (team_1_points > team_2_points)//Condition for Winner
            {
                cout << "   Winner: Team " << team_1 << endl;
                team_1_score++;
            }
            else if (team_1_points < team_2_points)
            {
                cout << "   Winner: Team " << team_2 << endl;
                team_2_score++;
            }
            else if (team_1_points == team_2_points)
            {
                cout << "   NO WINNER!\n" << endl;
            }

            if (j == 2)
            {
                cout << "\nTeam " << team_1 << ": " << team_1_score << " WIN(S)" << endl;// Output for Scores
                cout << "Team " << team_2 << ": " << team_2_score << " WIN(S)" << endl;
            }
            

            if (team_1_score == team_2_score && j == 2)// Tiebreaker Round
                {
                    cout << "\n   Team " << team_1 << " and Team " << team_2 << " will have ROUND 4" << endl;
                    cout << "   The first team to get 10 points is the winner." << endl;
                    round++;
                }

        }

        if (team_1_score > team_2_score)
            {
                cout << "\nGAME " << i+1 << " Winner: Team " << team_1 << endl;
                winner[i] = team_1;
            }
            else if (team_1_score < team_2_score)
            {
                cout << "\nGAME " << i+1 << " Winner: Team " << team_2 << endl;
                winner[i] = team_2;
            }
        cout << "\n=======================================================" << endl;
        team_1.clear();
        team_2.clear();
        cin.ignore();
    }
    
    cout << "\n\nSUMMARY OF WINNERS: " << endl;
    for (int i = 0; i < game; i++)
    {
        cout << "   Game " << i+1 << ": " << winner[i] << endl;
    }
    

    return 0;
}