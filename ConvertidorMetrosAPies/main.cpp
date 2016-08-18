/* This program converts your given input in meters to an output in Feet
Andres Aguirre Gonzalez A01039656 8/18/2016
13 lines of code
execution time: 1.1 seconds

Actual test
given: 2 meters
expected: 6.5 feet

*/





#include <iostream>

using namespace std;

int main()
{
    //declare variables
    double dMetersInput;
    const double dMetersConversion = 100;
    const double dInchConversion = 2.54;
    const double dFeetConversion = 12;
    double dFeetOutput;

    //start coding
    cout << "Please give me how many meters you want to convert" << endl;
    cin >> dMetersInput;
    dFeetOutput = ((dMetersInput * dMetersConversion) / dInchConversion) / dFeetConversion;
    cout << endl << dMetersInput << "\t" << "Meters are equivalent to" <<endl << dFeetOutput <<"\t" << "Feet";
    return 0;
}
