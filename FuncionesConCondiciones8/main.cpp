// Andres Aguirre Gonzalez A01039656


#include <iostream>

using namespace std;


bool OrderFunction(int Number1, int Number2, int Number3)
{
     bool Order;
    if(Number1 < Number2 && Number2 < Number3)
    {
       Order = true;
    }
    else
    {
        Order = false;
    }
    return Order;
}

int main()
{
    int Number1, Number2, Number3;
    bool bOrder;

    cout << "Please tell me a number" << endl;
    cin >> Number1;
    cout << "Please tell me another number" << endl;
    cin >> Number2;
    cout << "Please tell me another number" << endl;
    cin >> Number3;
    bOrder = OrderFunction(Number1,Number2,Number3);
    if(bOrder == true)
    {
        cout << "The numbers " << Number1 << ", " << Number2 << ", " << Number3 << " are in order";
    }
    else
    {
        cout << "The numbers you wrote arent in order";

    }


    return 0;
}
