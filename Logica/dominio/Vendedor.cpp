#include <iostream>
#include "Vendedor.h"

#include "DTVendedor.h"
#include "Integer.h"
#include "OrderedDictionary.h"
#include "../../ICollection/String.h"
using namespace std;

Vendedor::Vendedor(string nick, string pass, DTFecha * fechaNac, int RUT) {
    this->nick=nick;
    this->pass=pass;
    this->fechaNac=fechaNac;
    this->RUT=RUT;
    this->ListProd = new OrderedDictionary();
    this->ListPromo = new OrderedDictionary();
}

Vendedor::~Vendedor() {

}

DTUsuario * Vendedor::getDT()
{
    return new DTVendedor(this->nick,this->fechaNac,this->RUT);


}

void Vendedor::agregarProducto(Producto * p) {

    this->ListProd->add(new String(p->getCodigo().c_str()), p);


}

void Vendedor::agregarPromocion(Promocion *pro) {
    this->ListPromo->add(new Integer(pro->getCodigo()), pro);
}


void Vendedor::mostrarProductos() {
    IIterator* it = this->ListProd->getIterator();
    while (it->hasCurrent()) {
        ICollectible* obj = it->getCurrent();
        Producto* prod = dynamic_cast<Producto*>(obj);
        if (prod != nullptr) {
            DTProducto* dt = prod->getDT();
            cout << *dt << endl<<endl;
            delete dt;
        }
        it->next();
    }
    delete it;
}

/*
 *set<DTProducto*> Vendedor::obtenerProductosdeVendedor() {
    IIterator* it = this->ListProd->getIterator();
    set<DTProducto*> prods;
    while (it->hasCurrent()) {
        ICollectible* obj = it->getCurrent();
        Producto* prod = dynamic_cast<Producto*>(obj);
        if (prod != nullptr) {
            DTProducto* dt = prod->getDT();
            prods.insert(dt);
            delete dt;
        }
        it->next();
    }
    delete it;
    return prods;
}*/

