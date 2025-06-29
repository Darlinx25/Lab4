//
// Created by faxcundo on 6/28/25.
//

#ifndef DTPRODUCTO_H
#define DTPRODUCTO_H
#include <string>
#include "DTVendedor.h"
#include "Vendedor.h"
using namespace std;
class DTProducto {
private:
    string codigo;
    string nombre;
    float precio;
    int stock;
    string descripcion;
    bool disponible;
    string categoria;
    DTUsuario * vendedor;



public:
    DTProducto(string codigo,string nombre,float precio,int stock,string descripcion ,bool disponible, string categoria, Usuario * v);
    ~DTProducto();
    string getCodigo();
    string getNombre();
    float getPrecio();
    int getStock();
    string getDescripcion();
    bool getDisponible();
    string getCategoria();
    string nombreVendedor();



};


std::ostream& operator<<(std::ostream& os, DTProducto& u);

#endif //DTPRODUCTO_H
