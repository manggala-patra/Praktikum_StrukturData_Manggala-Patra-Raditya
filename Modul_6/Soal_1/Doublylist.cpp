#include "Doublylist.h"
void CreateList(list &L) {
L.first = nullptr;
L.last = nullptr;
}
address alokasi(infotype x) {
address P = new elmlist;
P->info = x;
P->next = nullptr;
P->prev = nullptr;
return P;
}
void dealokasi(address &P) {
if (P != nullptr) {
delete P;
P = nullptr;

}
}
void printInfo(list L) {
address P = L.last;
while (P != nullptr) {
cout << "no polisi : " << P->info.nopol << endl;
cout << "warna : " << P->info.warna << endl;
cout << "tahun : " << P->info.thnBuat << endl;
P = P->prev;
}
}
void insertLast(list &L, address P) {
if (L.first == nullptr) {
L.first = P;
L.last = P;
} else {
P->prev = L.last;
L.last->next = P;
L.last = P;
}
}
