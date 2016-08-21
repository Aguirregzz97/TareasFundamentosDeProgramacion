
/*
This program gives you the change in the least amount of bills of 200, 100,50,20 and coins of 10 and 5.
Andres Aguirre Gonzalez A01039656 8/20/2016
lines of coding : 30
time spent in program : 30 min

analysis: I have to create an input in which the user gives me the money then somehow give him the amount of bills that make u that input
design: i order to do this i have to divide the input by 200 in order to get the 200 bills, then use the % of that and divide by 100, rince and repeat for every bill.

1: declare variables
2: ask for name and money he got
3: create all divisions and % for each bill
4: print each whole division




given value: 550
expected result: 2 of 200, 1 of 100 and 1 of 50
given value: 200
expected result: 1 of 200
given value: 40
expected result: 2 of 20

*/







#include <iostream>

using namespace std;

int main()
{
    int iMoneyInput;
    int i200BillResult;
    int i100BillResult;
    int i50BillResult;
    int i20BillResult;
    int i10CoinResult;
    int i5CoinResult;
    int i200Bill = 200;
    int i100Bill = 100;
    int i50Bill = 50;
    int i20Bill = 20;
    int i10Coin = 10;
    int i5Coin = 5;
    int iMod;
    string UserName;



    cout << "Please give me your name" << endl;
    cin >> UserName;
    cout << "Please tell me how much money you want to change" << endl;
    cin >> iMoneyInput;
    i200BillResult = iMoneyInput / i200Bill;
    iMod = iMoneyInput % i200Bill;
    i100BillResult = iMod / i100Bill;
    iMod = iMod % i100Bill;
    i50BillResult = iMod / i50Bill;
    iMod = iMod % i50Bill;
    i20BillResult = iMod / i20Bill;
    iMod = iMod % i20Bill;
    i10CoinResult = iMod / i10Coin;
    iMod = iMod % i10Coin;
    i5CoinResult = iMod / i5Coin;
    cout << UserName << endl;
    cout  << "You have " << i200BillResult << " 200 Bills" << endl;
    cout  << "You have " << i100BillResult << " 100 Bills" << endl;
    cout  << "You have " << i50BillResult << " 50 Bills" << endl;
    cout  << "You have " << i20BillResult << " 20 Bills" << endl;
    cout  << "You have " << i10CoinResult << " 10 coins" << endl;
    cout  << "You have " << i5CoinResult << " 5 coins" << endl;
    cout << "Thanks for coming " << UserName;

    return 0;
}
