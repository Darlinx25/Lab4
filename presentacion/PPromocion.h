//
// Created by Chorizo-Cosmico on 28/06/2025.
//
#include "ISistema.h"
#ifndef PPROMOCION_H
#define PPROMOCION_H



class PPromocion {

private:
    ISistema * isistema;
public:

    PPromocion(ISistema * isistema);
    virtual ~PPromocion();
    void altaPromocion();

};



#endif //PPROMOCION_H
