#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Hasta que numero quieres contar?: ";
    cin >> x;
    cout << endl;
    int i = 0;
    string s = "---";
    while (i<=x) {
        cout << "    "<< i << endl;
        cout << s << "^^^" << s << endl;
        i++; 
    }
    cout << "Termino" << endl;
    cout << "----------------------\n";
    int a = -x;
    for (x+1; x>=a; x--){
        int n = x*x;
        cout << n << endl;
    }
    cout << "----------------------\n";
    string st; 
    cout << "Mete una palabra: ";
    cin >>st;
    int j = 0;
    for (char c : st){
        cout << "Letra #" << j << " es " << c << endl;
        j++;
    }
    cout << st << " tiene " << j << " letras" << endl;
}   