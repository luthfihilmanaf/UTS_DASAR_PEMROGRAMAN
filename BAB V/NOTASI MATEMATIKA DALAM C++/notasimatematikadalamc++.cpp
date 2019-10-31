#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    cout<< "================================== " << endl;
    cout<< "        Luthfi Hilman Al Farizi    " << endl;
    cout<< "            A2.1900099             " << endl;
    cout<< "===================================" << endl;
    cout<< endl;
    double sudut = 40;
    double kecepatan = 32;

    double radian = sudut * 3.14 / 180;

    double jarak = 2 * kecepatan * kecepatan *
                   sin(radian) * cos(radian) / 9.8;

    cout << "Jarak = " << jarak << endl;

    return 0;
}
