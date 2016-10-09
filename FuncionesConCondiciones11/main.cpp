//Andres Aguirre Gonzalez A01039656




#include <iostream>
#include <math.h>

using namespace std;

void CalculateFunction(int NumberInput)
{
    int Resultado;
    if(NumberInput < -2)
    {

        cout << "2*" << NumberInput << "^2 + 4(" << NumberInput << ") +2 = ";
        Resultado = 2*(pow(NumberInput,2)) + (4*NumberInput) + 2;
        cout << Resultado;
    }
    if(NumberInput >= -2 && NumberInput < 0)
    {
        cout << "2";
    }
    if(NumberInput >= 0)
    {
        cout << "3(" << NumberInput << ") +1 = ";
        Resultado = 3*NumberInput + 1;
        cout << Resultado;

    }
}

int main()
{
    int iNumberInput;
    cout << "Please write a number" << endl;
    cin >> iNumberInput;
    CalculateFunction(iNumberInput);


    return 0;
}
