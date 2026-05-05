#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printAll();

    //pembuatan static function
    static void setNIm(int pnim){
        nim = pnim;
    };

    static int getNim(){
        return nim;
    }

    mahasiswa(string pnama) :nama(pnama){
        setID();
    };
};

int mahasiswa::nim = 0;

//pendefinisial prosedur-prosedure outside class
void mahasiswa::setID(){
    id = ++nim;
}

void mahasiswa::printAll(){
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main(){
    //pembuatan object and pemberian nilai
    mahasiswa mhs1("Dadi Kecap");
    mahasiswa mhs2("Pempek Palembang");

    //memberi nilai pada setNim() untuk merubah nilai NIM
    mahasiswa::setNIm(9);
    mahasiswa mhs3("Andi Icikiwir");
    mahasiswa mhs4("Joko MakLor");
}