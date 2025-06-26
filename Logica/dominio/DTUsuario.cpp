#include "DTUsuario.h"
#include "DTCliente.h"
#include "DTVendedor.h"
DTUsuario::DTUsuario()
{

}
DTUsuario::~DTUsuario()
{

}


void DTUsuario::setnickDT(string nickDT)
{

    this->nickDT = nickDT;
}

void DTUsuario::setFechaNacDT(DTFecha * fechanacDT)
{
    this->fechanacDT = fechanacDT;

}

string DTUsuario::getNickDT(){
    return this->nickDT;
}

DTFecha* DTUsuario::getFechaNacDT(){
    return this->fechanacDT;
}

ostream& operator<<(std::ostream& os, DTUsuario& u) {
    cout<<endl;
    if (DTCliente* c = dynamic_cast<DTCliente*>(&u)) {
        os << "Cliente - Nick: " << c->getNickDT()
           << ", Ciudad: " << c->getDomicilio()->getCiudadResidencia()
           << ", Dirección: " << c->getDomicilio()->getDireccion();
    } else if (DTVendedor* v = dynamic_cast<DTVendedor*>(&u)) {
        os << "Vendedor - Nick: " << v->getNickDT()
           << ", RUT: " << v->getRUT();
    } else {
        os << "Usuario - Nick: " << u.getNickDT();
    }
    return os;
}