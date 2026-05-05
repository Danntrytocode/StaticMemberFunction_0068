#include <iostream>
#include <string>

using namespace std;

class Kendaraan {
private:
    int idKendaraan;     
    string namaKendaraan;

public:
    Kendaraan();              //Tanpa parameter
    Kendaraan(int id);        //Hanya ID
    Kendaraan(string nama);   //Hanya Nama
    Kendaraan(int id, string nama);   //Parameter Lengkap
    
    void tampilkanInfo();
};

// Implementasi Constructor di luar class
Kendaraan::Kendaraan() {
    idKendaraan = 0;
    namaKendaraan = "Belum Ada Nama Nya Cik";
}

Kendaraan::Kendaraan(int id) {
    idKendaraan = id;
    namaKendaraan = "Nama Belum Diinput Nih Bray";
}

Kendaraan::Kendaraan(string nama) {
    idKendaraan = 969; // ID Default jika hanya nama yang diisi
    namaKendaraan = nama;
}

Kendaraan::Kendaraan(int id, string nama) {
    idKendaraan = id;
    namaKendaraan = nama;
}

//Prosedur tampilkan Kars information
void Kendaraan::tampilkanInfo() {
    cout << "ID Kendaraan   : " << idKendaraan << endl;
    cout << "Nama Kendaraan : " << namaKendaraan << endl;
    cout << "--------------Prikitiw--------------" << endl;
}

int main() {
    // Inisialisasi 4 objek sesuai permintaan
    Kendaraan kars1;                         // Default
    Kendaraan kars2(67);                    // Hanya ID (int)
    Kendaraan kars3("Mobil EMBEGEH");         // Hanya Nama (string)
    Kendaraan kars4(505, "Kawasaki H2");     // Lengkap (int, string)

    cout << "=== DATA KENDARAAN CMIW ===" << endl << endl;
    cout << "Kendaraan 1 (Default):" << endl;
    kars1.tampilkanInfo();
    cout << "Kendaraan 2 (Hanya ID):" << endl;
    kars2.tampilkanInfo();
    cout << "Kendaraan 3 (Hanya Nama):" << endl;
    kars3.tampilkanInfo();
    cout << "Kendaraan 4 (Lengkap):" << endl;
    kars4.tampilkanInfo();

    return 0;
}