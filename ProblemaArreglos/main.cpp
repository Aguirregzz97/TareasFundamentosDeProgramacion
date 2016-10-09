#include <iostream>

using namespace std;

int main()
{
    int iSizeInput, iAccum = 0, iMin = 30000, iMax = 0, i2ndMin = 30000;
    cout << "Please enter the size of your array" << endl;
    cin >> iSizeInput;
    int * arr = new int[iSizeInput]();
    for(int i = 0; i < iSizeInput; i++)
    {

        int iInput;
        cout << "Please enter the number # " << i << endl;
        cin >> iInput;
        arr[i] = iInput;
    }
    for(int i = 0; i < iSizeInput; i++)
    {
        iAccum = iAccum + arr[i];
        if(arr[i] < iMin)
        {
            iMin = arr[i];
        }
        else if(arr[1] < i2ndMin)
        {
        i2ndMin = arr[i];
        }

        if(arr[i] > iMax)
        {
            iMax = arr[i];
        }

    }
    cout << "The average of our numbers is : " << iAccum/iSizeInput << endl;;
    cout << "The minimum number is " << iMin << endl;
    cout << "The maximum number is " << iMax << endl;
    cout << "The 2nd min Number is " << i2ndMin << endl;
    return 0;
}
