#include <iostream>
using namespace std;

double addition(){
    float numInput = 0, num = 0, ans = 0;
    cout << "\n======================= ADDITION =======================" << endl;
    cout << "How many numbers do you want to input? ";
    cin >> numInput;
    for (int i = 0; i < numInput; i++)
    {
        cout << i+1 << ": ";
        cin >> num;
        ans = num + ans;
    }
    cout << "The sum of the " << numInput << " numbers you entered is " << ans << endl;
    return 0;
}

double difference(){
    float numInput = 0, num = 0, ans = 0;
    cout << "\n======================= SUBTRACTION =======================" << endl;
    cout << "How many numbers do you want to input? ";
    cin >> numInput;
    for (int i = 0; i < numInput; i++)
    {
        cout << i+1 << ": ";
        cin >> num;
        if (i == 0)
        {
            ans = num - ans;
        }
        else
        {
            ans = ans - num;
        }
    }
    cout << "The difference of the " << numInput << " numbers you entered is " << ans << endl;
    return 0;
}

double  product(){
    float numInput = 0, num = 0, ans = 0;
    cout << "\n======================= MULTIPLICATION =======================" << endl;
    cout << "How many numbers do you want to input? ";
    cin >> numInput;
    ans = 1;
    for (int i = 0; i < numInput; i++)
    {
        cout << i+1 << ": ";
        cin >> num;
        ans = num * ans;
    }
    cout << "The product of the " << numInput << " numbers you entered is " << ans << endl;
    return 0;
}

double quotient(){
    float numInput = 0, num = 0, ans = 0;
    cout << "\n======================= DIVISION =======================" << endl;
    cout << "How many numbers do you want to input? ";
    cin >> numInput;
    ans = 1;
    for (int i = 0; i < numInput; i++)
    {
        cout << i+1 << ": ";
        cin >> num;
        if (i == 0)
        {
            ans = num / ans;
        }
        else
        {
            ans = ans / num;
        }
        
    }
    cout << "The quotient of the " << numInput << " numbers you entered is " << ans << endl;
    return 0;
}
