#include <iostream>
#include <string>
using namespace std;

struct Node {
    string nama;
    Node* next;
};

Node* head = nullptr;

void insertLast(string nama) {
    Node* baru = new Node;
    baru->nama = nama;
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

void tampilkanAntrean() {
    cout << "Antrean: ";

    if (head == nullptr) {
        cout << "Kosong";
    } else {
        Node* bantu = head;
        while (bantu != nullptr) {
            cout << bantu->nama;
            if (bantu->next != nullptr) {
                cout << " -> ";
            }
            bantu = bantu->next;
        }
    }

    cout << endl;
}

void deleteFirst() {
    if (head == nullptr) {
        cout << "Antrean kosong, tidak ada nasabah yang dilayani."
             << endl;
        return;
    }

    Node* hapus = head;
    cout << "Melayani: " << hapus->nama << endl;
    head = head->next;
    delete hapus;

    tampilkanAntrean();
}

void hapusSemua() {
    while (head != nullptr) {
        Node* hapus = head;
        head = head->next;
        delete hapus;
    }
}

int main() {
    int pilihan;
    string nama;

    do {
        cout << "\n=== SISTEM ANTREAN NASABAH BANK ===" << endl;
        cout << "1. Tambah nasabah" << endl;
        cout << "2. Layani nasabah" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore(10000, '\n');

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama nasabah: ";
                getline(cin, nama);

                if (nama.empty()) {
                    cout << "Nama tidak boleh kosong." << endl;
                    break;
                }

                insertLast(nama);
                tampilkanAntrean();
                break;

            case 2:
                deleteFirst();
                break;

            case 3:
                cout << "Program selesai." << endl;
                break;

            default:
                cout << "Pilihan tidak valid." << endl;
        }

    } while (pilihan != 3);

    hapusSemua();
    return 0;
}