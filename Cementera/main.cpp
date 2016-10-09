//Andres Aguirre Gonzalez A01039656


#include <iostream>
#include <iomanip>

using namespace std;

double TotalAPagar(double dBultos, double dPrecioInicial, double dDescuento)
{
    double dPrecioTotal;
    dDescuento = dDescuento / 100;
    dDescuento = 1 - dDescuento;
    dPrecioTotal = dBultos * dPrecioInicial;
    dPrecioTotal = dPrecioTotal * dDescuento;
    return dPrecioTotal;

}

void CalcularMisDatos()
{
    cout << endl;
    cout << "****************" << endl;
    cout << "****************" << endl;
    cout << "****************" << endl;
    cout << "Andres Aguirre Gonzalez A01039656";
}

int main()
{
    double dBultos;
    double dPrecioInicial;
    double dDescuento;
    double dPrecioTotal;
    double dSubTotal;
    double dDescuentoPrecio;

    cout << "Hola, Cuantos bultos quiere?" << endl;
    cin >> dBultos;
    cout << "Cuanto cuesta cada bulto?" << endl;
    cin >> dPrecioInicial;
    cout << "Dame el porcentaje de descuento" << endl;
    cin >> dDescuento;
    dSubTotal = dBultos * dPrecioInicial;
    dDescuentoPrecio = (dDescuento / 100) * dSubTotal;
    dPrecioTotal = TotalAPagar(dBultos,dPrecioInicial,dDescuento);
    cout << endl << "Precio por bultos:                 " << "$" << setfill(' ') << setw(15) << fixed << setprecision(2) << dPrecioInicial << endl;
    cout << "Cantidad de Bultos de cemento:      " << dBultos << endl;
    cout << "Subtotal de la venta               " << "$" << setfill(' ') << setw(15) << fixed << setprecision(2) << dSubTotal << endl;
    cout << "-" << dDescuento << "% de descuento               " << "$" << setfill(' ') << setw(15) << fixed << setprecision(2) << dDescuentoPrecio << endl;
    cout << "Total a pagar                      " << "$" << setfill(' ') << setw(15) << fixed << setprecision(2) << dPrecioTotal  << endl;
    CalcularMisDatos();


    return 0;
}
