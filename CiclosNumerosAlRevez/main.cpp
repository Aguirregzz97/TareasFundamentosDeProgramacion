#include <iostream>

using namespace std;

int main()
{
    int iInput;
    int iDigitCounter = 1;
    cout << "Please enter the numbers you wish to turn over" << endl;
    cin >> iInput;
    int iTurnt = iInput;
    int iDivision = iInput;

    for(int i = 1; i<= iDigitCounter; i++)
    {
        iInput = iInput / 10.0;
        if(iInput != 0)
        {
            iDigitCounter ++;
        }
    }
    for(int i = 1; i <= iDigitCounter; i++)
    {
        iTurnt = iDivision % 10;
        iDivision = iDivision / 10;
        cout << iTurnt;
    }

    return 0;
}
