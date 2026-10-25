#include <iostream>
#include <string>
using namespace std;

int main() {
    string kata;
    char karakter;
    int jumlah = 0;

    getline(cin, kata);
    cin >> karakter;

    for (int i = 0; i < kata.length(); i++) {
        if (kata[i] == karakter) {
            jumlah++;
        }
    }

    cout << jumlah << endl;

    return 0;
}