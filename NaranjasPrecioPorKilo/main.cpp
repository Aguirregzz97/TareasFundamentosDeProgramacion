/*
This program gives you the total price of your oranges based on the price per kg constant.
Andres Aguirre Gonzalez A01039656  8/18/2016
12 lines of coding
i spent 10 minutes in finishing it.
execution time 1.6 seconds

test weight = 2
expected result should be: 52.


*/




#include <iostream>

using namespace std;

int main()
{

    const int iOrangesPrice = 26;
    double dWeightInput;
    double dPrice;

    cout << "Please tell me the weight of the oranges" << endl;
    cin >> dWeightInput;
    cout << endl;
    dPrice = dWeightInput * iOrangesPrice;
    cout << "the total price of your oranges is \t" << dPrice << endl;
    return 0;
}
