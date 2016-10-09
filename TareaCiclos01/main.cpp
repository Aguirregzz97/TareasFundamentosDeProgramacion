#include <iostream>

using namespace std;


void FuncionLista(int iCantidad)
{
    int iCont = 1;
    while (iCont < iCantidad)
    {
        cout << iCont << ",";
        iCont++;
    }
    int iCont2 = 1;
    while (iCantidad >= iCont2)
    {
        cout << iCantidad << ",";
        iCantidad--;
    }
    cout << endl;
}

double CalcularPiConFor(int dAprox)
{
    double dResultado = 0;
    double dResultadoBien;
    int iCont = 0;
    int iDivision = 1;
    int iNegativo = 2;
    for (iCont; iCont <= dAprox; iCont++)
    {
        double offset = (1.0 / iDivision);
        if(iNegativo % 2 == 1)
        {
            offset *= -1;

        }
        dResultado = dResultado + offset;
        iDivision += 2;
        iNegativo++;
    }
    dResultadoBien = dResultado * 4;
    return dResultadoBien;
}

double CalcularPiConWhile(int dAprox)
{
	double dResultado = 0;
	double dResultadoBien;
	int iCont = 0;
	int iDivision = 1;
	int iNegativo = 2;
	while (iCont <= dAprox)
	{
		double offset = (1.0 / iDivision);
		if (iNegativo % 2 == 1)
		{
			offset *= -1;
		}
		dResultado =  dResultado + offset;
		iCont++;
		iDivision += 2;
		iNegativo++;
	}
    dResultadoBien = dResultado * 4;
	return dResultadoBien;

}
int main()
{




	int iAprox;
	double dResultado;
	int iDecision;
	int iNumeroFuncion;
	int iVolver;

	do{
	cout << "dame el numero que quieres que haga la aproximacion" << endl;
	cin >> iAprox;
	cout << "presiona 1 si quieres for, presiona 2 si quieres while" << endl;
	cin >> iDecision;
	if(iDecision == 1)
    {
        dResultado = CalcularPiConFor(iAprox);
	}
	else
    {
        dResultado = CalcularPiConWhile(iAprox);
	}

	cout << dResultado << endl;
	cout << "Porfavor escribe un numero para la funcion" << endl;
	cin >> iNumeroFuncion;
	FuncionLista(iNumeroFuncion);

	cout << "quieres volver a empezar? (1 si 2 no)";
	cin >> iVolver;
	}while(iVolver == 1);





    return 0;
}

