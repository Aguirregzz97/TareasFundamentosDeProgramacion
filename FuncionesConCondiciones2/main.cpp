#include <iostream>
#include <sstream>
#include <string.h>

using namespace std;

// http://stackoverflow.com/questions/5590381/easiest-way-to-convert-int-to-string-in-c
// http://stackoverflow.com/questions/12975341/to-string-is-not-a-member-of-std-says-g
namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

void CalcularHoraFormal(int iHoras, int iMinutos)
{
    string iHorasM;
    string iMinutosM;
    string sTime;
    string sFinalHour;

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
        iHorasM = "0" + patch::to_string(iHoras);
    }
    else
    {
        iHorasM = iHoras;

    }
    if(iMinutos < 10)
    {
        iMinutosM = "0" + patch::to_string(iMinutos);
    }
    else
    {
        iMinutosM = iMinutos;

    }
    cout << "Son las " << iHorasM << ":" << iMinutosM << sTime;

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
