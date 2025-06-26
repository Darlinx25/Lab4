//
// Created by faxcundo on 6/25/25.
//
#ifndef DTVENDEDOR_H
#define DTVENDEDOR_H
#include "DTUsuario.h"

class DTVendedor : public DTUsuario{
private:
    int RUT;
public:
    DTVendedor(string nick, DTFecha* fechaNac, int RUT);
    ~DTVendedor();
    int getRUT();

};

#endif //DTVENDEDOR_H
