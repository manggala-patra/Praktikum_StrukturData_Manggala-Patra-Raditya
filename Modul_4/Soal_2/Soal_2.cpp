#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insertLast(int nilai) {
    Node* baru = new Node;
    baru->data = nilai;
    baru->next = nullptr;

    if (head == nullptr) {
        head = baru;
    } else {
        Node* bantu = head;
        while (bantu->next != nullptr) {
            bantu = bantu->next;
        }
        bantu->next = baru;
    }
}

void insertAfter(int dicari, int nilaiBaru) {
    Node* bantu = head;

    while (bantu != nullptr && bantu->data != dicari) {
        bantu = bantu->next;
    }

    if (bantu != nullptr) {
        Node* baru = new Node;
        baru->data = nilaiBaru;
        baru->next = bantu->next;
        bantu->next = baru;
    }
}

void tampilkanList() {
    Node* bantu = head;

    while (bantu != nullptr) {
        cout << bantu->data;
        if (bantu->next != nullptr) {
            cout << " -> ";
        }
        bantu = bantu->next;
    }

    cout << endl;
}

void hapusSemua() {
    while (head != nullptr) {
        Node* hapus = head;
        head = head->next;
        delete hapus;
    }
}

int main() {
    int N, nilai, dicari, nilaiBaru;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> nilai;
        insertLast(nilai);
    }

    cin >> dicari;
    cin >> nilaiBaru;

    insertAfter(dicari, nilaiBaru);
    tampilkanList();

    hapusSemua();

    return 0;
}