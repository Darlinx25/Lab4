//
// Created by kevin on 29/6/2025.
//

#include "Requiere.h"

DTRequiere* Requiere::getDT() {
    return new DTRequiere(this->descuento, this->cantMinParaOferta);
}