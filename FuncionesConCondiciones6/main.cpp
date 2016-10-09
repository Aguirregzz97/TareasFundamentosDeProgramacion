// Andres Aguirre Gonzalez A01039656


#include <iostream>

using namespace std;

double calculadoraSimple(int Number1, int Number2, char Operator)
{
    double Result;
    if(Operator == '+')
    {
        Result = Number1 + Number2;
    }
    if(Operator == '-')
    {
        Result = Number1 - Number2;
    }
    if(Operator == '*')
    {
        Result = Number1 * Number2;
    }
    if(Operator == '%')
    {
        Result = Number1 % Number2;
    }
    if(Operator == '/')
    {
        Result = Number1 / Number2;
    }
    return Result;
}


int main()
{
    int iNumber1;
    int iNumber2;
    char cOperation;
    double dResult;

    cout << "Please tell me a number" << endl;
    cin >> iNumber1;
    cout << "Please tell me another number" << endl;
    cin >> iNumber2;
    cout << "Please tell me the operation" << endl;
    cin >> cOperation;
    dResult = calculadoraSimple(iNumber1,iNumber2,cOperation);
    cout << "The result of the operation is " << dResult;


    return 0;
}
