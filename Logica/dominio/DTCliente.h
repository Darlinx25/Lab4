#ifndef DTCLIENTE_H
#define DTCLIENTE_H

#include "DTDomicilio.h"
#include "DTUsuario.h"

class DTCliente : public DTUsuario {
private:
    DTDomicilio * domicilio_;

public:
    DTCliente(string nick, DTFecha* fechaNac, DTDomicilio * domicilio);
    ~DTCliente();
    DTDomicilio* getDomicilio();


};

#endif
