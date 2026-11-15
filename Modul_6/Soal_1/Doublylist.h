#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H
#include <iostream>
#include <string>
using namespace std;
struct kendaraan {
string nopol;
string warna;
int thnBuat;
};
typedef kendaraan infotype;
typedef struct elmlist *address;
struct elmlist {
infotype info;
address next;
address prev;
};
struct list {
address first;
address last;
};
void CreateList(list &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(list L);
void insertLast(list &L, address P);
#endif
