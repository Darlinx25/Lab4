//
// Created by kevin on 24/6/2025.
//

#ifndef VENDEDOR_H
#define VENDEDOR_H
#include <iostream>
#include "Usuario.h"
#include "Producto.h"
#include "Promocion.h"
#include "../../ICollection/interfaces/IDictionary.h"
using namespace std;
class Producto;
class Vendedor:public Usuario {
private:
    int RUT;
    IDictionary * ListProd;
    IDictionary * ListPromo;

public:
    Vendedor(string nick, string pass, DTFecha * fechaNac, int RUT);
    ~Vendedor();
    DTUsuario * getDT();
    void agregarProducto(Producto * p);
    void agregarPromocion(Promocion * pro);
    void mostrarProductos();
    /*set<DTProducto*> obtenerProductosdeVendedor();*/

};
#endif //VENDEDOR_H
