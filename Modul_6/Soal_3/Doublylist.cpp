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
cout << "Nomor Polisi : " << P->info.nopol << endl;
cout << "Warna : " << P->info.warna << endl;
cout << "Tahun : " << P->info.thnBuat << endl;
P = P->prev;
}
}
void insertLast(list &L, address P) {
if (P == nullptr) return;
P->next = nullptr;
P->prev = L.last;
if (L.first == nullptr) {
L.first = P;
L.last = P;
} else {
L.last->next = P;
L.last = P;
}
}
address findElm(list L, infotype x) {
address P = L.first;
while (P != nullptr) {
if (P->info.nopol == x.nopol) {
return P;
}
P = P->next;
}
return nullptr;
}
void deleteFirst(list &L, address &P) {
if (L.first == nullptr) {
P = nullptr;
return;
}

P = L.first;
L.first = P->next;
if (L.first != nullptr) {
L.first->prev = nullptr;
} else {
L.last = nullptr;
}
P->next = nullptr;
P->prev = nullptr;
}
void deleteLast(list &L, address &P) {
if (L.last == nullptr) {
P = nullptr;
return;
}
P = L.last;
L.last = P->prev;
if (L.last != nullptr) {
L.last->next = nullptr;
} else {
L.first = nullptr;
}
P->next = nullptr;
P->prev = nullptr;
}
void deleteAfter(address Prec, address &P) {
if (Prec == nullptr || Prec->next == nullptr) {
P = nullptr;
return;
}
P = Prec->next;
Prec->next = P->next;
if (P->next != nullptr) {
P->next->prev = Prec;
}
P->next = nullptr;
P->prev = nullptr;
}
