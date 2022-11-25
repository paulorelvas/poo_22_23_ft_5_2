
#include "ABC.h"

// método auxiliar invocado na construção e na afetação/atribuição
void ABC::init_copy(const char *s, int n){
    p = new char[n]; // alocar memória
    if(p!= NULL){
        for(size_t i = 0; i < n; i++)
            p[i] = s[i];
    }
}

ABC::ABC(char * s) {
    //cout << endl << "construtor: " << s << endl;
    p = new char[strlen(s)+1];
    strcpy(p,s);
}

ABC::ABC(const ABC & obj){
    // construtor por cópia
    init_copy(obj.p, strlen(obj.p)+1);
}

ABC::~ABC(){
    // cout << endl << "Destrutor: " << p << endl;
    delete[] p;
}

const char* ABC::getConteudo() const { return p; }

void ABC::operator=(const ABC &a){
    // teste de auto-atribuição::prevenção contra o caso de a = a
    if(this != &a){
        // libertar a memória dinâmica exclusivamente pelo primeiro membro
        delete[]p;
        p = NULL;
        init_copy(a.p, strlen(a.p)+1);
    }
}