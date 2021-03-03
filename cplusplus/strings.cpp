#include <iostream>

using namespace std;

int main()
{
    string nombre = "Javier del Valle";
    cout << nombre.find("av") << endl;
    string sub = nombre.substr(2,7);
    cout << sub;
}