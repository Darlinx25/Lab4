//
// Created by Chorizo-Cosmico on 29/06/2025.
//

#include "DTRequiere.h"

DTRequiere::DTRequiere(int cantMinParaOferta, float descuento) {
    this->cantMinParaOferta = cantMinParaOferta;
    this->descuento = descuento;
}

DTRequiere::~DTRequiere() {

}

int DTRequiere::getCantMin() {
    return this->cantMinParaOferta;
}

float DTRequiere::getDescuento() {
    return this->descuento;
}