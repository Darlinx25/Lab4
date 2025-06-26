#include "DTVendedor.h"


DTVendedor::DTVendedor(string nick, DTFecha* fechaNac, int RUT)
{
    this->setnickDT(nick);
    this->setFechaNacDT(fechaNac);
    this->RUT=RUT;

}
DTVendedor::~DTVendedor()
{

}

int DTVendedor::getRUT(){
    return this->RUT;
}
