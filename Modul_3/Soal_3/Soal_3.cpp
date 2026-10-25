
#include <iostream>
using namespace std;

void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void tukarElemen(int arr[3][3], int baris1, int kolom1,
                 int baris2, int kolom2) {
    int temp = arr[baris1][kolom1];
    arr[baris1][kolom1] = arr[baris2][kolom2];
    arr[baris2][kolom2] = temp;
}

void tukarPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    cout << "Array A:" << endl;
    tampilArray(A);

    cout << "\nArray B:" << endl;
    tampilArray(B);

    cout << "\nMenukar elemen A[0][0] dengan A[2][2]:" << endl;
    tukarElemen(A, 0, 0, 2, 2);
    tampilArray(A);

    int x = 100;
    int y = 200;

    cout << "\nSebelum pertukaran pointer:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    tukarPointer(&x, &y);

    cout << "Sesudah pertukaran pointer:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}