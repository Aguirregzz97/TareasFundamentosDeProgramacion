/* This program converts your given input in meters to an output in Feet

Andres Aguirre Gonzalez A01039656 8/18/2016
13 lines of code
execution time: 1.1 seconds
total time in doing it 15 minutes.

Analysis: i have to convert some given meters into Feet.
Design: in order to do this i have to first multiply my meters * a 100 in order to convert i to cm, then divide it by
2.54 in order to convert it to inches and finally divide it by 12 to get it to feet.

1: declare variables
2: ask for meters
3: capture meters
4: convert with operations into Feet
5: print Feet


Actual test

given: 2 meters
expected: 6.5 feet
given: 4
expected: 13.12
given: 2.5
expected: 8.2

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
    cout <<endl  << dMetersInput << " Meters are equivalent to " << dFeetOutput << " Feet";
    return 0;
}
