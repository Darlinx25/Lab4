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
    void listarProductos();

};



#endif //PPRODUCTO_H
