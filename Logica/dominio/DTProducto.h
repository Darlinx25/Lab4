//
// Created by faxcundo on 6/28/25.
//

#ifndef DTPRODUCTO_H
#define DTPRODUCTO_H
#include <string>
#include "DTVendedor.h"
using namespace std;
enum Categoria {ropa=1, electrodomesticos=2,otros=3};
class DTProducto {
private:
    string codigo;
    string nombre;
    float precio;
    int stock;
    string descripcion;
    bool disponible;
    Categoria categoria;


public:
    DTProducto(string,string,float,int,string,bool,Categoria);
    ~DTProducto();
    string getCodigo();
    string getNombre();
    float getPrecio();
    int getStock();
    string getDescripcion();
    bool getDisponible();
    Categoria getCategoria();



};


//DTProducto * x = new DTProducto(1,"EZEQUIEL",20,1,"PESADO PERDIDO",true,ropa);

#endif //DTPRODUCTO_H
