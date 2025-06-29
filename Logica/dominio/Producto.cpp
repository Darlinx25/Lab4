//
// Created by kevin on 28/6/2025.
//

#include "Producto.h"


Producto::Producto(string codigo,string nombre,float precio,int stock,string descripcion ,bool disponible , string categoria, Usuario * v)
{
    this->codigo = codigo;
    this->nombre = nombre;
    this->precio = precio;
    this->stock = stock;
    this->descripcion = descripcion;
    this->disponible = disponible;
    this->vendedor = v;
    this->categoria = categoria;

}
Producto::~Producto()
{

}
DTProducto * Producto::getDT()
{
    return new DTProducto( this->codigo, this->nombre, this->precio, this->stock, this->descripcion,this->disponible, this->categoria, this->vendedor);
}

string Producto::getCodigo()
{

    return this->codigo;
}

string Producto::getCategoria() {
    return this->categoria;
}