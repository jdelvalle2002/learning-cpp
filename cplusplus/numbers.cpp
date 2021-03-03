#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << (40 + 3)%10 << endl;
    double dnum = 5.54;
    dnum ++;
    //cout << dnum << endl;
    dnum /= 10;
    //cout << dnum << endl;
    cout << pow(2.442, 5) << endl;
    cout << round(pow(2.442, 5)) << endl;
    cout << floor(pow(2.442, 5)) << endl;
    double a = round(pow(2.442, 5));
    double b = pow(2.442, 5);
    cout << fmax(a, b) << " ### " << fmin(a, b);

    return 0;

}