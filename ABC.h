#ifndef FT5_2_ABC_H
#define FT5_2_ABC_H

#include <iostream>
#include <string>
using namespace std;

class ABC {
private:
    char * p;
public:
    ABC(char * s);
    ABC(const ABC & obj); // construtor por cópia
    ~ABC();
    const char * getConteudo() const;

    //ABC &operator=(const ABC &a); //
    void operator=(const ABC &a); // operador atribuição

    void init_copy(const char *s, int n);
};

#endif //FT5_2_ABC_H
