#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int nilai[100];
    int jumlah = 0;

    for (int i = 0; i < N; i++) {
        cin >> nilai[i];
        jumlah += nilai[i];
    }

    int rata = jumlah / N;
    int diAtas = 0;

    for (int i = 0; i < N; i++) {
        if (nilai[i] > rata) {
            diAtas++;
        }
    }

    cout << "Rata-rata: " << rata << endl;
    cout << "Di atas rata-rata: " << diAtas << endl;

    return 0;
}