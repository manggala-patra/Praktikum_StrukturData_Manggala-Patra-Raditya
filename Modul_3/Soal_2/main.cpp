
#include <iostream>
#include "pelajaran.h"
using namespace std;

int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";

    Pelajaran pel1 = create_pelajaran(namapel, kodepel);

    tampil_pelajaran(pel1);

    return 0;
}