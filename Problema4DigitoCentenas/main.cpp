/*
This program gives you the Hundred digit "centenas", of any given number.
Andres Aguirre Gonzalez A01039656 8/20/2016
lines of coding : 30
time spent in program : 45 min

analysis: I have to create an input in which the user types a number and give him the hundred digit
design: in order to do this i have to divide the number by 1000 then only keep the decimals, then multiply that by 10 and then keep only the int.

1: declare variables
2: ask for name and a number
3: perform all operations
4: print the result (centenas)


given value: 1456
expected result: 4
given value: 254
expected result: 2
given value: 3256789
expected result: 7

*/



#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    double dNumberInput;
    double dResult;
    string sUserName;

    cout << "Please tell me your name" << endl;
    cin >> sUserName;
    cout << "Please tell me a number" << endl;
    cin >> dNumberInput;
    dResult = int(((dNumberInput / 1000) - int(dNumberInput / 1000)) * 10);
    cout << sUserName << " Your hundred numer is: " << dResult << endl;


    return 0;
}
