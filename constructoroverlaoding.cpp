#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
private:
    int nim;
    string nama;
public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string nama);
    mahasiswa(int nim, string nama);
    void cetak();
};