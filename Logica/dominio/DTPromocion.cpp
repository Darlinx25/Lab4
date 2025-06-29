//
// Created by Chorizo-Cosmico on 28/06/2025.
//

#include "DTPromocion.h"

DTPromocion::DTPromocion() {
}

DTPromocion::~DTPromocion() {


}

DTPromocion::DTPromocion(string nombreDT, int codigoDT, bool vigenteDT) {
    this->nombreDT = nombreDT;
    this->codigoDT = codigoDT;
    this->vigenteDT = vigenteDT;
}

void DTPromocion::setNombreDT(string nombreDT) {
    this->nombreDT = nombreDT;
}

void DTPromocion::setCodigoDT(int codigoDT) {
    this->codigoDT = codigoDT;
}

void DTPromocion::setVigenteDT(bool vigenteDT) {
    this->vigenteDT = vigenteDT;
}

string DTPromocion::getNombreDT() {
    return this->nombreDT;
}

int DTPromocion::getCodigoDT() {
    return this->codigoDT;
}

bool DTPromocion::getVigente() {
    return this->vigenteDT;
}

ostream& operator<<(ostream& os, DTPromocion& p) {
    cout<<endl;
    os  << "Promocion - Nombre: " << p.getNombreDT()
        << ", Codigo: " << p.getCodigoDT()
        << ", Vigente: " << p.getVigente();

    return os;

}