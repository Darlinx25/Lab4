//
// Created by faxcundo on 6/28/25.
//

#ifndef DTPRODUCTO_H
#define DTPRODUCTO_H
#include <string>
#include "DTCategoria.h"
using namespace std;
enum Categoria {ropa=1, electrodomesticos=2,otros=3};
class DTProducto {
private:
    int codigo;
    string nombre;
    float precio;
    int stock;
    string descripcion;
    bool Disponible;
    Categoria categoria;

public:
    DTProducto(int,string,float,int,string,bool,Categoria);

};


//DTProducto * x = new DTProducto(1,"EZEQUIEL",20,1,"PESADO PERDIDO",true,ropa);

#endif //DTPRODUCTO_H
