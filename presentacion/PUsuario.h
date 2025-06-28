#include "ISistema.h"

#ifndef PUSUARIO_H
#define PUSUARIO_H



class PUsuario {
private:
    ISistema* isistema;
public:
    PUsuario(ISistema* isistema);
    virtual ~PUsuario();
    void listarUsuarios();
    void altaUsuario();
};



#endif //PUSUARIO_H
