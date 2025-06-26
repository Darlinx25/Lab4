//
// Created by faxcundo on 6/25/25.
//

#include "DTCliente.h"
#include "DTFecha.h"
#include "DTDomicilio.h"

DTCliente::DTCliente(string nick, DTFecha* fechaNac, DTDomicilio* domicilio)
{
    this->setnickDT(nick);
    this->setFechaNacDT(fechaNac);
    this->domicilio_=domicilio;
}

DTCliente::~DTCliente()
{

}

DTDomicilio* DTCliente::getDomicilio(){
    return this->domicilio_;
}
