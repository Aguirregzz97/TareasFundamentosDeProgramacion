// Andres Aguirre Gonzalez A01039656

#include <iostream>

using namespace std;


int DigitReturn(char cLetter)
{
    int iDigit;
    if(cLetter == 'A' || cLetter == 'B' || cLetter == 'C')
    {
        iDigit = 2;
    }
    if(cLetter == 'D' || cLetter == 'E' || cLetter == 'F')
    {
        iDigit = 3;
    }
    if(cLetter == 'G' || cLetter == 'H' || cLetter == 'I')
    {
        iDigit = 4;
    }
    if(cLetter == 'J' || cLetter == 'K' || cLetter == 'L')
    {
        iDigit = 5;
    }
    if(cLetter == 'M' || cLetter == 'N' || cLetter == 'O')
    {
        iDigit = 6;
    }
    if(cLetter == 'P' || cLetter == 'R' || cLetter == 'S')
    {
        iDigit = 7;
    }
    if(cLetter == 'T' || cLetter == 'U' || cLetter == 'V')
    {
        iDigit = 8;
    }
    if(cLetter == 'W' || cLetter == 'X' || cLetter == 'Y')
    {
        iDigit = 9;
    }
    if(cLetter == 'Q' || cLetter == 'Z')
    {
        iDigit = 0;
    }

    return iDigit;
}

int main()
{
    char cLetterInput;
    int Digit;

    cout << "Please enter a letter" << endl;
    cin >> cLetterInput;
    Digit = DigitReturn(cLetterInput);
    if(Digit == 0)
    {
        cout << "The letter " << cLetterInput << " does not correspond to the phone";

    }
    cout << "The digit " << Digit << " corresponds to the letter " << cLetterInput << " in your phone";

    return 0;
}
