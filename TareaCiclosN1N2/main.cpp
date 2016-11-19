#include <iostream>

using namespace std;


//fucnion
void CalculateInterNumbers(int iN1, int iN2)
{
    if(iN1 < iN2)
    {
        for(iN1; iN1 < iN2; iN1++)
        {
            if(iN1 + 1 == iN2)
            {
                break;
            }
            cout << "Los numeros de en medio son: " << iN1 + 1 << endl;
        }
    }
    else
    {
        for(iN2; iN1 > iN2; iN1--)
        {
            if(iN1 - 1 == iN2 )
            {
                break;
            }
            cout << "Los numeros de en medio son: " << iN1 -1 << endl;
        }
    }
    }


int main()
{
    int iN1, iN2, iContinue;
    do{
    cout << "Please enter N1" << endl;
    cin >> iN1;
    cout << "Please enter N2" <<  endl;
    cin >> iN2;
    CalculateInterNumbers(iN1, iN2);
    cout << "Quieres continuar? (1 si/0 no)" << endl;
    cin >> iContinue;
    }while(iContinue == 1);
    return 0;
}
