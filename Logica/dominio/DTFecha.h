//
// Created by kevin on 24/6/2025.
//

#ifndef DTFECHA_H
#define DTFECHA_H
#include <iostream>
using namespace std;
class DTFecha {
private:
    int dia;
    int mes;
    int anio;

public:
    ~DTFecha();
    DTFecha(int dia, int mes, int anio);
    int getDia();
    int getMes();
    int getAnio();
};
#endif //DTFECHA_H
