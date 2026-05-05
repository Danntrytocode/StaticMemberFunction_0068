#include <iostream>
using namespace std;

class buku{
    string judul;
public:
    buku &setJudul(string judul){
        this->judul = judul;
        return *this;   //CHAIN FUNCTION
    }
    string getJudul(){
        return this->judul;
    }

};

int main(){
    buku bukunya;
    //bukunya.setJudul("Matematika");
    //cout << bukunya.getJudul() << endl;

    //Lebih simpelnya:
    cout << bukunya.setJudul("Dosa Besar Soeharto").getJudul();     //Chain Function Calls
    return 0;
}