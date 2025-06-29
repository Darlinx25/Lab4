//
// Created by kevin on 28/6/2025.
//

#include "Producto.h"


Producto::Producto(string codigo,string nombre,float precio,int stock,string descripcion ,bool disponible ,Categoria cat,Usuario* v)
{
    this->codigo = codigo;
    this->nombre = nombre;
    this->precio = precio;
    this->stock = stock;
    this->descripcion = descripcion;
    this->disponible = disponible;
    this->categoria = cat;
    this->vendedor = v;

}
Producto::~Producto()
{

}
DTProducto * Producto::getDT()
{
    return new DTProducto( this->codigo, this->nombre, this->precio, this->stock, this->descripcion,this->disponible,this->categoria);
}

string Producto::getCodigo()
{

    return this->codigo;
}