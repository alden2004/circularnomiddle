#include <iostream>
#include <string>
using namespace std;

const int maximal = 5;
string arrayBuku[maximal];
int top = 0;

bool isFull() {
    if (top == maximal) {
        return true;
    } else {
        return false;
    }
}

bool isEmpty() {
    if (top == 0) {
        return true;
    } else {
        return false;
    }
}

void pushArray(string data) {
    if (isFull()) {
        cout << "Data Penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArray() {
    if (isEmpty()) {
        cout << "Data kosong !!" << endl;
    } else {
        top--;
        arrayBuku[top] = ""; // Clear the last element
    }
}

void displayArray() {
    cout << "Data stack array: " << endl;
    for (int i = top - 1; i >= 0; i--) {
        cout << "Data: " << arrayBuku[i] << endl;
    }
    cout << "\n";
}

void peekArray(int posisi) {
    if (isEmpty()) {
        cout << "Data kosong!!" << endl;
    } else if (posisi >= 0 && posisi < top) {
        cout << "Data pada posisi " << posisi << ": " << arrayBuku[posisi] << endl;
    } else {
        cout << "Posisi tidak valid" << endl;
    }
}

int main() {
    pushArray("Matematika");
    displayArray();
    pushArray("Web Programming");
    pushArray("Pemrograman Berbasis Objek");
    pushArray("Sistem Operasi");
    pushArray("Struktur Data");
    displayArray();

    pushArray("Basis Data");
    displayArray();

    popArray();
    displayArray();

    cout << "Apakah data full? : " << (isFull() ? "Ya" : "Tidak") << endl;
    cout << "Apakah data kosong? : " << (isEmpty() ? "Ya" : "Tidak") << endl;

    return 0;
}
