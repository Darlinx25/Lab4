//
// Created by Chorizo-Cosmico on 28/06/2025.
//

#ifndef PROMOCION_H
#define PROMOCION_H

#include <iostream>
#include <set>
#include "Usuario.h"
#include "DTVendedor.h"
#include "DTRequiere.h"
#include <list>
#include "../../ICollection/interfaces/ICollectible.h"

using namespace std;

class DTPromocion;

class Promocion : public ICollectible {
private:

    string nombre;
    int codigo;
    bool vigente;
    list<DTRequiere*> requiere;
    DTUsuario* vendedor;

public:

    Promocion(string nombre, int codigo, bool vigente);
    virtual ~Promocion();

    string getNombre();
    int getCodigo();
    bool getVigente();
    DTVendedor getVendedor();

    void setNombre(string nombre);
    void setCodigo(int codigo);
    void setVigente(bool vigente);
    void setVendedor(DTUsuario * vendedor);

    virtual DTPromocion * getDT();

};



#endif //PROMOCION_H