#include <iostream>

using namespace std;

int main()
{
    double dMetersInput;
    const double dMetersConversion = 100;
    const double dInchConversion = 2.54;
    const double dFeetConversion = 12;
    double dFeetOutput;


    cout << "Please give me how many meters you want to convert" << endl;
    cin >> dMetersInput;
    dFeetOutput = ((dMetersInput * dMetersConversion) / dInchConversion) / dFeetConversion;
    cout << dMetersInput << "Meters are equivalent to" <<endl << dFeetOutput;
    return 0;
}
