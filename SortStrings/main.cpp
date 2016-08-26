#include <iostream>

using namespace std;

double calcArea(double largo, double ancho)
    {
        double area;
        area = largo*ancho;
        return area;

    }

int main()
{



    int LargoInput;
    int AnchoInput;
    int AreaTotal;



    cout << "Dame un largo" << endl;
    cin >> LargoInput;
    cout << "Dame un ancho" << endl;
    cin >> AnchoInput;


   AreaTotal = calcArea(LargoInput,AnchoInput);
   cout << AreaTotal;

    return 0;
}
