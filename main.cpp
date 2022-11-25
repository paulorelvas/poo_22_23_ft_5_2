#include <iostream>
#include "ABC.h"

using namespace std;
// ----------------BEGIN:: alinea b) ----------------------------------
void gastaMem() {
    ABC temp("Texto temporário que ocupa espaço");
    // Etc. Tanto faz.
}
// -----END:: alinea b) -------

// ----------------BEGIN:: alinea c) ----------------------------------
void func(ABC x) {
    // tanto faz
    cout << endl << "func..." << endl;
}
void func() {
    ABC a("aaa");
    ABC b("bbb");
    a = b;
}
// -----END:: alinea c) -------

int main() {
    cout << "----- FT_5_2 ------" << endl;

    cout << "----- alínea a) ------" << endl;
    // composição ou agregação?   ----> composição

    // cout << "----- alínea b) ------" << endl;
    /*
    for (unsigned int i=0; i<100000000; i++)
        gastaMem();
    cout << "o programa ja deve terminado por falta de memória " << endl;
    */

    cout << "----- alínea c) ------" << endl;
    ABC y("ola");
    func(y);
    cout << y.getConteudo(); // se não rebentar experimentar outra func(y)
    cout << endl << "o programa já deve ter rebentado";
    func();
    cout << endl << "o programa já deve ter rebentado novamente";

    return 0;
}
