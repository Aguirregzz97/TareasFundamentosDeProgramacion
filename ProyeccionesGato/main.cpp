#include <iostream>
using namespace std;

void HacerOriginalyDesplegar(int img[35][35], int Destino[35][35], int iSize)
{
    for(int iRen = 0; iRen < iSize; iRen++)
    {
        for(int iCol = 0; iCol < iSize; iCol++)
        {
            img[iRen][iCol] = Destino[iRen][iCol];
            cout << Destino[iRen][iCol];
        }
        cout << endl;
    }
    cout << endl;
}
void DesplegarImg(int img[35][35], int iSize)
{
    for(int iRen = 0; iRen < iSize; iRen++)
    {
        for(int iCol = 0; iCol < iSize; iCol++)
        {
            cout << img[iRen][iCol];
        }
        cout << endl;
    }
}
void RotarDerecha(int img[35][35], int Destino[35][35], int iSize)
{
    int iRD = 0;
    int iCD = iSize -1;
    for(int iRen = 0; iRen < iSize; iRen++)
    {
        for(int iCol = 0; iCol < iSize; iCol++)
        {
            Destino[iRD][iCD] = img[iRen][iCol];
            iRD ++;
        }
        iCD--;
        iRD = 0;
    }
    HacerOriginalyDesplegar(img,Destino,iSize);
}
void RotarIzquierda(int img[35][35], int Destino[35][35], int iSize)
{
    int iRD = iSize - 1;
    int iCD = 0;
    for(int iRen = 0; iRen < iSize; iRen++)
    {
        for(int iCol = 0; iCol < iSize; iCol++)
        {
            Destino[iRD][iCD] = img[iRen][iCol];
            iRD--;
        }
        iCD++;
        iRD = iSize -1;
    }
    HacerOriginalyDesplegar(img,Destino,iSize);
}
void FlipHorizontal(int img[35][35], int Destino[35][35], int iSize)
{
    int iRD = 0;
    int iCD = iSize -1;
    for(int iRen = 0; iRen < iSize; iRen++)
    {
        for(int iCol = 0; iCol < iSize; iCol++)
        {
            Destino[iRD][iCD] = img[iRen][iCol];
            iCD--;
        }
        iRD++;
        iCD = iSize - 1;
    }
    HacerOriginalyDesplegar(img,Destino,iSize);
}
void FlipVertical(int img[35][35], int Destino[35][35], int iSize)
{
    int iRD = iSize -1;
    int iCD = 0;
    for(int iRen = 0; iRen < iSize; iRen++)
    {
        for(int iCol = 0; iCol < iSize; iCol++)
        {
            Destino[iRD][iCD] = img[iRen][iCol];
            iCD++;
        }
        iRD--;
        iCD = 0;
    }
    HacerOriginalyDesplegar(img,Destino,iSize);
}
void ImagenNegativa(int img[35][35], int Destino[35][35], int iSize)
{
    for(int iRen = 0; iRen < iSize; iRen++)
    {
        for(int iCol = 0; iCol < iSize; iCol++)
        {
            if(img[iRen][iCol] == 1)
            {
                Destino[iRen][iCol] = 0;
            }
            else
            {
                Destino[iRen][iCol] = 1;
            }
        }
    }
    HacerOriginalyDesplegar(img,Destino,iSize);
}
void MirrorHorizontal(int img[35][35], int Destino[35][35], int iSize)
{
    int iRD = 0;
    int iCD = iSize -1;
    for(int iRen = 0; iRen < iSize; iRen++)
    {
        for(int iCol = 0; iCol < iSize; iCol++)
        {
            Destino[iRD][iCD] = img[iRen][iCol];
            iCD--;
        }
        iRD++;
        iCD = iSize -1;
    }
        HacerOriginalyDesplegar(img,Destino,iSize);
}
void MirrorVertical(int img[35][35], int Destino[35][35], int iSize)
{
    int iRD = iSize -1;
    int iCD = 0;
    for(int iRen = 0; iRen < iSize; iRen++)
    {
        for(int iCol = 0; iCol < iSize; iCol++)
        {
            Destino[iRD][iCD] = img[iRen][iCol];
            iCD++;
        }
        iRD--;
        iCD = 0;
    }
        HacerOriginalyDesplegar(img,Destino,iSize);
}
int main() {
 cout << "Felix el Gato!\n\n";
 int img[35][35] = {
 {1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1},
 {1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1},
 {1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1},
 {1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1},
 {1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1},
 {1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1},
 {1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1},
 {1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1,1,0,0,1,1,1,1,1},
 {1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,1,1,1,1},
 {1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,0,0,1,1,1},
 {1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,0,1,1,1},
 {1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1},
 {1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,1,0,0,1},
 {1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,1,1,1,0,0,0,1,0,1},
 {1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,0,1,1,1,0,0,0,1,0,0},
 {1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,0,0,1,1,0,0,0,1,0,0},
 {1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,0,0,1,1,0,0,0,1,0,0},
 {1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,0,0,1,1,1,0,0,1,1,0},
 {1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,1,1,1,0,0,0,1,1,1,1,1,1,0},
 {0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,1,1,1,1,0,0,1,0,1,1,1,1,1,1,0},
 {1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,0,0,0,0,1,0,0},
 {1,1,0,0,0,0,0,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,1,0},
 {1,1,1,0,0,0,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0,1,1,0,0,0,0,0,0,1,0,0},
 {1,1,0,0,0,0,1,1,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0},
 {1,0,0,0,0,0,1,1,1,0,0,0,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0},
 {1,1,1,1,0,0,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1},
 {1,1,1,1,1,0,0,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,1},
 {1,1,1,1,1,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,1,1,0,1,1},
 {1,1,1,1,1,1,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1},
 {1,1,1,1,1,1,1,0,0,1,1,1,1,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1},
 {1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,0,0,1,0,0,1,1,1,1},
 {1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,1},
 {1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1},
 {1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,1,1,1,1,1,1,1,1},
 {1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1}

 };
 int iSize = 35;
 int Destino[35][35];
 int iSeleccion;
 DesplegarImg(img, iSize);
 cout << "Hola usuario porfavor dime que transformacion desea hacer "  << endl;
 do
 {
 cout << endl << "1) Rotar la imagen a la derecha " << endl << "2) Rotar la imagen a la izquierda" << endl << "3) Hacer un Flip horizontal " << endl << "4) Hacer un Flip vertical" << endl << "5) Imagen en Negativo (invertir los colores)" << endl << "6) Mirror horizontal" << endl << "7) Mirror vertical" << endl <<  "*****Porfavor presiona 0 si quieres terminar el programa**** " << endl << endl;
 cin >> iSeleccion;
 switch(iSeleccion)
 {
     case 1: RotarDerecha(img, Destino, iSize); break;
     case 2: RotarIzquierda(img, Destino, iSize); break;
     case 3: FlipHorizontal(img,Destino,iSize); break;
     case 4: FlipVertical(img,Destino,iSize); break;
     case 5: ImagenNegativa(img,Destino,iSize); break;
     case 6: MirrorHorizontal(img,Destino,iSize); break;
     case 7: MirrorVertical(img,Destino,iSize); break;
 }
 }while(iSeleccion != 0);
 return 0;
}
