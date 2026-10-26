
#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Angka harus dari 0 sampai 100." << endl;
    } else if (angka == 0) {
        cout << "0 : nol" << endl;
    } else if (angka == 100) {
        cout << "100 : seratus" << endl;
    } else {
        string satuan[] = {
            "", "satu", "dua", "tiga", "empat",
            "lima", "enam", "tujuh", "delapan", "sembilan"
        };

        if (angka < 10) {
            cout << angka << " : " << satuan[angka] << endl;
        } else if (angka == 10) {
            cout << angka << " : sepuluh" << endl;
        } else if (angka == 11) {
            cout << angka << " : sebelas" << endl;
        } else if (angka < 20) {
            cout << angka << " : " << satuan[angka % 10]
                 << " belas" << endl;
        } else {
            int puluhan = angka / 10;
            int sisa = angka % 10;

            cout << angka << " : " << satuan[puluhan]
                 << " puluh";

            if (sisa != 0) {
                cout << " " << satuan[sisa];
            }

            cout << endl;
        }
    }

    return 0;
}