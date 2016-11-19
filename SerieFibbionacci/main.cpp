#include <iostream>

using namespace std;

void CalculateFibbionacci(int iN)
{
    cout << "1 1 ";
    int x =1, y = 1, z;
    int iCont = 1;
    while(iCont <= iN)
    {
        z = x + y;
        cout << z << " ";
        x = y;
        y = z;
        iCont ++;

    }
}

int main()
{
    int iN;
    cout << "Please enter a number N" << endl;
    cin >> iN;
    CalculateFibbionacci(iN);

    return 0;
}
