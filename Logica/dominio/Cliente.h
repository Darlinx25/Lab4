//
// Created by kevin on 24/6/2025.
//

#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include "Usuario.h"
#include "DTDomicilio.h"
using namespace std;
class Cliente:public Usuario {
    private:
        DTDomicilio * direccion;
    public:
    Cliente(string nick, string pass, DTFecha * fechaNac, DTDomicilio * dominac);
    ~Cliente();
    DTUsuario * getDT();
};
#endif //CLIENTE_H
