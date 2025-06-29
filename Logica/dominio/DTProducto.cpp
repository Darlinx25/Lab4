//
// Created by faxcundo on 6/28/25.
//

#include "DTProducto.h"

DTProducto::DTProducto(string codigo,string nombre,float precio,int stock,string descripcion ,bool disponible ,Categoria cat)
{
    this->codigo = codigo;
    this->nombre = nombre;
    this->precio = precio;
    this->stock = stock;
    this->descripcion = descripcion;
    this->disponible = disponible;
    this->categoria = cat;


}
DTProducto::~DTProducto()
{

}
string DTProducto::getCodigo()
{
    return this->codigo;
}
string DTProducto::getNombre()
{
    return this->nombre;
}
float DTProducto::getPrecio()
{
    return this->precio;
}
int DTProducto::getStock()
{
    return this->stock;
}
bool DTProducto::getDisponible()
{
    return this->disponible;
}
Categoria DTProducto::getCategoria()
{
    return this->categoria;
}
string DTProducto::getDescripcion()
{
    return this->descripcion;
}