#include "DTVendedor.h"


DTVendedor::DTVendedor(string nick, DTFecha* fechaNac, int RUT)
{
    this->setnickDT(nick);
    this->setFechaNacDT(fechaNac);
    this->RUT=RUT;

}