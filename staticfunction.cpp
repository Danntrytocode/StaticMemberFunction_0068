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