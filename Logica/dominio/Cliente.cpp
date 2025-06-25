#include <iostream>
#include "Cliente.h"

#include "DTCliente.h"
using namespace std;

Cliente::Cliente(string nick, string pass, DTFecha * fechaNac, DTDomicilio * dominac) {
    this->setnick(nick);
    this->setpass(pass);
    this->setFechaNac(fechaNac);
    this->direccion=dominac;
    this->intentosError = 0;

}
Cliente::~Cliente() {

}

DTUsuario * Cliente::getDT()
{
    return new DTCliente(this->nick,this->fechaNac,this->direccion);


}
