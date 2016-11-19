#include <iostream>

using namespace std;

void CalcularSuma(int iN)
{
    int * arr = new int[iN]();
    int iSuma = 0;
    for(int i = 1; i <= iN; i++)
    {
        int iInput;
        cout << "Dame el numero " << i << endl;
        cin >> iInput;
        arr[i] = iInput;
        iSuma = iSuma + arr[i];
    }
    cout << iSuma;


}

int main()
{

    int iN;
    cout << "Cuantos numeros quieres sumar?" << endl;
    cin >> iN;
    if(iN <= 0 || iN > 20)
    {
        cout << "byee";
    }
    else
    {

        CalcularSuma(iN);
    }

    return 0;
}
