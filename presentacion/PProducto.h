#include "ISistema.h"

#ifndef PPRODUCTO_H
#define PPRODUCTO_H



class PProducto {
private:
    ISistema * isistema;
public:
    PProducto(ISistema * isistema);
    ~PProducto();
    void altaProduto();
};



#endif //PPRODUCTO_H
