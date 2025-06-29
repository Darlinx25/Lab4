         //
// Created by Chorizo-Cosmico on 28/06/2025.
//

#ifndef DTPROMOCION_H
#define DTPROMOCION_H

#include "Promocion.h"

using namespace std;


class DTPromocion{
private:

    string nombreDT;
    int codigoDT;
    bool vigenteDT;

public:

    DTPromocion();
    DTPromocion(string nombreDT, int codigoDT, bool vigenteDT);
    virtual ~DTPromocion();

    void setNombreDT(string nombreDT);
    void setCodigoDT(int codigoDT);
    void setVigenteDT(bool vigenteDT);

    string getNombreDT();
    int getCodigoDT();
    bool getVigente();

};

ostream& operator<<(ostream& os, DTPromocion& p);

#endif //DTPROMOCION_H
