//
// Created by kevin on 28/6/2025.
//

#include "PProducto.h"


PProducto::PProducto(ISistema * isistema) {
    this->isistema = isistema;
}

PProducto::~PProducto(){}

void PProducto::altaProduto() {
    set<DTUsuario*> usuarios = this->isistema->listarVendedores();

    for (DTUsuario* dt : usuarios) {
        cout << *dt << endl;
    }

}

