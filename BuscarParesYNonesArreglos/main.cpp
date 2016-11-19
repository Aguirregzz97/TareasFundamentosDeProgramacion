#include <iostream>
using namespace std;
    void CargarDatos(int iArr[], int iSize)
    {
        int iValor;
        for(int i = 0; i < iSize; i ++)
        {
            cout << "Dame la casilla #" << i << endl;
            cin >> iValor;
            iArr[i] = iValor;
        }
        cout << endl;
    }
    void SacarParOImpar(int iArr[], int iSize, int &iContPares, int &iContImpares)
{
    for(int i = 0; i < iSize; i++)
    {
        if(iArr[i] % 2 == 0)
        {
            iContPares ++;
        }
        else
        {
            iContImpares ++;
        }
    }
}
    void DesplegarDatos(int iArr[], int iContPares, int iContImpares, int iSize)
    {
        cout << "Del arreglo: " << endl;
        for(int i = 0; i < iSize; i++)
        {
            cout << iArr[i] << endl;
        }
        cout << endl << "El numero de pares son: " << iContPares << endl << endl << "El numero de impares son: " << iContImpares << endl;
    }
int main()
{

    int iSize;
    cout << "Cuantos numeros quieres en el arreglo?" << endl;
    cin >> iSize;
    int iArr[iSize];
    int iContPares = 0, iContImpares = 0;
    CargarDatos(iArr, iSize);
    SacarParOImpar(iArr, iSize, iContPares, iContImpares);
    DesplegarDatos(iArr, iContPares, iContImpares, iSize);
    return 0;
}
