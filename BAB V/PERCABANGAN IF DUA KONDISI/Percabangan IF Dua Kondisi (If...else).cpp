#include <iostream>
using namespace std;

int main()
{
    cout<< "================================== " << endl;
    cout<< "        Luthfi Hilman Al Farizi    " << endl;
    cout<< "            A2.1900099             " << endl;
    cout<< "===================================" << endl;
    cout<< endl;
    cout<< "KELULUSAN SISWA"<<endl;

    double Nilai_Ujian;
    cout << "Masukan Nilai Ujian : ";
    cin >> Nilai_Ujian;
    cout << endl;

    if (Nilai_Ujian >= 60)
    {
        cout << ("Hasil Ujian = LULUS");
        cout << endl << endl;
    }else{
        cout << ("Hasil Ujian = TIDAK LULUS");
        cout << endl << endl;
    }

    return 0;
}
