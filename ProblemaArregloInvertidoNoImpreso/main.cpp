#include <iostream>

using namespace std;

    int iArrSize;
    int * arr = new int [iArrSize]();


    void PrintArray(int iArrSize)
    {
        for(int i = 0; i < iArrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    }
    void InvertArray(int iArrSize)
    {
        for(int i = 0; i < iArrSize/2; i++)
        {
            int iOriginal = arr[i];
            arr[i] = arr[iArrSize - i -1];
            arr[iArrSize - i -1] = iOriginal;

        }
        for(int i = 0; i < iArrSize; i++)
        {
            cout << arr[i] << " ";
        }
    }

int main()
{
    cout << "Please give me the size of the array" << endl;
    cin >> iArrSize;
    for(int i = 0; i < iArrSize; i++)
    {
        int iInput;
        cout << "Please enter the number # " << i << endl;
        cin >> iInput;
        arr[i] = iInput;
    }
    PrintArray(iArrSize);
    InvertArray(iArrSize);


    return 0;
}
