#include "Doublylist.h"
int main() {
list L;
infotype x;
address P, Q;
CreateList(L);
// Memasukkan 4 data kendaraan
for (int i = 0; i < 4; i++) {
cout << "masukkan nomor polisi: ";
cin >> x.nopol;
cout << "masukkan warna kendaraan: ";
cin >> x.warna;

cout << "masukkan tahun kendaraan: ";
cin >> x.thnBuat;
Q = L.first;
bool ada = false;
while (Q != nullptr) {
if (Q->info.nopol == x.nopol) {
ada = true;
break;
}
Q = Q->next;
}
if (ada) {
cout << "nomor polisi sudah terdaftar" << endl;
cout << endl;
} else {
P = alokasi(x);
insertLast(L, P);
cout << endl;
}
}
// Menampilkan data sebelum penghapusan
cout << "DATA LIST 1" << endl << endl;
printInfo(L);
// Mencari kendaraan yang akan dihapus
cout << "\nMasukkan Nomor Polisi yang akan dihapus : ";
cin >> x.nopol;
P = findElm(L, x);
if (P == nullptr) {
cout << "Data kendaraan tidak ditemukan." << endl;
} else {
// Menghapus elemen sesuai posisinya
if (P == L.first) {
deleteFirst(L, Q);
} else if (P == L.last) {
deleteLast(L, Q);
} else {
deleteAfter(P->prev, Q);
}
// Membebaskan memori elemen yang dihapus
if (Q != nullptr) {

dealokasi(Q);
cout << "Data kendaraan "
<< x.nopol
<< " berhasil dihapus." << endl;
}
}
// Menampilkan data setelah penghapusan
cout << "\nDATA LIST 1 SETELAH PENGHAPUSAN"
<< endl << endl;
printInfo(L);
return 0;
}
