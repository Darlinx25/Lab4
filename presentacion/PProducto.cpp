//
// Created by kevin on 28/6/2025.
//

#include "PProducto.h"
#include "DTVendedor.h"


PProducto::PProducto(ISistema * isistema) {
    this->isistema = isistema;
}

PProducto::~PProducto(){}

void PProducto::altaProduto() {
    set<DTUsuario*> vendedor = this->isistema->listarVendedores();

    for (DTUsuario* dt : vendedor) {
        cout << *dt << endl;
    }
    cout<<"Ingrese el nick del vendedor"<<endl;
    string nick;
    cin>>nick;


}

