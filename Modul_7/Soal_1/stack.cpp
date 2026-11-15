
#include <iostream>
#include "stack.h"

using namespace std;

void createStack(Stack &S) {
    S.top = 0;
}

void push(Stack &S, infotype x) {
    if (S.top < 20) {
        S.info[S.top] = x;
        S.top++;
    } else {
        cout << "Stack penuh!" << endl;
    }
}

infotype pop(Stack &S) {
    if (S.top > 0) {
        S.top--;
        return S.info[S.top];
    }

    cout << "Stack kosong!" << endl;
    return -1;
}

void printInfo(Stack S) {
    if (S.top == 0) {
        cout << "Stack kosong!" << endl;
        return;
    }

    for (int i = S.top - 1; i >= 0; i--) {
        cout << S.info[i] << " ";
    }

    cout << endl;
}

void balikStack(Stack &S) {
    int kiri = 0;
    int kanan = S.top - 1;

    while (kiri < kanan) {
        int temp = S.info[kiri];
        S.info[kiri] = S.info[kanan];
        S.info[kanan] = temp;

        kiri++;
        kanan--;
    }
}
