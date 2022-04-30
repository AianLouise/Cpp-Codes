// 04/30/22
// How many tickets will you get with your money?
//======================================================================
//|  Package #  |   Description   |  Amount  |  Qty  |  Reward Points  |
//|     1       |       Party     |   $500   |  15   |       5         |
//|     2       |   Extra Family  |   $350   |  10   |       4         |
//|     3       |      Family     |   $150   |   4   |       2         |
//|     4       |       Duo       |   $120   |   3   |       1         |
//|     5       |       Solo      |    $45   |   1   |       0         |
//======================================================================
#include<iostream>
using namespace std;

int main(){
    int amount, qty, rewardPts;
    
    cout << "Amount: " ;
    cin >> amount;

    while (amount >= 45)
    {
        if (amount >= 500)//Party
        {
            qty += 15;
            amount -= 500;
            rewardPts += 5;
        }
        else if (amount >= 350)// Extra Family
        {
            qty += 10;
            amount -= 350;
            rewardPts += 4;
        }
        else if (amount >= 150)// Family
        {
            qty += 4;
            amount -= 150;
            rewardPts += 2;
        }
        else if (amount >= 120)// Duo
        {
            qty += 3;
            amount -= 120;
            rewardPts += 1;
        }
        else if (amount >= 45)// Solo
        {
            qty += 1;
            amount -= 45;
            rewardPts += 0;
        }
    }
    
    cout << "==============================================" << endl ;
    cout << qty << " tickets, " << rewardPts << " reward points and $" << amount << " balance" << endl;
    cout << "==============================================" << endl ;
    return 0;
}