#include <iostream>

using namespace std;

int main()
{
    int iN;
    cout << "Dime cuantos numeros quieres?" << endl;
    cin >> iN;
    int iArr[iN];
    for(int i = 0; i < iN; i++){
        cout << "Dame el numero" << endl;
        cin >> iArr[i];
    }
    for(int i = 0; i < iN; i++){
            cout << iArr[i];

    }

    return 0;
}
