/*
This program gives you the total price of your oranges based on the price per kg constant.
Andres Aguirre Gonzalez A01039656  8/18/2016
12 lines of coding
i spent 10 minutes in finishing it.
execution time 1.6 seconds


Analysis: I have to convert a given weight into a price with a constant price per kg.
design: i can do this by multiplying my constant with my weight.

1: declare variables
2: ask for weight
3: ask for price
4: read weight
5: read price
6: divide price by weight in order to get price per kilo
7: print your price per kilo

weight and price values: 10,50
expected result: 5
weight and price values: 20, 100
expected result: 5
weight and price values: 2.5, 34
expected result: 13.6

*/
#include <iostream>

using namespace std;

int main()
{

    double dPricePerKilo;
    double dWeightInput;
    double dPriceInput;

    cout << "Please tell me the weight of the oranges" << endl;
    cin >> dWeightInput;
    cout << endl << "How much did you pay?" << endl;
    cin >> dPriceInput;
    dPricePerKilo = dPriceInput / dWeightInput;
    cout << "Your Oranges Price per kilo is " << dPricePerKilo;
    return 0;
}
