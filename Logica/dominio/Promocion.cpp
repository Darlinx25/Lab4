//
// Created by Chorizo-Cosmico on 28/06/2025.
//

#include "DTPromocion.h"
#include "Promocion.h"
#include "iostream"

Promocion::Promocion(string nombre, int codigo, bool vigente) {

    this->nombre = nombre;
    this->codigo = codigo;
    this->vigente = vigente;

}

Promocion::~Promocion() {


}

string Promocion::getNombre() {

    return this->nombre;

}

int Promocion::getCodigo() {

    return this->codigo;

}

bool Promocion::getVigente() {

    return this->vigente;

}

void Promocion::setNombre(string nombre) {

    this->nombre = nombre;

}

void Promocion::setCodigo(int codigo) {

    this->codigo = codigo;

}

void Promocion::setVigente(bool vigente) {

    this->vigente = vigente;

}


DTPromocion * Promocion::getDT() {

    return new DTPromocion(this->nombre, this->codigo, this->vigente);

}