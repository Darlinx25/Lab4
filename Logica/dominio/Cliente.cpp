#include <iostream>
#include "Cliente.h"
using namespace std;

Cliente::Cliente(string nick, string pass, DTFecha * fechaNac, DTDomicilio * dominac, string ciudad ) {
    this->setnick(nick);
    this->setpass(pass);
    this->setFechaNac(fechaNac);
    this->direccion=dominac;
    this->ciudad=ciudad;
    this->intentosError = 0;

}
Cliente::~Cliente() {

}
