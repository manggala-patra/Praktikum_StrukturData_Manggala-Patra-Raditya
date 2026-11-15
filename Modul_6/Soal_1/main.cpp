#include "Doublylist.h"
int main() {
list L;
infotype x;
address P, Q;
CreateList(L);
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
cout << "DATA LIST 1" << endl << endl;
printInfo(L);

return 0;
}
