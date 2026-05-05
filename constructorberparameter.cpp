#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
public :
    mahasiswa(int nim, string nama)
};

// Definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama){
    cout << "Contructor Dengan Parameter Terpanggil" << endl;
    cout << "NIM : " << nim << endl;
    cout << "Nama : " << nama << endl;
}

int main(){
    mahasiswa msh(221, "Cumi Hitam Pak Kris");
    return 0;
}