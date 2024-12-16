#include <iostream>
#include <string>
#include "IsKPeriodic.h"
using namespace std;

int main()
{
    string input;
    int K;

    cout << "Input the string: ";
    cin >> input;
    cout << "Input the value of K for checking of periodicity of the string: ";
    cin >> K;

    if (IsKPeriodic(input, K))
    {
        cout << "The string is periodic to the number " << K << endl;
    }
    else
    {
        cout << "The string is non-periodic to the number " << K << endl;
    }
    return 0;
}