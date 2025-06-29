//
// Created by Chorizo-Cosmico on 28/06/2025.
//

#ifndef PROMOCION_H
#define PROMOCION_H

#include <iostream>
#include <set>
#include "../../ICollection/interfaces/ICollectible.h"

using namespace std;

class DTPromocion;

class Promocion : public ICollectible {
private:

    string nombre;
    int codigo;
    bool vigente;

public:

    Promocion(string nombre, int codigo, bool vigente);
    virtual ~Promocion();

    string getNombre();
    int getCodigo();
    bool getVigente();

    void setNombre(string nombre);
    void setCodigo(int codigo);
    void setVigente(bool vigente);

    virtual DTPromocion * getDT();

};



#endif //PROMOCION_H