#include <iostream>

using namespace std;

void CalculateKidCondition(int iMinWeight, int iMaxWeight, int iKidWeight)
{
    if(iKidWeight < iMinWeight)
    {
        cout << "The weight of your kid is " << iKidWeight << " . The kid is below of the recommended weight, please visit your doctor for more detail.";
    }
    if(iKidWeight > iMaxWeight)
    {
        cout << "The weight of your kid is " << iKidWeight << " . The kid is above the recommended weight, please visit your doctor for more detail";
    }
    if(iKidWeight >= iMinWeight && iKidWeight <= iMaxWeight)
    {
        cout << "The weight of you kid is " << iKidWeight << " . The kid is on the recommended weight parameters, good job!";
    }
}

int main()
{
    int iWeightInput;
    int iMinimumWeight = 8;
    int iMaximumWeight = 15;

    cout << "Please enter your kid Weight" << endl;
    cin >> iWeightInput;
    CalculateKidCondition(iMinimumWeight,iMaximumWeight,iWeightInput);



    return 0;
}
