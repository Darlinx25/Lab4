//
// Created by faxcundo on 6/28/25.
//

#include "DTProducto.h"

DTProducto::DTProducto(string codigo,string nombre,float precio,int stock,string descripcion ,bool disponible, string categoria)
{
    this->codigo = codigo;
    this->nombre = nombre;
    this->precio = precio;
    this->stock = stock;
    this->descripcion = descripcion;
    this->disponible = disponible;
    this->categoria = categoria;


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

string DTProducto::getDescripcion()
{
    return this->descripcion;
}
string DTProducto::getCategoria() {
    return this->categoria;
}

ostream& operator<<(std::ostream& os, DTProducto& u) {
    os << "codigo: " << u.getCodigo() << "\n"
       << "nombre: " << u.getNombre() << "\n"
       << "precio: " << u.getPrecio() << "\n"
       << "stock: " << u.getStock() << "\n"
       << "Descripcion: " << u.getDescripcion() << "\n"
       << "Disponible: " << (u.getDisponible() ? "Sí" : "No") << "\n"
       << "Categoria: " << u.getCategoria();
    return os;
}