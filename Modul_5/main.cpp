
#include "SingleLinkedList.h"
#include <iostream>
using namespace std;

int main() {
    List L;
    ElmList* P;
    int total = 0;

    // Membuat list kosong
    CreateList(L);

    // Memasukkan elemen ke dalam list
    insertFirst(L, 2);
    insertFirst(L, 0);
    insertFirst(L, 8);
    insertFirst(L, 12);
    insertFirst(L, 9);

    // Menghitung total info seluruh elemen
    P = L.First;

    while (P != nullptr) {
        total += P->info;
        P = P->next;
    }

    cout << "Total info dari kelima elemen adalah "
         << total << endl;

    return 0;
}