//
// Created by kevin on 24/6/2025.
//

#ifndef VENDEDOR_H
#define VENDEDOR_H
#include <iostream>
#include "Usuario.h"
#include "Producto.h"
#include "../../ICollection/interfaces/IDictionary.h"
using namespace std;
class Vendedor:public Usuario {
private:
    int RUT;
        IDictionary * ListProd;
public:
    Vendedor(string nick, string pass, DTFecha * fechaNac, int RUT);
    ~Vendedor();
    DTUsuario * getDT();
    //void agregarProdcto(DTProducto * p);

};
#endif //VENDEDOR_H
