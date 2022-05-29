#include <iostream>
using namespace std;

double average(){
    float numInput, num, ans;
    cout << "\n======================= GET AVERAGE =======================" << endl;
    cout << "How many numbers do you want to input? ";
    cin >> numInput;
    for (int i = 0; i < numInput; i++)
    {
        cout << i+1 << ": ";
        cin >> num;
        ans = num + ans;
    }
    ans = ans / numInput;
    cout << "The sum of the " << numInput << " numbers you entered is " << ans << endl;
    return 0;
}