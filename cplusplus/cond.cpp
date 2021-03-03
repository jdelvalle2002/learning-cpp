#include <iostream>

using namespace std;

int main()
{
    float x;
    cout << "Ingresa tu número: ";
    cin >> x;
    cout << endl;
    if (x>0)
        cout << "tu número es positivo\n";
    else if (x<0)
        cout << "tu número es negativo\n";
    else
        cout << "por qué escogiste 0???\n";        
    cout << "Escogiste: " << x << endl;
    

}    