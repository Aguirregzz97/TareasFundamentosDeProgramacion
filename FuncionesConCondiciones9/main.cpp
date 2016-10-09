// Andres Aguirre Gonzalez A01039656


#include <iostream>

using namespace std;

char Calculatebig(int a, int b, int c)
{
    char BiggestNumber;
    if(a >= b && a>= c)
    {
        BiggestNumber = 'a';
    }
    if(b >= a && b>= c)
    {
        BiggestNumber = 'b';
    }
    if(c >= a && c >= b)
    {
        BiggestNumber = 'c';
    }
    return BiggestNumber;
}

int main()
{
    int a,b,c;
    char BiggestNumber;

    cout << "Write number a" << endl;
    cin >> a;
    cout << "Write number b" << endl;
    cin >> b;
    cout << "Write number c" << endl;
    cin >> c;
    BiggestNumber = Calculatebig(a,b,c);
    cout << "Your biggest number is " << BiggestNumber;
    return 0;
}
