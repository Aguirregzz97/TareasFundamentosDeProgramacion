// Andres Aguirre Gonzalez A01039656

#include <iostream>
#include <sstream>
#include <string.h>

using namespace std;


void CalcularHoraFormal(int iHoras, int iMinutos)
{

    string sTime;


    if(iHoras < 12 && iHoras >= 0)
    {
        sTime = "AM";
    }
    else
    {
        sTime = "PM";
        iHoras = iHoras - 12;
    }
    if(iHoras < 10)
    {
        cout << "0";
    }

    cout << iHoras << ":";
     if(iMinutos < 10)
    {
        cout << "0";
    }
    cout << iMinutos<< sTime;

}

int main()
{
    int iHorasInput;
    int iMinutosInput;

    cout << "Give me an hour" << endl;
    cin >> iHorasInput;
    cout << "Give me the minutes" << endl;
    cin >> iMinutosInput;
    if(iHorasInput > 23 || iHorasInput < 0)
    {
        cout << "Please enter a number between 0 and 23 for hours" << endl;
    }
    if(iMinutosInput > 59 || iMinutosInput < 0)
    {
        cout << "Please enter a number between 0 and 59 for minutes" << endl;
    }
    else
    {
         CalcularHoraFormal(iHorasInput, iMinutosInput);
    }


    return 0;
}
