//
// Created by kevin on 24/6/2025.
//

#ifndef DTDOMICILIO_H
#define DTDOMICILIO_H
#include <iostream>
using namespace std;
class DTDomicilio {
    private:
        string direccion;
        string ciudadResidencia;
    public:
    DTDomicilio();
    DTDomicilio(string ciudadResidencia, string direccion);
    ~DTDomicilio();
    string getCiudadResidencia();
    string getDireccion();
};
#endif //DTDOMICILIO_H
