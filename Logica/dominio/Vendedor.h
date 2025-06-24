//
// Created by kevin on 24/6/2025.
//

#ifndef VENDEDOR_H
#define VENDEDOR_H
#include <iostream>
#include "Usuario.h"
using namespace std;
class Vendedor:public Usuario {
    private:
        int RUT;
        //HACER PUNTERO A PRODUCTOS
    public:
        Vendedor(string nick, string pass, DTFecha * fechaNac, int RUT);
        ~Vendedor();
};
#endif //VENDEDOR_H
