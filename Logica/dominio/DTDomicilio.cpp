#include <iostream>
#include "DTDomicilio.h"
using namespace std;

DTDomicilio::DTDomicilio(string Residencia, string direc) {
    this->ciudadResidencia = Residencia;
    this->direccion = direc;
}


DTDomicilio::~DTDomicilio() {

}

string DTDomicilio::getCiudadResidencia() {
    return this->ciudadResidencia;
}

string DTDomicilio::getDireccion() {
    return this->direccion;
}




