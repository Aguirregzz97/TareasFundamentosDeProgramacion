
/*
This program creates certain operations showing the user how the operation is being done.
Andres Aguirre Gonzalez A01039656 8/20/2016
lines of coding : 30
time spent in program : 20 min

analysis: I have to create 4 operations not only with the result but also the process
design: i order to do this in my cout i will need to add a lot of string combined with variables, ask for the numbers and then operate.

1: declare variables
2: ask for name and 3 int numbers
3: create all 4 operations
4: for each operation print the process and result




given value: 2,4,5
expected result: 0,0,-5,-2
given value: 1,2,1
expected result: 0,1,-1,1
given value: 6,3,2
expected result: 2,0,0,6
given value: 1,2,3
expected result: 0,1,-3,-1
given value: 2,3,4
expected result: 0,2,-4,-2

*/

#include <iostream>

using namespace std;

int main()
{
    int iX;
    int iY;
    int iZ;
    int iResult1;
    int iResult2;
    int iResult3;
    int iResult4;
    string sUserName;


    cout << "Hi!, please give me your name"<< endl;
    cin >> sUserName;
    cout << "Please give me a number (#1)" << endl;
    cin >> iX;
    cout << "Please give me another number (#2)" << endl;
    cin >> iY;
    cout << "Just one more number (#3)" << endl;
    cin >> iZ;
    iResult1 = iX / iY;
    iResult2 = iX % iY;
    iResult3 = iX / iY - iZ;
    iResult4 = iX / (iY - iZ);
    cout << sUserName << ": " <<endl << iX << " / " << iY << " = " << iResult1 << endl;
    cout << iX << " % " << iY << " = " << iResult2 << endl;
    cout << iX << " / " << iY << " - " << iZ << " = " << iResult3 << endl;
    cout << iX << " /  (" << iY << " - " << iZ << ")" << " = " << iResult4 << endl;
    cout << endl << "Byeeee :)";
    return 0;
}
