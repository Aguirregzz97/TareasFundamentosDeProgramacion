#include <iostream>

using namespace std;

void CalculateCharacters(int iN)
{
    int iNumeroDeVeces = iN/3;
    int iCont = 1;
    while(iCont <= iNumeroDeVeces)
    {
        cout << ".,#";
        iCont ++;
    }
    if(iN % 3 == 1)
    {
        cout << ".";
    }
    if(iN % 3 == 2)
    {
        cout << ".,";

    }
    cout << endl;
}

int main()
{
    int iN, iAgain;
    do
    {
    cout << "Please enter a value N" << endl;
    cin >> iN;
    CalculateCharacters(iN);
    cout << "Do you want to run again? (1 yes/ 2 no)" << endl;
    cin >> iAgain;
    }while(iAgain == 1);


    return 0;
}
