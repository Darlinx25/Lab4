#include <iostream>
#include "Vendedor.h"

#include "DTVendedor.h"
using namespace std;

Vendedor::Vendedor(string nick, string pass, DTFecha * fechaNac, int RUT) {
    this->nick=nick;
    this->pass=pass;
    this->fechaNac=fechaNac;
    this->RUT=RUT;

}

Vendedor::~Vendedor() {

}

DTUsuario * Vendedor::getDT()
{
    return new DTVendedor(this->nick,this->fechaNac,this->RUT);


}