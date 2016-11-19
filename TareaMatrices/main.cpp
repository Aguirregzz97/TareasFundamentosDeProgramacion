#include <iostream>

using namespace std;

void CargarDatos(int iMat[3][4], int iMaxRen, int iMaxCol)
{
    for(int iRen = 0; iRen < iMaxRen; iRen++)
    {
        for (int iCol = 0; iCol < iMaxCol; iCol++)
        {
            cout << "Porfavor ingresa el renglon #" << iRen + 1 << " Columna #" << iCol + 1 << endl;
            cin >> iMat[iRen][iCol];
        }
    }
}

void DesplegarDatos(int iMat[3][4], int iMaxRen, int iMaxCol)
{
    for(int iRen = 0; iRen < iMaxRen; iRen++)
    {
        for (int iCol = 0; iCol < iMaxCol; iCol++)
        {
           cout << iMat[iRen][iCol] << " ";
        }
        cout << endl;
    }
}

int SumaMatriz(int iMat[3][4], int iMaxRen, int iMaxCol)
{
    int iSumaResultado = 0;
    for(int iRen = 0; iRen < iMaxRen; iRen++)
    {
        for (int iCol = 0; iCol < iMaxCol; iCol++)
        {
            iSumaResultado += iMat[iRen][iCol];
        }
    }
    return iSumaResultado;
}

double PromedioMatriz(int iMat[3][4], double iMaxRen, double iMaxCol)
{
    double dPromedio = 0;
    dPromedio = SumaMatriz(iMat,iMaxRen,iMaxCol) / (iMaxRen * iMaxCol);
    return dPromedio;

}

bool Xesta(int iMat[3][4],int iMaxRen,int iMaxCol, int iX)
{
     for(int iRen = 0; iRen < iMaxRen; iRen++)
    {
        for (int iCol = 0; iCol < iMaxCol; iCol++)
        {
            if(iMat[iRen][iCol] == iX)
            {
                return true;
            }
        }
    }
    return false;
}

int CuentaX(int iMat[3][4],int iMaxRen,int iMaxCol,int iX)
{
    int iContX = 0;
    for(int iRen = 0; iRen < iMaxRen; iRen++)
    {
        for (int iCol = 0; iCol < iMaxCol; iCol++)
        {
            if(iMat[iRen][iCol] == iX)
            {
                iContX += 1;
            }
        }
    }
    return iContX;
}

int main()
{
    int iMat[3][4];
    int iMaxRen = 3;
    int iMaxCol = 4;
    int iSumaMatriz = 0;
    double dPromedioMatriz = 0;
    int iX;
    int iContX = 0;
    cout << "Hola usuario, su matriz constara de 3 renglones y 4 columnas" << endl << endl;
    CargarDatos(iMat,iMaxRen,iMaxCol);
    cout << "En tu matriz:   " << endl;
    DesplegarDatos(iMat,iMaxRen,iMaxCol);
    iSumaMatriz = SumaMatriz(iMat,iMaxRen,iMaxCol);
    cout << "La suma de tu matriz es " << iSumaMatriz << endl;
    dPromedioMatriz = PromedioMatriz(iMat,iMaxRen,iMaxCol);
    cout << "El promedio de tu matriz es " << dPromedioMatriz << endl << endl;
    cout << "Porfavor ingresa un numero x para buscar en la matriz" << endl;
    cin >> iX;
    if(Xesta(iMat,iMaxRen,iMaxCol,iX) == 1)
    {
        cout << "El numero X SI se encuentra en la matriz :) " << endl;
    }
    else
    {
        cout << "El numero X NO se encuentra en la matriz :( " << endl;
    }
    iContX = CuentaX(iMat,iMaxRen,iMaxCol,iX);
    cout << "El numero X se encuentra " << iContX << " veces en la matriz" << endl;

    return 0;
}
