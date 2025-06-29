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

}