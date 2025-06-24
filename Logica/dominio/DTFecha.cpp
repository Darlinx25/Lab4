#include <iostream>
#include "DTFecha.h"
using namespace std;

DTFecha::~DTFecha() {

}
DTFecha::DTFecha(int dia, int mes, int anio) {
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

int DTFecha::getDia() {
    return dia;
}
int DTFecha::getMes() {
    return mes;
}
int DTFecha::getAnio() {
    return anio;
}