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
};

//memberi value ke variabel nim dari class mahasiswa
int mahasiswa::nim = 10;

//mengimplementasikan prosedur-prosedur di luar class
void mahasiswa::setID(){
    id = ++nim;
};

void mahasiswa::printAll(){
    cout << "ID : " << id << endl;
    cout << "Nama : " << nama << endl;
    cout << endl;
};

int main(){
    //make an object and memberi nilai
    mahasiswa mhs1("Lia Cmiw");
    mahasiswa mhs2("Fawwaz Gocap");
    mahasiswa mhs3("Andi Ceban");
    mahasiswa mhs4("Satya Indomie");

    //memanggil prosedur printAll()
    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    return 0;
}