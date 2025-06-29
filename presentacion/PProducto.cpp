//
// Created by kevin on 28/6/2025.
//

#include "PProducto.h"
#include "DTVendedor.h"
#include "Producto.h"
#include <limits>



PProducto::PProducto(ISistema * isistema) {
    this->isistema = isistema;
}

PProducto::~PProducto(){}

void PProducto::altaProduto() {
    set<DTUsuario*> vendedor = this->isistema->listarVendedores();
    cout<<"Vendedores disponibles: "<<endl;
    for (DTUsuario* dt : vendedor) {
        cout << *dt << endl;
    }
    cout<<"Ingrese el nick del vendedor"<<endl;
    string nick;
    cin>>nick;
    cout<<"Ingrese los datos del producto"<<endl<<"Codgio: "<<endl;
    string codigo;
    cin>>codigo;
    cout<<"Nombre: "<<endl;
    string nombre;
    cin>>nombre;
    cout<<"Precio: "<<endl;
    float precio;
    cin>>precio;
    cout<<"stock"<<endl;
    int stock;
    cin>>stock;
    cout<<"Descripcion: "<<endl;
    string descripcion;
    cin>>descripcion;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout<<"Categoria: 1)Ropa, 2)Electrodomesticos,3)Otros "<<endl;
    int cate;
    cin>>cate;
    cout<<"¿Disponible?: 1)Si 2)No"<<endl;
    int disponible;
    cin>>disponible;
    bool disponible2;
    if (disponible==1)
    {
        disponible2 = true;
    }
    else
    {
        disponible2 = false;
    }


    if (cate == 1)
    {
       this->isistema->altaProducto(new DTProducto(codigo,nombre,precio,stock,descripcion ,disponible2, "ropa"),nick);
    }
    else if (cate == 2)
    {
        this->isistema->altaProducto(new DTProducto(codigo,nombre,precio,stock,descripcion ,disponible2, "electrodomesticos" ),nick);
    }
    else if (cate == 3)
    {
        this->isistema->altaProducto(new DTProducto(codigo,nombre,precio,stock,descripcion ,disponible2, "otros" ),nick);
    }
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');






}


void PProducto::listarProductos()
{

    set<DTProducto*> productos = this->isistema->listarProductos();

    for (DTProducto* dt : productos) {
        cout << *dt << endl <<endl;;
    }
}

void PProducto::datosProducto()
{
    this->listarProductos();
    string cod;
    cout<<"Ingrese el codigo del producto: "<<endl;
    cin>>cod;
    DTProducto * dt = this->isistema->seleccionarProducto(cod);//hacer una funcion que devuelva el DTProducto en base a un codigo
    if (dt != nullptr)
    {
        cout<<dt->getPrecio()<<endl<<dt->getStock()<<endl<<dt->getDescripcion()<<endl<<dt->getCategoria()<<endl;
    }


}