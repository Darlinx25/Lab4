//
// Created by kevin on 29/6/2025.
//

#ifndef REQUIERE_H
#define REQUIERE_H

#include "DTRequiere.h"

class Requiere {
    private:
    int cantMinParaOferta;
    float descuento;
    public:
    Requiere(int cantMinParaOferta, float descuento);
    DTRequiere* getDT();
};

#endif //REQUIERE_H
