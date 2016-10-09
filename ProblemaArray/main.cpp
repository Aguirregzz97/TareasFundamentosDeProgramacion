#include <iostream>

using namespace std;

int main()
{
    // Programa que:
    // Reciba el tamano de arreglo y los numeros de ese arreglo
    // Calcule el promedio

    // Arrreglo estatico
    // int arr[8];
    // Arreglo dinamico
    int numeroDeElementos = 100;
    int *arr = new int[numeroDeElementos]();

    cout << "\n";
    for(int i = 0 ; i < numeroDeElementos; i++){
       arr[i] = i;
    }

    cout << endl;

    return 0;
}
