/*
Analysis: Create a program that returns the total money earned by a salesman, if he sells more than 15,000 pesos and less than 20,000 he earns a 200 pesos bonus,
and if he earns more than 30,000 he earns a 300 pesos bonus, less than 15,000 pesos gets no bonus.
Design: first i will crate a function that recieve the sales in double and the commission, the function will return the total commission including the bonus.

algorithm:

1: ask for commission and sales
2: create function to calculate commission
3: call function and return the commission.
4: end


*/


#include <iostream>

using namespace std;



double CalculaComision(double dSales, double dCommission)
{
    double dMoneyEarned;
    dMoneyEarned = dSales * dCommission;
    if(dSales > 15000 && dSales < 20000)
    {
        dMoneyEarned += 200;
    }
    if(dSales >= 20000)
    {
     dMoneyEarned += 300;
    }
    return dMoneyEarned;
}

int main()
{
    double dCommissionInput;
    double dSalesInput;
    double dMoneyEarnedOutput;
    string sBono;


    cout << "What is the commission IN PERCENTAGE" << endl;
    cin >> dCommissionInput;
    cout << "What are the sales" << endl;
    cin >> dSalesInput;
    dCommissionInput /= 100;
    if(dSalesInput > 15000 && dSalesInput < 20000)
    {
        sBono = "Se agrego un bono de 200 pesos";
    }
    if(dSalesInput >= 20000)
    {
        sBono = "Se agrego un bono de 300 :)";
    }
    dMoneyEarnedOutput = CalculaComision(dSalesInput, dCommissionInput);

    cout << "The salesman earned " << dMoneyEarnedOutput << " amount of pesos" << endl;
    cout << sBono;
    return 0;
}
