#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include "DTCategoria.h"
using namespace std;

class Producto {
private:
    string nombreProd;
    string codigo;
    int precio;
    int stock;
    string descripcion;
    DTCategoria * catergoria;
    bool Disponible;


public:



};



#endif //PRODUCTO_H
