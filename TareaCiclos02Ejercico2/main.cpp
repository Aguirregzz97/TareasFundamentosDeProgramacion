#include <iostream>

using namespace std;

int main()
{
    int iNumberInput, iCont = 1, iRun;




    do{
    cout << "How many numbers you wish to check?" << endl;
    cin >> iNumberInput;
    while(iCont <= iNumberInput)
    {
        int iNumberInput2;
        cout << "Please enter the # " << iCont << "Number" << endl;
        cin >> iNumberInput2;
        if(iNumberInput2 % 2 == 0)
        {
            cout << "Your number is pair" << endl;
        }
        else
        {
            cout << "Your number is odd" << endl;
        }
        iCont++;
    }
    cout << "Do you wish to run again? (1 yes/ 2 no)" << endl;
    cin >> iRun;
    }
    while(iRun == 1);
    return 0;
}
