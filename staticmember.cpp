#include <iostream>
using namespace std;

class mahasiswa {   //make a class

public:
    static int nim; //deklarasi variabel static "nim"
    int id;
    string nama;

    //deklarasi prosedur setID dan printAll
    void setID();
    void printAll();

    //making constructor Mahasiswa dgn parameter pnama
    mahasiswa(string pnama) :nama(pnama){
        setID();
    }
}