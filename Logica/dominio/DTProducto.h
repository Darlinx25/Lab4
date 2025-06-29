//
// Created by faxcundo on 6/28/25.
//

#ifndef DTPRODUCTO_H
#define DTPRODUCTO_H
#include <string>
#include "DTVendedor.h"
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



public:
    DTProducto(string codigo,string nombre,float precio,int stock,string descripcion ,bool disponible, string categoria);
    ~DTProducto();
    string getCodigo();
    string getNombre();
    float getPrecio();
    int getStock();
    string getDescripcion();
    bool getDisponible();
    string getCategoria();



};


std::ostream& operator<<(std::ostream& os, DTProducto& u);

#endif //DTPRODUCTO_H
