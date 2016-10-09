#include <iostream>

using namespace std;
    int iArrSize;
    int * arr = new int[iArrSize]();


void PrintArray(int iArrSize)
{

    for(int i = 0; i < iArrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void PrintArrayInverted(int iArrSize)
{
    for(int i = 0; i < iArrSize; i++)
    {
        cout << arr[-i +iArrSize - 1] << " ";

    }
    cout << endl;
}

int main()
{
    cout << "Please give me the array size" << endl;
    cin >> iArrSize;
    for(int i = 0; i < iArrSize; i++)
    {
        int iInput;
        cout << "Please enter the number # " << i << endl;
        cin >> iInput;
        arr[i] = iInput;
    }
    PrintArray(iArrSize);
    PrintArrayInverted(iArrSize);

    return 0;
}
