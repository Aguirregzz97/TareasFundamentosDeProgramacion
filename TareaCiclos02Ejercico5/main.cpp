#include <iostream>

using namespace std;

int main()
{
    int iA,iB;
    cout << "Please tel me a number a" << endl;
    cin >> iA;
    cout << "Please tell me a number B" << endl;
    cin >> iB;
    if(iA >= iB)
    {
        cout << "Please let A be smaller than B" << endl;
    }
    else
    {
        while(iA < iB)
        {
            if(iA % 2 == 0)
            {
                iA += 2;
                if(iA > iB)
                {
                    break;
                }
                cout << iA << " ";
            }
            else
            {
                iA ++;
                cout << iA << " ";
            }

        }
    }

    return 0;
}
