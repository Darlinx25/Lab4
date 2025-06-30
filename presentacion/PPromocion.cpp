//
// Created by Chorizo-Cosmico on 28/06/2025.
//

#include "PPromocion.h"
#include <iostream>
#include <string>
#include "../Logica/controlador/SistemaControlador.h"
#include "../Logica/interfaceSistema/ISistema.h"
#include "../Logica/dominio/DTCliente.h"
#include "../Logica/dominio/DTVendedor.h"
#include <limits>

#include "DTPromocion.h"

PPromocion::PPromocion(ISistema *isistema) {
    this->isistema = isistema;
}

PPromocion::~PPromocion() {

}

void PPromocion::altaPromocion() {
    DTPromocion * promocion;

    //Pedazo 1
    cout<<"Ingrese el nombre"<<endl;
    string nombre;
    cin>>nombre;

    cout<<"Ingrese el codigo"<<endl;
    int codigo;
    cin>>codigo;

    bool vigente = true;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    promocion = new DTPromocion(nombre, codigo, vigente);
    set<DTUsuario*> usuarios = this->isistema->altaPromocion(promocion);

    for (DTUsuario* dt : usuarios) {
        cout << *dt << endl;
    }

    cout<<"Ingrese el nombre del Vendedor responsable de la promocion"<<endl;
    string nomVend;
    cin>>nomVend;

    /*set<DTProducto*> productos = this->isistema->seleccionarVendedor(nomVend, codigo);

    for (DTProducto* dt : productos) {
        cout << *dt << endl;
    }*/

    int opcion;

    while (opcion !=0) {

        cout<<"Quiere ingresar un producto a la promocion?"<<endl;
        cout<<"1) Si"<<endl;
        cout<<"0) No"<<endl;
        cin>>opcion;

        if (opcion == 1) {
            cout<<"Ingrese el codigo del producto"<<endl;
            int codProd;
            cin>>codProd;

            cout<<"Ingrese la cantidad minima"<<endl;
            int cantMin;
            cin>>cantMin;

            cout<<"Ingrese el descuento que aplica"<<endl;
            float descuento;
            cin>>descuento;

            //this->isistema->agregarProducto(nomVend, codProd, cantMin, descuento, codigo);
        break;
        }
    }
}