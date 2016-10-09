// Andres Aguirre Gonzalez A01039656

#include <iostream>

using namespace std;

int calculasSalarioNeto(int IHoursWorked, int iPaymentPerHour)
{
    int iSalarioNeto;
    if(IHoursWorked <= 40)
    {
        iSalarioNeto = IHoursWorked * iPaymentPerHour;
    }
    if(IHoursWorked > 40)
    {
        iSalarioNeto = IHoursWorked * 1.50 * iPaymentPerHour;
    }
    if(iSalarioNeto <= 8000)
    {
        iSalarioNeto = iSalarioNeto;
    }
    if(iSalarioNeto > 8000)
    {
        iSalarioNeto = iSalarioNeto * .90;
    }
    return iSalarioNeto;
}

int main()
{
    int iHoursWorked;
    int iPaymentPerHour;
    int iSalarioFinal;

    cout << "How many hours did the workers work in the week?" << endl;
    cin >> iHoursWorked;
    cout << "How much does a worker earn per hour?" << endl;
    cin >> iPaymentPerHour;

    iSalarioFinal = calculasSalarioNeto(iHoursWorked,iPaymentPerHour);
    cout << "Your final salary is " << iSalarioFinal;



    return 0;
}
