#include <iostream>

using namespace std;

int convertirMinutosAHoras(int Minutos)
{
    int Horas;
    Horas = Minutos / 60;
    return Horas;
}

double convertirDePiesAMetros( double Pies)
{
    int Metros;
    Metros = Pies * .3048;
    return Metros;
}

double convertirFarenheitACelsius( double Farenheit)
{
    double Celsius;
    Celsius = 5/9.0 * (Farenheit - 32);
    return Celsius;
}

double convertirCelsiusaAFarenheit(double Celsius)
{
    double Farenheit;
    Farenheit = ((Celsius * 9) / 5) + 32;
    return Farenheit;
}

int main()
{
    int ChoiceOfConversion;
    int MinutosInput;
    int HorasOutput;
    double FeetInput;
    double MeterOutput;
    double FarenheitInput;
    double CelsiusOutput;
    double CelsiusInput;
    double FarenheitOutput;

    cout << endl << "Press 1 if you want minutes to hours" << endl << "press 2 if you want feet to meters" << endl << "Press 3 if you want Farenheit to Celsius" << endl << "Press 4 if you want Celsius to Farenheit" << endl;
    cin >> ChoiceOfConversion;
    if(ChoiceOfConversion == 1)
    {
        cout << "Tell me how many minutes you want to convert" << endl;
        cin >> MinutosInput;
        HorasOutput = convertirMinutosAHoras(MinutosInput);
        cout << HorasOutput;
    }
    if(ChoiceOfConversion == 2)
    {
    cout << "Tell me how many feet you want to convert " << endl;
    cin >> FeetInput;
    MeterOutput = convertirDePiesAMetros(FeetInput);
    cout << MeterOutput;
    }
    if(ChoiceOfConversion == 3)
    {
    cout << "Tell me how many Farenheit you want to convert " << endl;
    cin >> FarenheitInput;
    CelsiusOutput = convertirFarenheitACelsius(FarenheitInput);
    cout << CelsiusOutput;

    }
    if(ChoiceOfConversion == 4)
    {
    cout << "Tell me how many Celsius you want to convert" << endl;
    cin >> CelsiusInput;
    FarenheitOutput = convertirCelsiusaAFarenheit(CelsiusInput);
    cout << FarenheitOutput;

    }



    return 0;
}
