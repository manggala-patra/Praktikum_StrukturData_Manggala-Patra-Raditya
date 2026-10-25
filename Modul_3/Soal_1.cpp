
#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string jenisKelamin;
    float uts;
    float uas;
    float tugas;
};

float hitungNilaiAkhir(Mahasiswa m) {
    return 0.3 * m.uts + 0.4 * m.uas + 0.3 * m.tugas;
}

void inputMahasiswa(Mahasiswa m[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;

        cout << "Nama          : ";
        getline(cin >> ws, m[i].nama);

        cout << "NIM           : ";
        cin >> m[i].nim;

        cout << "Jenis Kelamin : ";
        cin >> m[i].jenisKelamin;

        cout << "Nilai UTS     : ";
        cin >> m[i].uts;

        cout << "Nilai UAS     : ";
        cin >> m[i].uas;

        cout << "Nilai Tugas   : ";
        cin >> m[i].tugas;
    }
}

void tampilMahasiswa(Mahasiswa m[], int n) {
    cout << "\n===== DATA MAHASISWA =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama          : " << m[i].nama << endl;
        cout << "NIM           : " << m[i].nim << endl;
        cout << "Jenis Kelamin : " << m[i].jenisKelamin << endl;
        cout << "Nilai UTS     : " << m[i].uts << endl;
        cout << "Nilai UAS     : " << m[i].uas << endl;
        cout << "Nilai Tugas   : " << m[i].tugas << endl;
        cout << "Nilai Akhir   : "
             << hitungNilaiAkhir(m[i]) << endl;
    }
}

int main() {
    Mahasiswa mhs[10];
    int n;

    cout << "Jumlah mahasiswa (maksimal 10): ";
    cin >> n;

    if (n < 1 || n > 10) {
        cout << "Jumlah mahasiswa tidak valid!" << endl;
        return 0;
    }

    inputMahasiswa(mhs, n);
    tampilMahasiswa(mhs, n);

    return 0;
}