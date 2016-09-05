/*
Andres Aguirre Gonzalez A01039656 29/08/2016
66 LOC y me tomo: 40 min hacer la tarea.

casos de prueba:

para #1
given: 120 minutes
expected: 2 hours
para # 2
given: 34 pies
expected: 10 metros
para # 3
given: 45 grados farenheit
expected : 7.2 celsius
para #4
given: 35 grados celsius
expected: 95 grados farenheit
*/




#include <iostream>

using namespace std;

int iconvertirMinutosAHoras(int iMinutos)
{
    int Horas;
    Horas = iMinutos / 60;
    return Horas;
}

double dconvertirDePiesAMetros( double dPies)
{
    int Metros;
    Metros = dPies * .3048;
    return Metros;
}

double dconvertirFarenheitACelsius( double dFarenheit)
{
    double Celsius;
    Celsius = 5/9.0 * (dFarenheit - 32);
    return Celsius;
}

double dconvertirCelsiusaAFarenheit(double dCelsius)
{
    double Farenheit;
    Farenheit = ((dCelsius * 9) / 5) + 32;
    return Farenheit;
}

int main()
{
    int iChoiceOfConversion;
    int iMinutosInput;
    int iHorasOutput;
    double dFeetInput;
    double dMeterOutput;
    double dFarenheitInput;
    double dCelsiusOutput;
    double dCelsiusInput;
    double dFarenheitOutput;


    while(iChoiceOfConversion != 0)
    {


    cout << endl << "Press 1 if you want minutes to hours" << endl << "press 2 if you want feet to meters" << endl << "Press 3 if you want Farenheit to Celsius" << endl << "Press 4 if you want Celsius to Farenheit"<< endl << "Press 0 if you want to exit" << endl;
    cin >> iChoiceOfConversion;




    if(iChoiceOfConversion == 1)
    {
        cout << "Tell me how many minutes you want to convert" << endl;
        cin >> iMinutosInput;
        iHorasOutput = iconvertirMinutosAHoras(iMinutosInput);
        cout << iMinutosInput <<" minutes" << " is equal to " << iHorasOutput << " Hours" << endl;
    }
    if(iChoiceOfConversion == 2)
    {
    cout << "Tell me how many feet you want to convert " << endl;
    cin >> dFeetInput;
    dMeterOutput = dconvertirDePiesAMetros(dFeetInput);
    cout << dFeetInput << " Feet is equal to "<< dMeterOutput << " Meters" << endl;
    }
    if(iChoiceOfConversion == 3)
    {
    cout << "Tell me how many Farenheit you want to convert " << endl;
    cin >> dFarenheitInput;
    dCelsiusOutput = dconvertirFarenheitACelsius(dFarenheitInput);
    cout << dFarenheitInput << " degrees farenheit is equal to " << dCelsiusOutput << " degrees celsius " << endl;

    }
    if(iChoiceOfConversion == 4)
    {
    cout << "Tell me how many Celsius you want to convert" << endl;
    cin >> dCelsiusInput;
    dFarenheitOutput = dconvertirCelsiusaAFarenheit(dCelsiusInput);
    cout << dCelsiusInput << " degrees celsius is equal to " << dFarenheitOutput << " degrees farenheit" << endl;



    }
    }
    cout << "Byeee :)";




    return 0;
}
